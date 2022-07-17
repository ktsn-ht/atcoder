#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  vector< pair<int, int> > a(n, {0, 0}), b(n, {0, 0}), ab(n, {0, 0});
  vector<int> flg(n, 0);
  vector<int> pass(x + y + z, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = -i;
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i].first;
    b[i].second = -i;
  }
  for(int i = 0; i < n; i++) {
    ab[i].first = a[i].first + b[i].first;
    ab[i].second = -i;
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  sort(ab.rbegin(), ab.rend());

  // for(int i = 0; i < n; i++) {
  //   cout << a[i].first << " " << a[i].second << endl;
  // }
  
  int count = 0, pt = 0;
  while(true) {
    if(count == x) break;
    int pass_i = -a[pt].second;
    pt++;
    pass[count] = pass_i + 1;
    flg[pass_i] = 1;
    count++;
  }

  pt = 0;
  while(true) {
    if(count == x + y) break;
    int pass_i = -b[pt].second;
    pt++;
    if(flg[pass_i]) continue;
    pass[count] = pass_i + 1;
    flg[pass_i] = 1;
    count++;
  }

  pt = 0;
  while(true) {
    if(count == x + y + z) break;
    int pass_i = -ab[pt].second;
    pt++;
    if(flg[pass_i]) continue;
    pass[count] = pass_i + 1;
    flg[pass_i] = 1;
    count++;
  }

  sort(pass.begin(), pass.end());
  for(int i = 0; i < count; i++) cout << pass[i] << endl;

  return 0;
}
