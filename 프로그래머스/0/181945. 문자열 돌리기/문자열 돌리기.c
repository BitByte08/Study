#include <stdio.h>
#include <string.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int i;
    for(i=0;i<strlen(s1);i++){
        printf("%c\n",s1[i]);
    }
    return 0;
}
