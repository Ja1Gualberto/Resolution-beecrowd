#include <stdio.h>
 
int main() {
 
int x;

scanf("%i", &x);
 if(x % 2 ==0){
        x = x+1;
    }
    printf("%i\n", x);
    
for(int i = 1; i <= 5; i++){
    printf("%i\n",x+=2);
}
 
    return 0;
}
