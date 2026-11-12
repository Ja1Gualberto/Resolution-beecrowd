#include <stdio.h>
 
int main() {
 
int N,X, Y,cont;

scanf("%i", &N);
for(int i = 0; i < N; i++){
    cont = 0;
    scanf("%i %i",&X, &Y);
    
    if (X % 2 == 0) X++;
    
    for(int c = 0; c < Y; c++){
        cont += X;
        X += 2;
    }
    printf("%i\n", cont);
    }
     return 0;
 
    return 0;
}
