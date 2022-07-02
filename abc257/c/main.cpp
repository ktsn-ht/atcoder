#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector< pair<int64_t, char> > w(n);
  int f = 0;
  for(int i = 0; i < n; i++) {
    cin >> w[i].second;
    if(w[i].second == '1') f++;
  }
  for(int i = 0; i < n; i++) cin >> w[i].first;
  sort(w.begin(), w.end());

  int f_max = f;
  for(int i = 0; i < n; i++) {
    if(w[i].second == '1') f--;
    else                   f++;
    
    if(i < n - 1) {
      if(!(w[i].first == w[i + 1].first) && f_max < f) f_max = f;
    } else {
      if(f_max < f) f_max = f;
    }
  }

  cout << f_max << endl;

  return 0;
}
