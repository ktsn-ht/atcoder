#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < k; i++) cout << a[n - k + i] << ' ';
  for(int i = 0; i < n - k; i++) {
    if(i == n - k - 1) cout << a[i] << endl;
    else               cout << a[i] << ' ';
  }

  return 0;
}
