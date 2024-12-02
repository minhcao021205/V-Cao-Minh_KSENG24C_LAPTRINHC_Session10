#include <stdio.h>

int main() {
    int arr[] = {42, 7, 19, 33, 4, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, left, right, mid, found = 0, key, j;
    int i;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            printf("Phan tu %d co tai vi tri %d\n", x, mid);
            found = 1;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Phan tu %d khong co trong mang\n", x);
    }

    return 0;
}
