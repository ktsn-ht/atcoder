#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int64_t k, a, b;
  cin >> k >> a >> b;
  int64_t a_10 = 0, b_10 = 0;
  int64_t dig = 0;
  while(a > 0) {
    int64_t q = a % 10;
    a_10 += (int64_t)pow(k, dig) * q;
    dig += 1;
    a /= 10;
  }
  dig = 0;
  while(b > 0) {
    int64_t q = b % 10;
    b_10 += (int64_t)pow(k, dig) * q;
    dig += 1;
    b /= 10;
  }
  cout << a_10 * b_10 << endl;
  return 0;
}
