#include <stdio.h>

void print_transpose(int arr[], int n, int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *((arr + j * m) + i));
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &n);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    print_transpose((int *)arr, n, m);
    return 0;
}