#include<bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  int x = (x1 == x2) ? x3 : ((x2 == x3) ? x1 : x2);
  int y = (y1 == y2) ? y3 : ((y2 == y3) ? y1 : y2);
  cout << x << " " << y << endl;
  return 0;
}
