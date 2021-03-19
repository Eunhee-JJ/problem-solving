#include <stdio.h>

#define A 0
#define B 1
int main(void)
{
        int n;
        int time = 0;
        int line;

        scanf("%d", &n);
        int A_t[n], B_t[n], AtoB[n], BtoA[n];
        for(int i=0; i<n-1; i++){
                scanf("%d %d %d %d", &A_t[i], &B_t[i], &AtoB[i], &BtoA[i]);
        }
        scanf("%d %d", &A_t[n-1], &B_t[n-1]);

        for(int i=0; i<n-1; i++){
                if(i == 0) { // 조립 시작 라인 선택
                        if(A_t[i] < B_t[i]){
                                time += A_t[i];
                                line = A;
                        }
                        else{
                                time += B_t[i];
                                line = B;
                        }
                }
                else{
                        if(line == A){
                                if(A_t[i] < B_t[i] + AtoB[i-1]){
                                        time += A_t[i];
                                }
                                else{
                                        time = time + B_t[i] + AtoB[i-1];
                                        line = B;
                                }
                        }
                        else{
                                  if(B_t[i] < A_t[i] + BtoA[i-1]){
                                        time = time + B_t[i];
                                        
                                }
                                else{
                                        time = time + A_t[i] + BtoA[i-1];
                                        line = A;
                                }
                        }
                }
        }
        // n번 작업장 선택
        if(line == A){
                if(A_t[n-1] < B_t[n-1] + AtoB[n-2]){
                        time += A_t[n-1];
                        
                }
                else{
                        time = time + B_t[n-1] + AtoB[n-2];
                        line = B;
                }
        }
        else{
                if(B_t[n-1] < A_t[n-1] + BtoA[n-2]){
                        time = time + B_t[n-1];
                        
                }
                else{
                        time = time + A_t[n-1] + BtoA[n-2];
                        line = A;
                }
        }
        printf("%d", time);


  return 0;
}
