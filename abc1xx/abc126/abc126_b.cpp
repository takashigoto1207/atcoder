#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int S;
  cin >> S;
  if (1 <= S / 100 && S / 100 <= 12) {
    if (1 <= S % 100 && S % 100 <= 12)
      cout << "AMBIGUOUS" << endl;
    else if (S / 100 <= 12)
      cout << "MMYY" << endl;
  } else {
    if (1 <= S % 100 && S % 100 <= 12)
      cout << "YYMM" << endl;
    else
      cout << "NA" << endl;
  }
  return 0;
}