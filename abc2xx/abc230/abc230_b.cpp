#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S, str = "oxxoxxoxxoxxoxxoxx";
  cin >> S;

  if (str.find(S) != string::npos)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}