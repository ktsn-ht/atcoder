#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n;
  cin >> n;
  
  vector<int64_t> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  int64_t sum = 0;
  int64_t excluded = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
    excluded += a[i] * a[i];
  }
  cout << (sum * sum - excluded) / 2 << endl;

  return 0;
}
