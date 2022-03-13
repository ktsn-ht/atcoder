#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int64_t> a(n), b(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int j = 0; j < n; j++) cin >> b[j];
  
  int ans1 = 0, ans2 = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i] == b[j] && i == j)      ans1++;
      else if(a[i] == b[j] && i != j) ans2++;
    }
  }
  
  cout << ans1 << endl << ans2 << endl;
  
  return 0;
}
