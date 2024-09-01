#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int64_t a;
  int64_t max_exp_even = 0, max_exp_odd = 0;
  int64_t max_exp_even_prev = 0, max_exp_odd_prev = 0;
  bool is_first_attack = true;
  for(int i = 0; i < n; i++) {
    cin >> a;

    if(max_exp_odd_prev + a * 2 > max_exp_even && !is_first_attack) {
      max_exp_even = max_exp_odd_prev + a * 2;
    }
    if(max_exp_even_prev + a > max_exp_odd) {
      max_exp_odd = max_exp_even_prev + a;
      is_first_attack = false;
    }
    max_exp_even_prev = max_exp_even;
    max_exp_odd_prev = max_exp_odd;
  }

  cout << ((max_exp_even > max_exp_odd) ? max_exp_even : max_exp_odd) << endl;

  return 0;
}
