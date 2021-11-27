#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, w;
  cin >> n >> w;
  
  vector<vector<int64_t>> ab(n, vector<int64_t>(2, 0));
  for(int i = 0; i < n; i++) {
    cin >> ab[i][0] >> ab[i][1];
  }
  sort(ab.rbegin(), ab.rend());

  int64_t ans = 0;
  for(int i = 0; i < n; i++) {
    if(ab[i][1] < w) {
      w -= ab[i][1];
      ans += ab[i][0] * ab[i][1];
    } else {
      ans += ab[i][0] * w;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
