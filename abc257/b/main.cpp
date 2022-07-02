#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  
  vector<int> a(n, 0);
  for(int i = 0; i < k; i++) {
    int _a;
    cin >> _a;
    _a--;
    a[_a] = 1;
  }
  
  for(int i = 0; i < q; i++) {
    int l;
    cin >> l;
    l--;
    int pt = 0;
    for(int j = 0; j < n; j++) {
      if(a[j]) {
        if(l == 0) {
          pt = j;
          break;
        } else {
          l--;
        }
      }
    }
    if(pt < n - 1 && a[pt + 1] == 0) {
      a[pt] = 0;
      a[pt + 1] = 1;
    }
  }

  for(int i = 0; i < n; i++) {
    if(a[i]) cout << i + 1 << " ";
  }
  cout << endl;
  
  return 0;
}
