#include <stdio.h>
#include <stdlib.h>

void heapSort(int arr[], int n);

int main() {
    char namaFile[100];
    int n = 0;
    int arr[100];

    printf("Masukkan nama file: ");
    scanf("%s", namaFile);

    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        printf("File tidak ditemukan!\n");
        system("pause");
        return 1;
    }

    while (fscanf(file, "%d", &arr[n]) != EOF) {
        n++;
    }
    fclose(file);

    printf("\nData awal dari file:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    heapSort(arr, n);

    printf("Hasil akhir terurut:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    system("pause");

    return 0;
}
