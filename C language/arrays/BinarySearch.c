#include <stdio.h>
int binSearch(int arr[],int size,int key){
    int start = 0, end = size-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}
void main(){
    int arr[] = {1,2,3,4,5,6,7};
    printf("%d ", binSearch(arr,7,6));
}