#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *start, *end, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    start = arr;
    end = arr + n - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}