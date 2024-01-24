#include <stdio.h>
#include <locale>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    int i, j, m, n, x = 1;
    int** a;

    printf("Введiть кiлькiсть рядкiв матрицi: ");
    scanf_s("%d", &m);

    printf("Введiть кiлькiсть стовпцiв матрицi: ");
    scanf_s("%d", &n);

    a = (int**)malloc(m * sizeof(int*));
    for (i = 0; i < m; i++) {
        a[i] = (int*)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                a[i][j] = x;
                x++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                a[i][j] = x;
                x++;
            }
        }
    }

    printf("Заповнена \"змiйкою\" матриця:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}