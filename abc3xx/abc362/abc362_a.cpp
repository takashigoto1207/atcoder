#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, G, B;
  string S;
  cin >> R >> G >> B >> S;

  if (S == "Red")
    cout << min(G, B);
  else if (S == "Green")
    cout << min(R, B);
  else
    cout << min(R, G);
  return 0;
}