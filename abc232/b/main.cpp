#include<bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  
  int k;
  if(t[0] >= s[0]) k = t[0] - s[0];
  else             k = t[0] - s[0] + 26;
  
  bool can_match = true;
  for(int i = 0; i < s.size(); i++) {
    if((t[i] >= s[i] && t[i] - s[i] != k)
    || (t[i] < s[i] && t[i] - s[i] + 26 != k)) {
      can_match = false;
      break;
    }
  }
  
  if(can_match) cout << "Yes" << endl;
  else          cout << "No" << endl;
  
  return 0;
}
