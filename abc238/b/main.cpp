#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> cut(360 + 1, 0);
  cut[0] = 1;
  cut[360] = 1;

  int dig = 0;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    dig += a;
    dig %= 360;
    cut[dig] = 1;
  }
  
  int ans = 0;
  int l = 0, r;
  for(int i = 1; i <= 360; i++) {
    if(cut[i]) {
      r = i;
      if(r - l > ans) ans = r - l;
      l = r;
    }
  }
  cout << ans << endl;

  return 0;
}
