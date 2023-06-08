
#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {  //23 45 13 17 5--> 13 23 45 17 5  
    int key = array[i];// key = 45/13/17
    int j = i - 1;// j = 0/1

    while (key < array[j] && j >= 0) {//45<23?no   13<45?yes 23<45?yes
      array[j + 1] = array[j]; //arr[2]=45--> 23 45 45 17 5, 23 23 45 17 5
      --j;//j=0,-1
    }
    array[j + 1] = key;//arr[1]= 45 arr[0]= 13
  }
}

// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}