#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> odd, even;

  rep(i, N) {
    int A;
    cin >> A;
    if (A % 2 == 0)
      even.emplace_back(A);
    else
      odd.emplace_back(A);
  }

  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());

  if (odd.size() < 2 && even.size() < 2)
    cout << -1 << endl;
  else if (odd.size() < 2)
    cout << even[0] + even[1] << endl;
  else if (even.size() < 2)
    cout << odd[0] + odd[1] << endl;
  else
    cout << max(odd[0] + odd[1], even[0] + even[1]) << endl;
  return 0;
}