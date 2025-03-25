#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> card(14, 0);
  rep(i, 7) {
    int x;
    cin >> x;
    card[x]++;
  }

  sort(card.rbegin(), card.rend());
  if (3 <= card[0] && 2 <= card[1])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}