#include<bits/stdc++.h>
using namespace std;

int begin_idx(vector<int> &mat, int n) {
  for(int i = 0; i < n * n; i++) {
    if(mat[i] == 1) return i;
  }
  return 0;
}

vector< vector<int> > rotate(vector< vector<int> > &mat, int n) {
  vector< vector<int> > mat_rotate(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) mat_rotate[i][j] = mat[n - j - 1][i];
  }
  return mat_rotate;
}

vector<int> reduce_dim(vector< vector<int> > &mat, int n) {
  vector<int> mat_reduce(n * n, 0);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(mat[i][j] == 1) mat_reduce[i * n + j] = 1;
    }
  }
  return mat_reduce;
}

vector<int> shift(vector<int> &vec, int n, int diff) {
  vector<int> vec_shift(n * n, 0);
  for(int i = 0; i < n * n; i++) {
    if(diff > 0) {
      if(i + diff < n * n) {
        vec_shift[i + diff] = vec[i];
      } else {
        vec_shift[i + diff - n * n] = vec[i];
      }
    } else {
      if(i + diff >= 0) {
        vec_shift[i + diff] = vec[i];
      } else {
        vec_shift[i + diff + n * n] = vec[i];
      }
    }
  }
  return vec_shift;
}

bool can_match(vector<int> s, vector<int> t, int n) {
  int diff = begin_idx(s, n) - begin_idx(t, n);
  vector<int> t_shift = shift(t, n, diff);
  for(int i = 0; i < n * n; i++) {
    if(s[i] != t_shift[i]) return false;
  }
  return true;
}
   
int main() {
  int n;
  cin >> n;

  vector< vector<int> > s(n, vector<int>(n, 0));
  vector<int> t(n * n, 0);
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for(int j = 0; j < n; j++) {
      if(str[j] == '#') s[i][j] = 1;
    }
  }
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for(int j = 0; j < n; j++) {
      if(str[j] == '#') t[i * n + j] = 1;
    }
  }

  bool ans_flag = false;

  vector< vector<int> > s_90 = rotate(s, n);
  vector<int> s_90_1 = reduce_dim(s_90, n);
  if(can_match(s_90_1, t, n)) ans_flag = true;
  
  vector< vector<int> > s_180 = rotate(s_90, n);
  vector<int> s_180_1 = reduce_dim(s_180, n);
  if(can_match(s_180_1, t, n)) ans_flag = true;
  
  vector< vector<int> > s_270 = rotate(s_180, n);
  vector<int> s_270_1 = reduce_dim(s_270, n);
  if(can_match(s_270_1, t, n)) ans_flag = true;
  
  vector< vector<int> > s_360 = rotate(s_270, n);
  vector<int> s_360_1 = reduce_dim(s_360, n);
  if(can_match(s_360_1, t, n)) ans_flag = true;

  if(ans_flag) cout << "Yes" << endl;
  else         cout << "No" << endl;
  
  return 0;
}
