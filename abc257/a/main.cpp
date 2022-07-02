#include<bits/stdc++.h>
using namespace std;

int main() {
  string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int n, x;
  cin >> n >> x;
  int p = x / n;
  if(x % n != 0) p += 1;
  cout << s[p - 1] << endl;
  return 0;
}
