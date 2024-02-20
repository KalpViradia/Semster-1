#include <stdio.h>

void sortArray(int* arr, int arrLength) {
    int* start = arr;
    int* end = arr + arrLength - 1;

    while (start < end) {
        if (*start > *end) {
            int temp = *start;
            *start = *end;
            *end = temp;
        }

        if (*start <= *end) {
            start++;
        }

        if (*start > *end) {
            end--;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, arrLength);

    for (int i = 0; i < arrLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}