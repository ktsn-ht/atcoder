#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  vector<int64_t> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  int64_t max = 1;
  for(int i = 0; i < k; i++) max *= 10;
  max--;

  int64_t ans = 1;
  for(int i = 0; i < n; i++) {
    if(ans > max / a[i]) {
      ans = 1;
    } else {
      ans *= a[i];
    }
  }
  cout << ans << endl;

  return 0;
}
