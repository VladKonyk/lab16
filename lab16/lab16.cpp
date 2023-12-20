#include <stdio.h>
#include <stdlib.h>

int main() {
    int option;

    printf_s("Оберіть завдання 1-4: ");
    scanf_s("%d", &option);

    switch(option) {
        case 1:{
            int i, j;
            float s[4][5];
            float f[4] = { 0 };

            printf_s("Введіть елементи масиву s[4][5]:\n");
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 5; j++) {
                    scanf_s("%f", &s[i][j]);
                }
            }

            for (i = 0; i < 4; i++) {
                for (j = 0; j < 5; j++) {
                    if (s[i][j] > 0) {
                        f[i] += s[i][j];
                    }
                }
            }

            printf_s("Вектор f[4]:\n");
            for (i = 0; i < 4; i++) {
                printf_s("f[%d] = %.2f\n", i, f[i]);
            }
        }
        break;
        case 2: {
            int i, j, n;
            float A[10][10];
            float minElement;

            printf_s("Введіть розмірність масиву А[n][n] (n не більше 10):\n");
            scanf_s("%d", &n);

            printf_s("Введіть елементи масиву A[%d][%d]:\n", n, n);
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    scanf_s("%f", &A[i][j]);
                }
            }

            printf_s("\nНайменші елементи кожного стовпця:\n");
            for (j = 0; j < n; j++) {
                minElement = A[0][j];
                for (i = 1; i < n; i++) {
                    if (minElement > A[i][j]) {
                        minElement = A[i][j];
                    }
                }
                printf_s("Мінімальний елемент %d-го стовпця = %.2f\n", j + 1, minElement);
            }
        }
        break;
        case 3: {
            int i, j;
            int s[5][5];
            int maxElement;

            printf_s("Введіть елементи масиву s[5][5]:\n");
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    scanf_s("%d", &s[i][j]);
                }
            }

            for (j = 0; j < 5; j++) {
                maxElement = s[0][j];
                for (i = 1; i < 5; i++) {
                    if (maxElement < s[i][j]) {
                        maxElement = s[i][j];
                    }
                }
                for (i = 1; i < 5; i++){
                    if (s[i][j] == 0) {
                        s[i][j] = maxElement;
                    }
                }
            }

            printf_s("Модифікований масив s[5][5]\n");
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    printf_s("%3.d", s[i][j]);
                }
                printf_s("\n");
            }
            }
        break;
        case 4: {
            int m, n, i, j, p = 1;
            int matrix[100][100];

            printf_s("Введіть розмірність масиву matrix[m][n](m і n <= 100): ");
            scanf_s("%d%d", &m, &n);
            for (i = 0; i < m; i++) {
                if (i % 2 == 0) {
                    for (j = 0; j < n; j++) {
                        matrix[i][j] = p;
                        p++;
                    }
                }
                else {
                    for (j = n - 1; j >= 0; j--) {
                        matrix[i][j] = p;
                        p++;
                    }
                }
            }

            printf_s("Заповнена матриця 'змійкою':\n");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    printf_s("%3d ", matrix[i][j]);
                }
                printf_s("\n");
            }
        }
        break;
    }

    return 0;
}