#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, p = 0, mass[4] = {0};;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;

    mass[0] = 1;
    for(int j = 3; j >= 0; j--) {
      if(j + a < 4) {
        mass[j + a] += mass[j];
        mass[j] = 0;
      } else {
        p += mass[j];
        mass[j] = 0;
      }
    }
  }

  cout << p << endl;
  
  return 0;
}
