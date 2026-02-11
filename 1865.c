#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main() {

int A;
scanf("%i",&A);

while(A--){
    int forca;
    char B[20];
    scanf("%s %i",&B, &forca);
    
    if(strcmp(B,"Thor")){
        printf("N\n");
    }else{
        
        printf("Y\n");
    }
}
 
    return 0;
}
