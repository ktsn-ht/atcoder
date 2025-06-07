#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int64_t> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int m = 0;
  for (int i = 0; i <= n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (i <= a[j])
        count++;
    }

    if (i <= count && m < i)
    {
      m = i;
    }
  }

  cout << m << endl;

  return 0;
}
