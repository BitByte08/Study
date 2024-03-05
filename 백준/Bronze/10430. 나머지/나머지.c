#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int one = (A+B)%C;
    int two = ((A%C)+(B%C))%C;
    int three = (A*B)%C;
    int four = ((A%C)*(B%C))%C;
    printf("%d\n%d\n%d\n%d",one,two,three,four);
    return 0;
}
