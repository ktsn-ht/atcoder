#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector< vector<int> > a(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    int64_t row;
    cin >> row;
    for(int j = n - 1; j >= 0; j--) {
      a[i][j] = row % 10;
      row /= 10;
    }
  }

  int64_t ans = 0;
  vector< pair<int, int> > dir_list{
    {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}
  };
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      for(auto dir : dir_list) {
        int _i = i, _j = j;
        int64_t v = a[_i][_j];
        for(int k = 0; k < n - 1; k++) {
          v *= 10;
          _i += dir.first;
          if(_i < 0)       _i += n;
          else if(_i >= n) _i -= n;
          
          _j += dir.second;
          if(_j < 0)       _j += n;
          else if(_j >= n) _j -= n;
          
          v += a[_i][_j];
        }
        if(ans < v) ans = v;
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}
