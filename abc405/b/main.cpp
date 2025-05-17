#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  while(true) {
    bool has_missing = false;
    for(int i = 1; i <= m; i++) {
      bool missing = true;
      for(int j = 0; j < n; j++) {
        if(a[j] == i) {
          missing = false;
          break;
        }
      }
      if(missing) {
        has_missing = true;
        break;
      }
    }
    if(has_missing) {
      break;
    } else {
      n--;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
