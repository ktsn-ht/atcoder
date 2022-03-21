#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string t;
  cin >> n >> t;
  
  int x = 0, y = 0;
  int dir = 0;
  for(char t_i : t) {
    if(t_i == 'S') {
      switch(dir % 4) {
        case 0:
          x++;
          break;
        case 1:
          y--;
          break;
        case 2:
          x--;
          break;
        case 3:
          y++;
          break;
      }
    } else {
      dir++;
    }
  }

  cout << x << " " << y << endl;

  return 0;
}
