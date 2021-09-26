#include<bits/stdc++.h>
using namespace std;
   
int main() {
  int64_t n;
  cin >> n;
  
  vector<int64_t> a(n, 0);
  int64_t sum_a = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum_a += a[i];
  }

  int64_t x;
  cin >> x;

  int64_t k = x / sum_a;
  int64_t sum_b = sum_a * k;
  k *= n;
  for(int i = 0; i < n; i++) {
    if(sum_b > x) break;
    sum_b += a[i];
    k++;
  }

  cout << k << endl;
  
  return 0;
}
