#include <stdio.h>

void bubblesort(int arr[], int arsize);

int main(void) {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  const int arsize = sizeof(arr)/sizeof(arr[0]);

  printf("The number of elements in the arry is: %i\n", arsize);

  for (int i = 0; i < arsize; i++) {
    printf("%i, ", arr[i]);
  }
  printf("\n");

  bubblesort(arr, arsize);

  for (int i = 0; i < arsize; i++) {
    printf("%i, ", arr[i]);
  }
  printf("\n");

  return 0;
}

void bubblesort(int arr[], int arsize) {
  for (int i = 0; i < arsize - 1; i++) {
    int temp = 0;
    for (int j = 0; j < arsize - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
