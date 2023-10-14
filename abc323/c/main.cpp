#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector< pair<int, int> > a(m, {0, 0});
  for(int i = 0; i < m; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }

  vector<string> s(n, "");
  for(int i = 0; i < n; i++) cin >> s[i];

  vector<int> score_all(n, 0);
  int highest = 0;
  for(int i = 0; i < n; i++) {
    int score = 0;
    for(int j = 0; j < m; j++) {
      if(s[i][j] == 'o') score += a[j].first;
    }
    score += i + 1;
    score_all[i] = score;
    if(highest < score) highest = score;
  }

  sort(a.rbegin(), a.rend());

  for(int i = 0; i < n; i++) {
    if(score_all[i] == highest) {
      cout << 0 << endl;
      continue;
    }

    int num = 0;
    for(int j = 0; j < m; j++) {
      if(s[i][a[j].second] == 'x') {
        score_all[i] += a[j].first;
        num++;
      }
      if(score_all[i] > highest) {
        cout << num << endl;
        break;
      }
    }
  }

  return 0;
}
