// Nhap xuat mang hai chieu
#include <stdio.h>

#define ROW     4
#define COL     3

int main() {
    char matrix[ROW][COL];
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++) {
            scanf("%s", &matrix[i][j]);
        }
    }
    printf("\n");

    for(int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++){
            putchar(matrix[i][j]);
        }
        printf("\n");
    }
}