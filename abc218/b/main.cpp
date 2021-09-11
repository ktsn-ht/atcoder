#include<bits/stdc++.h>
using namespace std;

constexpr int num = 26;
   
int main() {
  vector<int> p(num, 0);
  for(int i = 0; i < num; i++) cin >> p[i];
  string s = "abcdefghijklmnopqrstuvwxyz";
  for(auto v : p) cout << s[v - 1];
  cout << endl;
  return 0;
}
