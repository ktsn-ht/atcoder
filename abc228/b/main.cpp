#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n), is_known(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  while(true) {
    x--;
    if(is_known[x] == 0) {
      is_known[x] = 1;
      ans++;
    } else {
      break;
    }
    x = a[x];
  }

  cout << ans << endl;

  return 0;
}
