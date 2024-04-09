#include <stdio.h>

void towerOfHanoi(int n,char src, char helper, char dest){
    if(n == 1){
        printf("Transfer disk %d from src %c to dest %c\n",n,src,dest);
        return;
    }
    //tranfer top n-1 disk from S to H using D as helper
    towerOfHanoi(n-1,src,dest,helper);
    //transfer nth disk from S to D 
    printf("Transfer disk %d from src %c to dest %c\n",n,src,dest);
    //tranfer n-1 disk from H to D using S as helper
    towerOfHanoi(n-1,helper,src,dest);  

}

void main(){
    towerOfHanoi(3,'S','H','D');
}