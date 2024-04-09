#include <stdio.h>
#include <string.h>
/*
 *A .-	B	-...
C	-.-.	D	-..
E	.	F	..-.
G	--.	H	....
I	..	J	.---
K	-.-	L	.-..
M	--	N	-.
O	---	P	.--.
Q	--.-	R	.-.
S	...	T	-
U	..-	V	...-
W	.--	X	-..-
Y	-.--	Z	--..
1	.----	2	..---
3	...--	4	....-
5	.....	6	-....
7	--...	8	---..
9	----.	0	-----
,	--..--	.	.-.-.-
?	..--..	:	---...
-	-....-	@	.--.-.

 */
char m(char str[7]){
    if(strcmp(str,".-")==0) return 'A';
    if(strcmp(str,"-...")==0) return 'B';
    if(strcmp(str,"-.-.")==0) return 'C';
    if(strcmp(str,"-..")==0) return 'D';
    if(strcmp(str,".")==0) return 'E';
    if(strcmp(str,"..-.")==0) return 'F';
    if(strcmp(str,"--.")==0) return 'G';
    if(strcmp(str,"....")==0) return 'H';
    if(strcmp(str,"..")==0) return 'I';
    if(strcmp(str,".---")==0) return 'J';
    if(strcmp(str,"-.-")==0) return 'K';
    if(strcmp(str,".-..")==0) return 'L';
    if(strcmp(str,"--")==0) return 'M';
    if(strcmp(str,"-.")==0) return 'N';
    if(strcmp(str,"---")==0) return 'O';
    if(strcmp(str,".--.")==0) return 'P';
    if(strcmp(str,"--.-")==0) return 'Q';
    if(strcmp(str,".-.")==0) return 'R';
    if(strcmp(str,"...")==0) return 'S';
    if(strcmp(str,"-")==0) return 'T';
    if(strcmp(str,"..-")==0) return 'U';
    if(strcmp(str,"...-")==0) return 'V';
    if(strcmp(str,".--")==0) return 'W';
    if(strcmp(str,"-..-")==0) return 'X';
    if(strcmp(str,"-.--")==0) return 'Y';
    if(strcmp(str,"--..")==0) return 'Z';
    if(strcmp(str,".----")==0) return '1';
    if(strcmp(str,"..---")==0) return '2';
    if(strcmp(str,"...--")==0) return '3';
    if(strcmp(str,"....-")==0) return '4';
    if(strcmp(str,".....")==0) return '5';
    if(strcmp(str,"-....")==0) return '6';
    if(strcmp(str,"--...")==0) return '7';
    if(strcmp(str,"---..")==0) return '8';
    if(strcmp(str,"----.")==0) return '9';
    if(strcmp(str,"-----")==0) return '0';
    if(strcmp(str,"--..--")==0) return ',';
    if(strcmp(str,".-.-.-")==0) return '.';
    if(strcmp(str,"..--..")==0) return '?';
    if(strcmp(str,"---...")==0) return ':';
    if(strcmp(str,"-....-")==0) return '-';
    if(strcmp(str,".--.-.")==0) return '@';
}
int main(void){
    int t;
    char a;
    scanf("%d",&t);
    char str[7]={};
    int i;
    /*
    for(i=0;i<42;i++){
        scanf("%c %s",&a,str);
        getchar();
        printf("if(strcmp(str,\"%s\")==0) return \'%c\'\n",str,a);
    }
     */
    for(i=0;i<t;i++){
        scanf("%s",str);
        printf("%c", m(str));
    }

    return 0;
}