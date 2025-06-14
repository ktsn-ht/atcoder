#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> x(q);
  for (int i = 0; i < q; i++)
    cin >> x[i];

  vector<int> count(n + 1, 0);
  vector<int> b(q, 0);
  for (int i = 0; i < q; i++)
  {
    if (x[i] >= 1)
    {
      b[i] = x[i];
      count[x[i]]++;
    }
    else
    {
      int m = 100;
      int idx = -1;
      for (int j = n; j >= 1; j--)
      {
        if (count[j] <= m)
        {
          m = count[j];
          idx = j;
        }
      }
      b[i] = idx;
      count[idx]++;
    }
  }

  for (int i = 0; i < q; i++)
    cout << b[i] << ' ';
  cout << endl;

  return 0;
}
