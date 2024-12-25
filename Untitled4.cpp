#include <stdio.h>
int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int max = timSoLonNhat(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

