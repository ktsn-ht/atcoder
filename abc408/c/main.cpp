#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> sum(n + 1, 0);
  for (int i = 0; i < m; i++)
  {
    int l, r;
    cin >> l >> r;
    sum[--l]++;
    sum[r]--;
  }

  for (int i = 1; i < n + 1; i++)
  {
    sum[i] += sum[i - 1];
  }

  int ans = 200000;
  for (int i = 0; i < n; i++)
  {
    ans = min(ans, sum[i]);
  }
  cout << ans << endl;

  return 0;
}
