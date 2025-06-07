#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, l;
  cin >> n >> l;

  vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++)
    cin >> d[i];

  vector<int64_t> p_num(l, 0);
  p_num[0] = 1;

  int pos = 0;
  for (int i = 0; i < n - 1; i++)
  {
    pos += d[i];
    if (pos >= l)
      pos -= l;
    p_num[pos]++;
  }

  int64_t ans = 0;
  if (l % 3 != 0)
  {
    cout << 0 << endl;
  }
  else
  {
    for (int i = 0; i < l / 3; i++)
    {
      ans += p_num[i] * p_num[i + l / 3] * p_num[i + l * 2 / 3];
    }
    cout << ans << endl;
  }

  return 0;
}
