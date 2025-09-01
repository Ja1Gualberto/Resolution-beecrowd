#include <stdio.h>
 
int main() {
 
int M, A, B, C;
    scanf("%i %i %i", &M, &A, &B);
    C = M -( A +B);
    
    if(C > A && C >B){
        printf("%i\n", C);
    }
    if(B > A && B >C){
        printf("%i\n", B);
    }
    if(A > B && A >C){
        printf("%i\n", A);
    }
 
    return 0;
}
