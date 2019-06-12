#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quick_sort(int arr[], int low, int high){
    if(low<high){
        int p = partition(arr,low,high);
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }
}
int main(){
    int arr[100], low, high,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe given elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe Sorted elements are :\n");
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}