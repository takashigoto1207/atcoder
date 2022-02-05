#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;

  string arr[4] = {"ABC", "ARC", "AGC", "AHC"};
  rep(i, 4) if (S1 != arr[i] && S2 != arr[i] && S3 != arr[i]) {
    cout << arr[i] << endl;
    break;
  }
  return 0;
}