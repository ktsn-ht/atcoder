#include<bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int count = 0;
  for(int i = 1; i <= 6; i++) {
    for(int j = 1; j <= 6; j++) {
      if(i + j < x && abs(i - j) < y) count++;
    }
  }
  printf("%.10f\n", (36.0 - count) / 36.0);
  return 0;
}
