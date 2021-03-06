#include <bits/stdc++.h>
using namespace std;
#define MAX 2000001
#define VMAX 10000

int main() {
  vector<int> C(VMAX+ 1);
  int n, i, j;
  scanf("%d", &n);

  vector<int> A(n + 1);
  vector<int> B(n + 1);

  for (i = 0; i < VMAX; i++) C[i] = 0;
  
  for (i = 0; i < n; i++) {
    cin >> A[i + 1];
    C[A[i + 1]]++;
  }

  for (i = 1; i <=VMAX; i++) C[i] = C[i] + C[i - 1];

  for (j = 1; j <= n; j++) {
    B[C[A[j]]] = A[j];
    C[A[j]] --;
  }

    for (i = 1; i <= n; i++) {
        if (i > 1) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");

    return 0;
}
