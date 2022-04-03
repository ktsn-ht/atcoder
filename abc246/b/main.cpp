#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  double h = sqrt(a*a + b*b);
  printf("%.12f %.12f\n", a/h, b/h);
  return 0;
}
