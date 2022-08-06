#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n, 0);
  for(int i = 1; i < n; i++) cin >> p[i];

  int ans = 0;
  while(n != 1) {
    int tmp = p[n - 1];
    n = tmp;
    ans++;
  }

  cout << ans << endl;

  return 0;
}
