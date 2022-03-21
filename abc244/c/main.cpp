#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> used(2 * n + 1 + 1, 0);
  while(1) {
    for(int i = 1; i <= 2 * n + 1; i++) {
      if(used[i] == 0) {
        used[i]++;
        cout << i << endl << flush;
        break;
      }
    }
    int op;
    cin >> op;
    if(op == 0) break;
    used[op]++;
  }

  return 0;
}
