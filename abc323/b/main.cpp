#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector< pair<int, int> > win_all(n, {0, 0});
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;

    int win = 0;
    for(char c : s) {
      if(c == 'o') win++;
    }
    win_all[i].first = win;
    win_all[i].second = i + 1;
  }

  sort(win_all.begin(), win_all.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    if(a.first != b.first) {
      return a.first > b.first;
    } else {
      return a.second < b.second;
    }
  });
  for(int i = 0; i < n; i++) {
    cout << win_all[i].second;
    cout << (i < n - 1 ? ' ' : '\n');
  }

  return 0;
}
