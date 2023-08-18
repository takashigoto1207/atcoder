#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<char, ll> mp;
  rep(i, N) {
    string S;
    cin >> S;
    mp[S[0]]++;
  }

  cout << mp['M'] * mp['A'] * mp['R'] + mp['M'] * mp['A'] * mp['C'] +
              mp['M'] * mp['A'] * mp['H'] + mp['M'] * mp['R'] * mp['C'] +
              mp['M'] * mp['R'] * mp['H'] + mp['M'] * mp['C'] * mp['H'] +
              mp['A'] * mp['R'] * mp['C'] + mp['A'] * mp['R'] * mp['H'] +
              mp['A'] * mp['C'] * mp['H'] + mp['R'] * mp['C'] * mp['H']
       << endl;
  return 0;
}