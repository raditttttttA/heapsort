#include <stdio.h>

void tampilPohon(int arr[], int n);

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int terbesar = i;
    int kiri = 2 * i + 1;
    int kanan = 2 * i + 2;

    if (kiri < n && arr[kiri] > arr[terbesar]) {
        terbesar = kiri;
    }

    if (kanan < n && arr[kanan] > arr[terbesar]) {
        terbesar = kanan;
    }

    if (terbesar != i) {
        tukar(&arr[i], &arr[terbesar]);
        heapify(arr, n, terbesar);
    }
}

void heapSort(int arr[], int n) {
    int step = 1;

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    printf("Step %d (Max Heap Awal):\n", step);
    step++;
    tampilPohon(arr, n);

    for (int i = n - 1; i > 0; i--) {
        tukar(&arr[0], &arr[i]);
        heapify(arr, i, 0);

        printf("Step %d:\n", step);
        step++;
        tampilPohon(arr, i);
    }
}
