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
    printf("\n");
    for (int i = 2; i <= 100; i++) {
        int is_prime = 1; // 일단 소수라고 가정

        // 2부터 i의 직전 숫자까지 나누어보며 확인
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0; // 나누어떨어지면 소수가 아님
                break;
            }
        }

        // 소수로 판별된 경우에만 출력
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}