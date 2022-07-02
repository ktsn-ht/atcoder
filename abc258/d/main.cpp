#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, x;
  cin >> n >> x;

  vector< pair<int64_t, int64_t> > ab(n, {0, 0});
  for(int i = 0; i < n; i++) cin >> ab[i].first >> ab[i].second;

  int64_t time = ab[0].first + ab[0].second;
  time += ab[0].second * (x - 1);
  
  int64_t ans = time;
  for(int i = 1; i < n; i++) {
    time -= ab[i - 1].second * (x - i);
    time += ab[i].first + ab[i].second;
    time += ab[i].second * (x - i - 1);
    if(ans > time) ans = time;
    if(x - i <= 0) break;
  }

  cout << ans << endl;

  return 0;
}
