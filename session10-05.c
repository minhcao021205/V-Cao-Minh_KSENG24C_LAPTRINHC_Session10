#include <stdio.h>

int main() {
    int arr[] = {15, 3, 8, 10, 23, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, left, right, mid, found = 0, temp;
    int i;
    int j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
