#include <stdio.h>

void main(){
    int n;
    printf("How many students marks do you want to store? ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of %d students: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&marks[i]);
    }
    printf("marks of %d students: ",n);
    for (size_t i = 0; i < n; i++){
        printf("%d ",marks[i]);
    }
    
}