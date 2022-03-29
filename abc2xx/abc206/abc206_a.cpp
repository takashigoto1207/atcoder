#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N * 108 < 20600)
    cout << "Yay!" << endl;
  else if (20600 <= N * 108 && N * 108 < 20700)
    cout << "so-so" << endl;
  else
    cout << ":(" << endl;
  return 0;
}