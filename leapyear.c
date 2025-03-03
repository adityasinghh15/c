#include <stdio.h>

int main() {
    int n;
    printf("Enter the year = ");
    scanf("%d", &n);

    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
        printf("Year is a leap year\n");     
    } 
    else {printf("Not a leap year!\n");
    }

    return 0;
}