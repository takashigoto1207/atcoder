#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];

  vector<int> i(3, 0);
  int next = 0;
  while (true) {
    int cur = next;
    if (i[cur] >= s[cur].length()) {
      cout << (char)('A' + cur) << endl;
      return 0;
    }
    next = (int)(s[cur][i[cur]] - 'a');
    i[cur]++;
  }
}