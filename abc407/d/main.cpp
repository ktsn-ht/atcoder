#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<vector<int64_t>> a(20, vector<int64_t>(20, 0));
vector<vector<bool>> covered(20, vector<bool>(20, false));
int64_t ans = 0;

void brute_force(int i, int j)
{
  if (j == w)
  {
    j = 0;
    i++;
  }
  if (i == h)
  {
    int64_t tmp = 0;
    for (int ni = 0; ni < h; ni++)
    {
      for (int nj = 0; nj < w; nj++)
      {
        if (!covered[ni][nj])
          tmp ^= a[ni][nj];
      }
    }
    ans = max(ans, tmp);
    return;
  }
  if (covered[i][j])
  {
    brute_force(i, j + 1);
  }
  else
  {
    brute_force(i, j + 1);
    if (j + 1 < w && !covered[i][j + 1])
    {
      covered[i][j] = covered[i][j + 1] = true;
      brute_force(i, j + 1);
      covered[i][j] = covered[i][j + 1] = false;
    }
    if (i + 1 < h && !covered[i + 1][j])
    {
      covered[i][j] = covered[i + 1][j] = true;
      brute_force(i, j + 1);
      covered[i][j] = covered[i + 1][j] = false;
    }
  }
}

int main()
{
  cin >> h >> w;

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
    }
  }

  brute_force(0, 0);
  cout << ans << endl;

  return 0;
}
