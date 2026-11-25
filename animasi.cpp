#include <stdio.h>
#include <windows.h>

void tampilPohon(int arr[], int n) {
    if (n <= 0) return;

    printf("Pohon:\n");

    if (n >= 1) {
        printf("            %2d\n", arr[0]);
    }
    if (n >= 2) {
        if (n >= 3) {
            printf("           /  \\\n");
            printf("          %2d    %2d\n", arr[1], arr[2]);
        } else {
            printf("           /\n");
            printf("          %2d\n", arr[1]);
        }
    }
    if (n >= 4) {
        if (n >= 5) printf("         / \\");
        else printf("         /  ");

        if (n >= 7) printf("   / \\\n");
        else if (n >= 6) printf("   /\n");
        else printf("\n");

        printf("        %2d", arr[3]);
        if (n >= 5) printf("  %2d", arr[4]);
        else printf("    ");

        if (n >= 6) printf("  %2d", arr[5]);
        else printf("    ");

        if (n >= 7) printf("  %2d\n", arr[6]);
        else printf("\n");
    }
    if (n >= 8) {
        printf("        / \\ / \\ / \\\n");
        printf("       ");
        for (int i = 7; i < n && i < 15; i++) {
            printf("%2d ", arr[i]);
        }
        printf("\n");
    }

    printf("Data: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    Sleep(300);
}
