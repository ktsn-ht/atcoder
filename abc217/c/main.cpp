#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int n;
  cin >> n;
  
  vector<int> p(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> p[i];
  }

  vector<int> q(n, 0);
  for(int i = 0; i < n; i++) {
    q[p[i] - 1] = i + 1;
  }

  for(int i = 0; i < n; i++) {
    cout << q[i] << ((i == n - 1) ? "\n" : " ");
  }

  return 0;
}
