#include <stdio.h>
#include <stdlib.h>

static int addInt(int result, int a, int b) {
    result = a + b;
    if(a > 0 && b > 0 && result < 0)
        return -1;
    if(a < 0 && b < 0 && result > 0)
        return -1;
    return 0;
}

void win(){
  printf("Can you print this line?");
}

int main() {
    int num1, num2, sum;
    char c;

    printf("n1 > n1 + n2 OR n2 > n1 + n2 \n");
    fflush(stdout);
    printf("What two positive numbers can satisfy above equation: \n");
    fflush(stdout);
    
    if (scanf("%d", &num1) && scanf("%d", &num2)) {
        printf("You entered %d and %d\n", num1, num2);
        fflush(stdout);
        sum = num1 + num2;
        if (addInt(sum, num1, num2) == 0) {
            printf("No overflow\n");
            fflush(stdout);
            exit(0);
        } else if (addInt(sum, num1, num2) == -1) {
            printf("You have an integer overflow\n");
            fflush(stdout);
        }

        if (num1 > 0 || num2 > 0) {
            win();
        }
    }
    return 0;
}
// 119,102,103,119,36,40,119,39,47,56,56,60,34,61,32,63,62,32,61,103,113,102,98,48,35,57,109,124,121,105,62,50,81,1,5,18,22,18,8,23,6,25,4,26,3,65,71,77,86,94,93,29,71,90,17,12,24,90,82,86,83,89,30,20,56,97,54,38,55,49,125,103,43,33,39,36,40,109,101,55,112,61,59,49,50,58,57,121,43,54,97,123,114,114,42,58,19,21,89,67,22,8,70,19,13,26,30,80,76,31,3,79,28,24,16,21,27,26,88,4,23
