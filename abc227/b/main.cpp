#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int n;
  cin >> n;

  int ans = 0;
  for(int i = 0; i < n; i++) {
    int s;
    cin >> s;

    bool is_error = true;
    for(int a = 1; a < 500; a++) {
      for(int b = 1; b < 500; b++) {
        if(4 * a * b + 3 * a + 3 * b == s) {
          is_error = false;
          break;
        }
      }
      if(!is_error) break;
    }
    if(is_error) ans++;
  }

  cout << ans << endl;
  
  return 0;
}
