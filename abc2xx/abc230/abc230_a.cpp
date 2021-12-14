#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N >= 42) N++;
  cout << "AGC" << setfill('0') << right << setw(3) << N << endl;
  return 0;
}