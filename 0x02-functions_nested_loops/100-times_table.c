#include <stdio.h>

void printTimesTable(int n) {
    if (n > 15 || n < 0) {
        return;
    }
    
    int i, j;
    
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printTimesTable(num);
    
    return 0;
}
