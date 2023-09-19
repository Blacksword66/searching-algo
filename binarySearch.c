#include<stdio.h>
#include<stdbool.h>
int binarySearch(int arr[], int lo, int hi, int key){
  if(hi >= lo){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]==key){
      return mid;
    }
    if(arr[mid]>key){
      return binarySearch(arr, lo, mid-1, key);
    }
    return binarySearch(arr,mid+1,hi,key);
  }
  return -1;
}

void display(int arr[], int n){
  int i;
  for(i = 0; i<n; i++){
    printf("%d ",arr[i]);
  }
}

void bubbleSort(int arr[], int n){
  int i,j;
  for(i = 0; i<n-1; i++){
    for(j = 0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  int i;
  for(i = 0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  bubbleSort(arr,n);
  printf("The sorted array is: \n");
  display(arr,n);
  printf("\n");
  int key;
  printf("Enter the element to search");
  scanf("%d",&key);
  int search = binarySearch(arr,0,n-1,key);
  if (search == -1){
    printf("Element not found :(\n");
  }
  else{
    printf("Element found at position: %d\n",search);
  }
}
