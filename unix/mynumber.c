#include <stdio.h>
int main(){
    for(int i=1;i<100;i=i+2){
        printf("%d",i);
        printf(" ");
    }
    printf("\n");
    for(int i=2;i<=100;i=i+2){
        printf("%d",i);
        printf(" ");
    }

    return 0;
}