#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, k;
  cin >> n >> k;

  vector<int64_t> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < k; i++) {
    vector<int64_t> b;
    for(int j = i; j < n; j += k) b.push_back(a[j]);
    sort(b.begin(), b.end());
    
    int p = 0;
    for(int j = i; j < n; j += k) {
      a[j] = b[p];
      p++;
    }
  }

  bool flag = true;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] > a[i + 1]) {
      flag = false;
      break;
    }
  }

  if(flag) cout << "Yes" << endl;
  else     cout << "No" << endl;

  return 0;
}
