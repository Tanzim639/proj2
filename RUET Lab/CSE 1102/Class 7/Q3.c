#include<stdio.h>

int main() {
    int n, max =0 , count=0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
   printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n-1; i++) {
        if (arr[i] < arr[i+1]){
            count++;
            if (count > max)
            max =count;
        }
        else count =0;
    }
    printf("The length of the longest subsequesnce is %d\n", max+1);
    return 0;
}



