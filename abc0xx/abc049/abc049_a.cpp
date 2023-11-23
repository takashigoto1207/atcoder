#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char c;
  cin >> c;

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    cout << "vowel" << endl;
  else
    cout << "consonant" << endl;
  return 0;
}