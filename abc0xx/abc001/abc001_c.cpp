#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double deg, dis;
  cin >> deg >> dis;

  int w_10 = (dis * 10 + 30) / 60;
  int w = 0;
  if (w_10 <= 2)
    w = 0;
  else if (w_10 <= 15)
    w = 1;
  else if (w_10 <= 33)
    w = 2;
  else if (w_10 <= 54)
    w = 3;
  else if (w_10 <= 79)
    w = 4;
  else if (w_10 <= 107)
    w = 5;
  else if (w_10 <= 138)
    w = 6;
  else if (w_10 <= 171)
    w = 7;
  else if (w_10 <= 207)
    w = 8;
  else if (w_10 <= 244)
    w = 9;
  else if (w_10 <= 284)
    w = 10;
  else if (w_10 <= 326)
    w = 11;
  else
    w = 12;

  if (w == 0) {
    cout << "C 0" << endl;
    return 0;
  }

  string dir;
  if (deg < 112.5)
    dir = "N";
  else if (deg < 337.5)
    dir = "NNE";
  else if (deg < 562.5)
    dir = "NE";
  else if (deg < 787.5)
    dir = "ENE";
  else if (deg < 1012.5)
    dir = "E";
  else if (deg < 1237.5)
    dir = "ESE";
  else if (deg < 1462.5)
    dir = "SE";
  else if (deg < 1687.5)
    dir = "SSE";
  else if (deg < 1912.5)
    dir = "S";
  else if (deg < 2137.5)
    dir = "SSW";
  else if (deg < 2362.5)
    dir = "SW";
  else if (deg < 2587.5)
    dir = "WSW";
  else if (deg < 2812.5)
    dir = "W";
  else if (deg < 3037.5)
    dir = "WNW";
  else if (deg < 3262.5)
    dir = "NW";
  else if (deg < 3487.5)
    dir = "NNW";
  else
    dir = "N";

  cout << dir << " " << w << endl;
  return 0;
}