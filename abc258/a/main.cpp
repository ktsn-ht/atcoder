#include<bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  if(k < 60) printf("21:%02d\n", k);
  else       printf("22:%02d\n", k - 60);
  return 0;
}
