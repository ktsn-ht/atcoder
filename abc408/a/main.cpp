#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, s;
  cin >> n >> s;

  int tmp = 0;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    if (t - tmp > s)
    {
      cout << "No" << endl;
      return 0;
    }
    tmp = t;
  }
  cout << "Yes" << endl;
  return 0;
}
