#include <stdio.h>

int main() {
    int arr[] = {10, 21, 4, 45, 66, 93, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Even numbers: ");
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);

    return 0;
}
