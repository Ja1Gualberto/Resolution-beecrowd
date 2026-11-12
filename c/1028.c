#include <stdio.h>

int main(){
    int maiorDiv=0, vic, ric, qt;
    scanf("%d", &qt);
    for(int i = 0; i<qt; i++){
        scanf("%d %d", &ric, &vic);
        while(vic !=0){
            maiorDiv = ric %vic;
            ric = vic;
            vic = maiorDiv;
        }
        printf("%d\n", ric);
    }
    return 0;
}