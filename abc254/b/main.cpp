#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector< vector<int> > a(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      if(j == 0 || j == i) a[i][j] = 1;
      else                 a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
  }
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << a[i][j] << ((j != i) ? ' ' : '\n');
    }
  }
  
  return 0;
}
