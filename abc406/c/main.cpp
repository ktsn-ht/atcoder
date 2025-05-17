#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n, 0);
  for(int i = 0; i < n; i++) cin >> p[i];

  vector<int> grad(n, 1);
  for(int i = 0; i < n - 1; i++) {
    if(p[i] > p[i + 1]) grad[i] = -1;
  }

  int64_t ans = 0;
  int64_t up_first = 0;
  int64_t up_second = 0;
  int64_t down = 0;
  for(int i = 0; i < n - 1; i++) {
    if(grad[i] > 0) {
      if(down > 0 && up_first == 0 && up_second == 0) down = 0;
      if(down > 0 && up_first > 0) up_second++;
      else                         up_first++;
    } else {
      if(up_first > 0 && up_second > 0) {
        ans += up_first * up_second;
        up_first = up_second;
        up_second = 0;
        down = 1;
      } else {
        down++;
      }
    }
  }
  if(up_first > 0 && up_second > 0) ans += up_first * up_second;

  cout << ans << endl;

  return 0;
}
