#include <stdio.h>

void calculateCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j)));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Cubes of all elements:\n");
    calculateCubes((int *)arr, rows, cols); 

    return 0;
}
