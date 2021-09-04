#include<bits/stdc++.h>
using namespace std;
   
int main() {
  vector<string> s(3, "");
  cin >> s[0] >> s[1] >> s[2];
  sort(s.begin(), s.end());
  if(s[0] != "ABC")      cout << "ABC" << endl;
  else if(s[1] != "AGC") cout << "AGC" << endl;
  else if(s[2] != "AHC") cout << "AHC" << endl;
  else                   cout << "ARC" << endl;
  return 0;
}
