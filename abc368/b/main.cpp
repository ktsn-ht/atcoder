#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n, 0);
  for(int i = 0; i < n; i++) cin >> a[i];

  int num_of_operation = 0;
  while(true) {
    int num_of_positive_number = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] > 0) num_of_positive_number++;
    }
    if(num_of_positive_number <= 1) break;

    sort(a.rbegin(), a.rend());
    a[0]--;
    a[1]--;

    num_of_operation++;
  }

  cout << num_of_operation << endl;

  return 0;
}
