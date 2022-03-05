#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if(x <= a)     printf("%.12f\n", 1.0);
  else if(b < x) printf("%.12f\n", 0.0);
  else           printf("%.12f\n", (double)c/(double)(b - a));
  return 0;
}
