#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  deque<int> dq;
  bool rev = false;
  rep(i, N) {
    if (rev)
      dq.push_front(i + 1);
    else
      dq.push_back(i + 1);
    if (S[i] == 'o') rev = !rev;
  }

  if (rev) reverse(dq.begin(), dq.end());
  rep(i, N) cout << dq[i] << " ";
  cout << endl;
  return 0;
}