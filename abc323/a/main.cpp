#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool flg = true;
  for(int i = 1; i < 16; i += 2) {
    if(s[i] == '1') {
      flg = false;
      break;
    }
  }
  cout << (flg ? "Yes" : "No") << endl;
  return 0;
}
