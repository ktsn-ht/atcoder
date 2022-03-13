#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int64_t, vector<int>> mp;
  
  vector<int64_t> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    mp[y[i]].push_back(i);
  }

  string s;
  cin >> s;

  bool ans = false;

  // for(auto iter == mp.begin(); iter != mp.end(); iter++) {
  //   int64_t _y = iter.first;
  //   vector<int> vec = iter.second;
  //   if(vec.size() < 2) continue;

  //   if(ans) break;
  // }

  for(int i = 0; i < n; i++) {
    if(mp[y[i]].size() == 1) continue;

    for(int j = 0; j < mp[y[i]].size(); j++) {
      
    }

    if(ans) break;
  }

  if(ans) cout << "Yes" << endl;
  else    cout << "No" << endl;

  return 0;
}
