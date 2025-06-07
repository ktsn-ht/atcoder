#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = -1;
    for (int j = 0; j < n - 1; j++)
    {
      if (s[j] > s[j + 1])
      {
        l = j;
        break;
      }
    }

    if (l < 0)
    {
      cout << s << endl;
    }
    else
    {
      int r = n - 1;
      for (int j = l; j < n - 1; j++)
      {
        if (s[j + 1] > s[l])
        {
          r = j;
          break;
        }
      }

      for (int j = 0; j < n; j++)
      {
        if (j != l)
          cout << s[j];
        if (j == r)
          cout << s[l];
      }
      cout << endl;
    }
  }

  return 0;
}
