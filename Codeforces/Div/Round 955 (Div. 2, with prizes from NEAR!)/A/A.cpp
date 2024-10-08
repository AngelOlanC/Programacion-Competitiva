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

void solve(int t) {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == b || c == d || (a <= b && c >= d) || (a >= b && c <= d)) {
    cout << "NO" << ENDL;
    return;
  }
  cout << "YES" << ENDL;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;
  FOR (i, 0, t) {
    solve(t + 1);  
  }

  return 0;
}