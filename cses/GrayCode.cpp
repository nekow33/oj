// https://cses.fi/problemset/task/2205

#include <iostream>
using namespace std;
char ar[16];
int n, step, i;
int main() {
  cin >> n;
  step = 1;
  while (ar[n] == 0) {
    for (int i = n - 1; i >= 0; --i)
      printf("%d", ar[i]);
    printf("\n");
    if (step) 
      ar[0] ^= 1;
    else {
      for (i = 0; i < n && ar[i] != 1; ++i) ;
      ar[i + 1] ^= 1;
    }
    step ^= 1;
  }
}

/**
 * step 1: revert pos 0
 * step 2: revert left of rightest 1
 * step 3: loop step 1 and step 2
 */

