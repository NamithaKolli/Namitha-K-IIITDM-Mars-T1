#include <stdio.h>
#include <stdlib.h>

// Function to swap values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find median
int find_median(int arr[], int w) {
    for(int i = 0; i < w - 1; i++) {
        for(int j = 0; j < w - i - 1; j++) {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
    return arr[w / 2];
}

// Muchiko filter (average)
void muchiko_filter(int data[], int n, int w) {
    printf("Muchiko Filter Output:\n");
    for(int i = 0; i <= n - w; i++) {
        int sum = 0;
        for(int j = 0; j < w; j++) {
            sum += data[i + j];
        }
        printf("%d ", sum / w);
    }
    printf("\n");
}

// Sanchiko filter (median)
void sanchiko_filter(int data[], int n, int w) {
    printf("Sanchiko Filter Output:\n");
    for(int i = 0; i <= n - w; i++) {
        int window[10];
        for(int j = 0; j < w; j++) {
            window[j] = data[i + j];
        }
        printf("%d ", find_median(window, w));
    }
    printf("\n");
}

int main() {
    FILE *fp;
    int data[100], n = 0, w = 3;
    int choice;

    fp = fopen("log.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read values from file
    while(fscanf(fp, "%d", &data[n]) != EOF) {
        n++;
    }
    fclose(fp);

    printf("Choose Filter:\n1. Muchiko (Average)\n2. Sanchiko (Median)\n");
    scanf("%d", &choice);

    if(n < w) {
        printf("Not enough data for the given window size.\n");
        return 1;
    }

    if(choice == 1)
        muchiko_filter(data, n, w);
    else if(choice == 2)
        sanchiko_filter(data, n, w);
    else
        printf("Invalid choice.\n");

    return 0;
}
