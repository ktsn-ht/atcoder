#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());

  int count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
      count++;
  }

  cout << count << endl;
  cout << a[0] << ' ';
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
      cout << a[i] << ' ';
  }

  return 0;
}
