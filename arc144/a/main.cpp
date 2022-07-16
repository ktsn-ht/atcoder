#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << 2 * n << endl;

  int c_1, c_2, c_4;
  c_1 = n % 2;
  c_2 = (n / 2) % 2;
  c_4 = n / 4;
  if(c_1 && c_2) cout << 3;
  else if(c_1)   cout << 1;
  else if(c_2)   cout << 2;
  for(int i = 0; i < c_4; i++) cout << 4;
  cout << endl;

  return 0;
}
