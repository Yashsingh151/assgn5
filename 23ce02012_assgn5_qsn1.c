#include<stdio.h>

int main() {

    //Print no. of digits
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int temp = x;
    int digits = 0;
    do {
        x/=10;
        digits++;
    } while (x != 0);

    printf("Number of digits: %d\n", digits);

    //Sum of all unique digits present
    x = temp;
    int arr[digits];
    for(int i=0; i<digits; i++) {
        arr[i] = temp%10;
        temp /= 10;

        if(temp/10 == 0){
            arr[i+1] = temp;
        }
    }

    int sum = 0;
    for(int i=0; i<digits-1; i++) {
        for(int j=i+1; j<digits; j++) {
            if(arr[i] == arr[j]) {
                arr[i] = 0;
            }
        }
    }

    for(int i=0; i<digits; i++) {
        sum+= arr[i];
    }

    printf("Sum of all unique digits present: %d", sum);

    return 0;
}
