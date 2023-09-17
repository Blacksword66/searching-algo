#include<stdio.h>
#include<stdbool.h>
void linearSearch(int arr[], int n, int key){
  int i, ind;
  bool isFound = false;
  for(i = 0; i<n; i++){
    if(arr[i] == key){
      isFound = true;
      ind = i;
      break;
    }
  }
  if(isFound){
    printf("Element Found!!\n");
    printf("Position: %d \n",ind+1);
  }
  else{
    printf("Element not found :(\n");
  }
}

int main(){
  int n,i;
  scanf("%d",&n);
  int arr[n];
  for(i = 0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int key;
  printf("Enter the element you want to search: \n");
  scanf("%d",&key);
  linearSearch(arr, n, key);
  return 0;
}
