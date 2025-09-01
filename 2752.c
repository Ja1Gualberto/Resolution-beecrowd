#include <stdio.h>
 
int main() {
 
    char X[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",X);
    printf("<%30s>\n",X);
    printf("<%.20s>\n",X);
    printf("<%-20s>\n",X);
    printf("<%-30s>\n",X);
    printf("<%.30s>\n",X);
    printf("<%30.20s>\n",X);
    printf("<%-30.20s>\n",X);
 
    return 0;
}
