#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("Move sheet %d from %c to %c\n", n, A, B);
    }
    else {
        hanoi(n-1, A, C, B);
        // hanoi(1, A, B, C);
        printf("Move sheet %d from %c to %c\n", n, A, B);
        hanoi(n-1, C, B, A);
    }
}

int main() {
    int n;
    printf("請輸入盤數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
