#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int l = 0, r = s.length() - 1;
  bool can_match = true;
  bool can_add_a = true;
  while(r - l >= 1) {
    if(s[l] != s[r]) {
      if(s[r] == 'a' && can_add_a) {
        r--;
        continue;
      } else {
        can_match = false;
        break;
      }
    }
    if(s[r] != 'a') can_add_a = false;
    l++;
    r--;
  }

  if(can_match) cout << "Yes" << endl;
  else          cout << "No" << endl;

  return 0;
}
