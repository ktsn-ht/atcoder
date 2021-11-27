#include<bits/stdc++.h>
using namespace std;

int main() {
  int64_t a, b;
  cin >> a >> b;
  bool carry = false;
  while(true) {
    int a_dig = a % 10;
    int b_dig = b % 10;
    if(a_dig + b_dig >= 10) {
      carry = true;
      break;
    }
    a /= 10;
    b /= 10;
    if(a == 0 || b == 0) break;
  }
  if(carry) cout << "Hard" << endl;
  else      cout << "Easy" << endl;
  return 0;
}
