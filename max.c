//Summation and Maximum of Array
#include <stdio.h>

int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[], int n) {
    if (n == 0) return 0;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", summation(arr, n));
    printf("Maximum = %d\n", maximum(arr, n));

    return 0;
}
