#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int64_t ans = 0;
  int b_count = 0;
  for(int i = s.size() - 1; i >= 0; i--) {
    int count = s[i] - '0' - b_count;
    if(count < 0) {
      count %= 10;
      if(count != 0) count += 10;
    }
    b_count += count;
    ans += count;
  }

  cout << ans + s.size() << endl;
  return 0;
}
