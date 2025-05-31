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

    // i文字目までの0の個数, 1の個数
    vector<int> a(n + 1, 0), b(n + 1, 0);
    for (int j = 1; j < n + 1; j++)
    {
      if (s[j - 1] == '0')
      {
        a[j] = a[j - 1] + 1;
        b[j] = b[j - 1];
      }
      else
      {
        a[j] = a[j - 1];
        b[j] = b[j - 1] + 1;
      }
    }

    // c_i = a_i - b_i
    vector<int> c(n + 1, 0);
    for (int j = 0; j < n + 1; j++)
      c[j] = a[j] - b[j];

    int mi = 200000;
    int ma = 0;
    for (int j = 1; j <= n + 1; j++)
    {
      ma = max(ma, c[j - 1]);
      mi = min(mi, c[j - 1] - ma);
    }

    cout << b[n] + mi << endl;
  }

  return 0;
}
