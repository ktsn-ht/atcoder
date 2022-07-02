#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  int start = 0;
  for(int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    if(t == 1) {
      start += n - x;
      if(start >= n) start -= n;
    } else {
      int pos = start + x - 1;
      if(pos >= n) pos -= n;
      cout << s[pos] << endl;
    }
  }

  return 0;
}
