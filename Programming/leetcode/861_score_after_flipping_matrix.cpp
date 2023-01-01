#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> &grid)
{
  for (auto &&i : grid)
  {
    for (auto &&j : i)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

int sumMatrix(vector<vector<int>> &grid)
{
  int sum = 0;
  int column = grid[0].size();
  for (int i = 0; i < grid.size(); i++)
  {
    for (int j = 0; j < grid[i].size(); j++)
    {
      sum += (grid[i][j] * (grid[i][j] << (column - j - 1)));
    }
  }
  return sum;
}

void changeBit(vector<vector<int>> &grid, int row, int column, string changeDirection)
{
  int limit = changeDirection == "row" ? grid[row].size() : grid.size();

  if (changeDirection == "row")
  {
    for (int i = 0; i < limit; i++)
    {
      grid[row][i] = grid[row][i] > 0 ? 0 : 1;
    }
  }
  else
  {
    for (int i = 0; i < limit; i++)
    {
      grid[i][column] = grid[i][column] > 0 ? 0 : 1;
    }
  }
}

int countSetBit(vector<vector<int>> &grid, int columnNo)
{
  int count = 0;
  for (int i = 0; i < grid.size(); i++)
  {
    count += grid[i][columnNo];
  }
  return count;
}

int main()
{
  vector<vector<int>> grid = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};

  printMatrix(grid);

  cout << endl;
  for (int i = 0; i < grid.size(); i++)
  {
    if (grid[i][0] == 0)
    {
      changeBit(grid, i, 0, "row");
      printMatrix(grid);
      continue;
    }
  }

  for (int j = 1; j < grid[0].size(); j++)
  {
    int count = countSetBit(grid, j);
    if (count <= grid.size() / 2)
    {
      changeBit(grid, 0, j, "column");
      printMatrix(grid);
    }
    cout << endl;
  }

  cout << sumMatrix(grid) << endl;
  return 0;
}