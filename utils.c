#include <time.h>
#include <stdlib.h>

void shuffle(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void generate_random_list(int arr[], int n) {
    // Fill the array with values from 0 to N-1
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Shuffle the array
    shuffle(arr, n);
}