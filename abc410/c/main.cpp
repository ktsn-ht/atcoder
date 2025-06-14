#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t n, q;
  cin >> n >> q;

  vector<int64_t> a(n);
  for (int i = 0; i < n; i++)
    a[i] = i + 1;

  int64_t idx = 0;
  for (int i = 0; i < q; i++)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      int64_t p, x;
      cin >> p >> x;
      a[(p - 1 + idx) % n] = x;
    }
    else if (t == 2)
    {
      int64_t p;
      cin >> p;
      cout << a[(p - 1 + idx) % n] << endl;
    }
    else
    {
      int64_t k;
      cin >> k;
      idx += k;
      idx %= n;
    }
  }

  return 0;
}
