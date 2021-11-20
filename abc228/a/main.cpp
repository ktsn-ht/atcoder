#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int s, t, x;
  cin >> s >> t >> x;

  if(s < t && (s <= x && x < t))      cout << "Yes" << endl;
  else if(s > t && (s <= x || x < t)) cout << "Yes" << endl;
  else                                cout << "No" << endl;
  
  return 0;
}
