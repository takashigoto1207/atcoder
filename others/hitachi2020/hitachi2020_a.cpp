#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S == "hi" || S == "hihi" || S == "hihihi" || S == "hihihihi" ||
      S == "hihihihihi")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}