#include <stdio.h>
#include <stdlib.h>

void heapSort(int arr[], int n);

int main() {
    int n;
    int arr[100];

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    printf("\nHasil pengurutan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    system("pause");

    return 0;
}
