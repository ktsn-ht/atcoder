#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;
  
  int64_t ope1_min = (1 - a > 1 - b) ? 1 - a : 1 - b;
  int64_t ope1_max = (n - a < n - b) ? n - a : n - b;
  int64_t ope2_min = (1 - a > b - n) ? 1 - a : b - n;
  int64_t ope2_max = (n - a < b - 1) ? n - a : b - 1;
  
  for(int64_t i = p; i <= q; i++) {
    for(int64_t j = r; j <= s; j++) {
      if((i - a == j - b && ope1_min <= i - a && i - a <= ope1_max)
      || (i - a == b - j && ope2_min <= i - a && i - a <= ope2_max)) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
  
  return 0;
}
