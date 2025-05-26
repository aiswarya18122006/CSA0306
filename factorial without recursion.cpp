#include <stdio.h>

int main() {
    int num = 7, fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;  
           

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
