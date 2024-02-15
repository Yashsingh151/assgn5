#include<stdio.h>

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    int d[4];
    for(int i=0; i<4; i++) {
        d[i] = n % 10;
        n /= 10;
    }

    printf("All possible numbers: \n");
    printf("%d%d%d%d\n", d[0], d[1], d[2], d[3]);
    printf("%d%d%d%d\n", d[0], d[1], d[3], d[2]);
    printf("%d%d%d%d\n", d[0], d[2], d[1], d[3]);
    printf("%d%d%d%d\n", d[0], d[2], d[3], d[1]);
    printf("%d%d%d%d\n", d[0], d[3], d[1], d[2]);
    printf("%d%d%d%d\n", d[0], d[3], d[2], d[1]);
    printf("%d%d%d%d\n", d[1], d[0], d[2], d[3]);
    printf("%d%d%d%d\n", d[1], d[0], d[3], d[2]);
    printf("%d%d%d%d\n", d[1], d[2], d[0], d[3]);
    printf("%d%d%d%d\n", d[1], d[2], d[3], d[0]);
    printf("%d%d%d%d\n", d[1], d[3], d[0], d[2]);
    printf("%d%d%d%d\n", d[1], d[3], d[2], d[0]);
    printf("%d%d%d%d\n", d[2], d[0], d[1], d[3]);
    printf("%d%d%d%d\n", d[2], d[0], d[3], d[1]);
    printf("%d%d%d%d\n", d[2], d[1], d[0], d[3]);
    printf("%d%d%d%d\n", d[2], d[1], d[3], d[0]);
    printf("%d%d%d%d\n", d[2], d[3], d[0], d[1]);
    printf("%d%d%d%d\n", d[2], d[3], d[1], d[0]);
    printf("%d%d%d%d\n", d[3], d[0], d[1], d[2]);
    printf("%d%d%d%d\n", d[3], d[0], d[2], d[1]);
    printf("%d%d%d%d\n", d[3], d[1], d[0], d[2]);
    printf("%d%d%d%d\n", d[3], d[1], d[2], d[0]);
    printf("%d%d%d%d\n", d[3], d[2], d[0], d[1]);
    printf("%d%d%d%d\n", d[3], d[2], d[1], d[0]);

    return 0;
}




    
