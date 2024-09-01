#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a;
  char s;
  int fatigue = 0;
  int position_l = -1, position_r = -1;
  for(int i = 0; i < n; i++) {
    cin >> a >> s;
    if(s == 'L') {
      if(position_l >= 0) fatigue += abs(a - position_l);
      position_l = a;
    } else {
      if(position_r >= 0) fatigue += abs(a - position_r);
      position_r = a;
    }
  }

  cout << fatigue << endl;

  return 0;
}
