#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int n, k, a;
  cin >> n >> k >> a;
  
  int ans = a + k - 1;
  while(ans > n) ans -= n;
  
  cout << ans << endl;
  
  return 0;
}
