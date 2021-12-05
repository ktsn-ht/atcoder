#include<bits/stdc++.h>
using namespace std;

int main() {
  string s, t = "";
  cin >> s;
  for(int i = 0; i < 10; i++) t += "oxx";
  bool is_substring = false;
  for(int i = 0; i < 3; i++) {
    if(t.substr(i, s.length()) == s) {
      is_substring = true;
      break;
    }
  }
  if(is_substring) cout << "Yes" << endl;
  else             cout << "No" << endl;
  return 0;
}
