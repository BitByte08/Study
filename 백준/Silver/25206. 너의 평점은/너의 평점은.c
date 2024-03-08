#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    int i;
    double cnt=0,len=0;
    for(i=0;i<20;i++){
        char str2[100] = {};
        char str[2] = {};
        double a;
        scanf("%s %lf %s",str2,&a,str);
        if(str[0] == 'A'){
            if(str[1] == '+'){
                cnt+=4.5 * a;
                //printf("a+\n");
            }else if(str[1] == '0'){
                cnt+=4.0 * a;
                //printf("a0\n");
            }
        }else if(str[0] == 'B'){
            if(str[1] == '+'){
                cnt+=3.5 * a;
                //printf("b+\n");
            }else if(str[1] == '0'){
                cnt+=3.0 * a;
                //printf("b0\n");
            }
        }else if(str[0] == 'C'){
            if(str[1] == '+'){
                cnt+=2.5 * a;
                //printf("c+\n");
            }else if(str[1] == '0'){
                cnt+=2.0 * a;
                //printf("c0\n");
            }
        }else if(str[0] == 'D'){
            if(str[1] == '+'){
                cnt+=1.5 * a;
                //printf("d+\n");
            }else if(str[1] == '0'){
                cnt+=1.0 * a;
                //printf("d0\n");
            }
        }
        if(str[0]!='P'){
            len+=a;
        }
        
    }
    printf("%.6lf",cnt/len);
    return 0;
}
