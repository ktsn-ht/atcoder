#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> voted_count;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(voted_count.count(s)) voted_count[s] += 1;
    else                     voted_count[s] = 1;
  }
  string max_voted_candidate;
  int max_voted_count = 0;
  for(auto& v : voted_count) {
    if(v.second > max_voted_count) {
      max_voted_candidate = v.first;
      max_voted_count = v.second;
    }
  }
  cout << max_voted_candidate << endl;
  return 0;
}
