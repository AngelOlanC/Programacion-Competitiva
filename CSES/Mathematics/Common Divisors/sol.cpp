#include <bits/stdc++.h>
using namespace std;
// Pura Gente del Coach Moy
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define SZ(x) ((int)(x).size())
#define ALL(x) begin(x), end(x)
#define FOR(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)
#define ENDL '\n'

constexpr int maxn = 1e6;

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;
  vi cnt(maxn + 1, 0);
  FOR (i, 0, n) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  ROF (i, maxn + 1, 1) {
    int c = 0;
    for (int j = i; j <= maxn; j += i) {
      c += cnt[j];
      if (c >= 2) {
        cout << i << ENDL;
        return 0;
      }
    }
  }

  return 0;
}