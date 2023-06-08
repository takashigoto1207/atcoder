#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int max_l = 0, sum = 0;
  rep(i, N) {
    int l;
    cin >> l;
    sum += l;
    max_l = max(max_l, l);
  }
  if (max_l * 2 < sum)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}