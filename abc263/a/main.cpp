#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  
  vector<int> num(13, 0);
  num[--a]++;
  num[--b]++;
  num[--c]++;
  num[--d]++;
  num[--e]++;

  bool flg_2 = false, flg_3 = false;
  for(int i = 0; i < 13; i++) {
    if(num[i] == 2)      flg_2 = true;
    else if(num[i] == 3) flg_3 = true;
  }

  if(flg_2 && flg_3) cout << "Yes" << endl;
  else               cout << "No" << endl;

  return 0;
}
