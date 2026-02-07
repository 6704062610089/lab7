#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int M, N;
    if (scanf("%d %d", &M, &N) != 2) return 0;

    int total = M * N;
    if (total > 101) {
        return 0;
    }

    int pool[101];
    for (int i = 0; i < 101; i++) pool[i] = 100 + i;

    srand((unsigned)time(NULL));
    for (int i = 100; i > 0; i--) {
        int j = rand() % (i + 1);
        int t = pool[i];
        pool[i] = pool[j];
        pool[j] = t;
    }

    int A[20][20];
    int k = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = pool[k++];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", A[i][j]);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
