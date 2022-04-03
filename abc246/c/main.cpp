#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, k, x;
  cin >> n >> k >> x;
  
  vector<int64_t> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.rbegin(), a.rend());
  
  for(int i = 0; i < n; i++) {
    int _k = a[i] / x;
    if(k >= _k) {
      a[i] -= _k * x;
      k -= _k;
    } else {
      a[i] -= k * x;
      k = 0;
      break;
    }
  }

  sort(a.rbegin(), a.rend());

  int64_t ans = 0;
  for(int i = 0; i < n; i++) {
    if(k > 0) k--;
    else      ans += a[i];
  }

  cout << ans << endl;

  return 0;
}
