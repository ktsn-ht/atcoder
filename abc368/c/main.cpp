#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> h(n, 0);
  for(int i = 0; i < n; i++) cin >> h[i];

  int64_t t = 0;
  for(int i = 0; i < n; i++) {
    t += h[i] / 5 * 3;
    switch(t % 3) {
      case 0:
        switch(h[i] % 5) {
          case 0:
            break;
          case 1:
            t += 1;
            break;
          case 2:
            t += 2;
            break;
          default:
            t += 3;
        }
        break;
      case 1:
        switch(h[i] % 5) {
          case 0:
            break;
          case 1:
            t += 1;
            break;
          default:
            t += 2;
        }
        break;
      case 2:
        switch(h[i] % 5) {
          case 0:
            break;
          case 4:
            t += 2;
            break;
          default:
            t += 1;
        }
        break;
    }
  }

  cout << t << endl;

  return 0;
}
