#include<stdio.h>

int calcFatByLoop(int num) {
    int i, fat=1;

    for (i=num; i>0; i--) {
        fat*=i;
    }

    return fat;
}

/*

    total = 1 * calcFatByRecursion(0)       = 1
    total = 2 * calcFatByRecursion(1)       = 2
    total = 3 * calcFatByRecursion(2)       = 6
    total = 4 * calcFatByRecursion(3)       = 24
    total = 5 * calcFatByRecursion(4)       = 120

*/

int calcFatByRecursion(int num) {
    int total;
    
    if (num == 0) {
        return 1;
    }
    total = num * calcFatByRecursion(num-1);

    return total;
}

main() {
    int num, result;

    printf("Enter with a number: ");
    scanf("%d", &num);

    result = calcFatByLoop(num);
    printf("It got: %d by loop\n\n", result);

    result = calcFatByRecursion(num);
    printf("It got: %d by recursion\n\n", result);


    if (num > 0) {
        printf("this number is greater than zero\n\n");
    }

    if (num < 0) {
        printf("this number is lower than zero\n\n");
    }

}