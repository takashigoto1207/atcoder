#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  cout << setfill('0') << right << setw(2) << N / 3600;
  cout << ":";
  cout << setfill('0') << right << setw(2) << (N % 3600) / 60;
  cout << ":";
  cout << setfill('0') << right << setw(2) << N % 60;
  return 0;
}