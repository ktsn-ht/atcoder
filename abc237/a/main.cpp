#include<bits/stdc++.h>
using namespace std;

constexpr int64_t min_num = 1 << 31;
constexpr int64_t max_num= ~(1 << 31);

int main() {
  int64_t n;
  cin >> n;
  if(min_num <= n && n <= max_num) cout << "Yes" << endl;
  else                             cout << "No" << endl;
  return 0;
}
