#include<bits/stdc++.h>
using namespace std;

int x, y;

int64_t change_red(int, int64_t);
int64_t change_blue(int, int64_t);

int main() {
  int n;
  cin >> n >> x >> y;
  cout << change_red(n, 1) << endl;
  return 0;
}

int64_t change_red(int n, int64_t k) {
  if(n == 1) return 0;
  return change_red(n - 1, k) + change_blue(n, k * x);
}

int64_t change_blue(int n, int64_t k) {
  if(n == 1) return k;
  return change_red(n - 1, k) + change_blue(n - 1, k * y);
}
