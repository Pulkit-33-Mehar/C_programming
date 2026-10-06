#include <stdio.h>
int insertElement(int arr[], int n, int cap, int x) {
    if (n == cap) {
        printf("Array is full\n");
        return n;
    }
    arr[n] = x;
    n++;
    return n;
}
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int cap = 10;
    int x = 60;
    n = insertElement(arr, n, cap, x);
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}