#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  vector<int> char_count(26, 0);
  for(auto v : s) {
    char_count[v - 97]++;
  }

  for(int i = 0; i < 26; i++) {
    for(int j = 0; j < char_count[i]; j++) cout << char(i + 97);
  }
  cout << endl;

  return 0;
}
