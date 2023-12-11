for (auto &&i : holder)
  {
    cout << i.first << " " << i.second << endl;

    if (i.second % 2 == 1 && i.second % 3 == 1)
    {
      // cout << i.first << " " << i.second << endl;
      cout << -1 << endl;
      return -1;
    }
    else
    {
      if (i.second % 3 == 0 || i.second % 3 >= 2)
      {
        // cout << i.first << " " << i.second << endl;
        count += (i.second / 3);
        if (i.second % 3 != 0)
          count++;
      }
      else
      {
        count += (i.second / 2);
        if (i.second % 2 != 0)
          count++;
      }
    }
  }
  cout << count << endl;