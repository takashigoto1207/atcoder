#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<string, int> mp;
  mp["tourist"] = 3858;
  mp["ksun48"] = 3679;
  mp["Benq"] = 3658;
  mp["Um_nik"] = 3648;
  mp["apiad"] = 3638;
  mp["Stonefeang"] = 3630;
  mp["ecnerwala"] = 3613;
  mp["mnbvmar"] = 3555;
  mp["newbiedmy"] = 3516;
  mp["semiexp"] = 3481;

  string S;
  cin >> S;

  cout << mp[S] << endl;
  return 0;
}