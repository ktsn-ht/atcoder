#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> scores(n), scores_sorted(n);
  for(int i = 0; i < n; i++) {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    scores[i] = p1 + p2 + p3;
  }
  copy(scores.begin(), scores.end(), scores_sorted.begin());
  sort(scores_sorted.rbegin(), scores_sorted.rend());

  int border = scores_sorted[k - 1];
  for(int i = 0; i < n; i++) {
    int score = scores[i];
    if(score + 300 >= border) cout << "Yes" << endl;
    else                      cout << "No" << endl;
  }

  return 0;
}
