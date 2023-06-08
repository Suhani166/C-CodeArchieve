#include <stdio.h>
#include<stdlib.h>
#include<limits.h>



int maximumSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    int i = 0;
    for (; i <= n - 1; i++) {
        currSum += arr[i];
        
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
   int n;
   printf("Enter size of array: \n");
   scanf("%d", &n);

   int arr[n];

    printf("Enter values in array: \n");
   for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
   printf("%d", maximumSubarraySum(arr, n));
   return 0;
}