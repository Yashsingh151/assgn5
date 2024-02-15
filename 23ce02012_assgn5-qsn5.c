#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    char choice;
    do{
        printf("Provide the number: \n");
        scanf("%d", &n);

        if(n % 2 == 0) {
            sum += n;
        }

        printf("Do you want to continue?\n");
        scanf(" %c", &choice); 

        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            printf("Not a valid input\n");
            scanf(" %c", &choice);
        }
        
    } while (choice == 'Y' || choice == 'y');

    printf("Sum of even integers: %d\n", sum);

    return 0;
}