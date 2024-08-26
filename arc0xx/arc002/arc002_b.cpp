#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
 int Y, M, D;
  scanf("%d/%d/%d", &Y, &M, &D);

  int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  while (Y % (D * M)) {
    month[2] = 28;
    if (((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0)) month[2]++;
    D++;
    if (D > month[M]) D = 1, M++;
    if (M > 12) Y++, M = 1;
  }
  printf("%d/%02d/%02d\n", Y, M, D);
  return 0;
}