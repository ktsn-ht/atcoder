#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  vector<int> diff(n - 1, 0);
  for(int i = 0; i < n - 1; i++) diff[i] = a[i + 1] - a[i];

  int64_t ans = 0;
  int64_t same_diff_count = 1;
  for(int i = 0; i < n - 2; i++) {
    if(diff[i] == diff[i + 1]) {
      same_diff_count++;
    } else {
      ans += (same_diff_count + 1) * (same_diff_count + 2) / 2 - 1;
      same_diff_count = 1;
    }
  }
  ans += (same_diff_count + 1) * (same_diff_count + 2) / 2;
  if(n == 1) ans = 1;

  cout << ans << endl;

  return 0;
}
