#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int stack_idx=0;
    int answer_idx=0;
    char s[100002]={};
    char answer[100002]={};
    char stack[100002]={};
    fgets(s,100002,stdin);
    for(int i=0;i<strlen(s);i++) {
        if (s[i] == ' ') {
            stack_idx--;
            while (stack_idx >= 0) {
                answer[answer_idx++] = stack[stack_idx];
                stack[stack_idx--] = 0;
            }
            stack_idx++;
            answer[answer_idx++] = ' ';
        } else if (s[i] == '<') {
            stack_idx--;
            while (stack_idx >= 0) {
                answer[answer_idx++] = stack[stack_idx];
                stack[stack_idx--] = 0;
            }
            stack_idx++;
            while (s[i] != '>') {
                answer[answer_idx++] = s[i++];
            }
            answer[answer_idx++] = s[i];
        }else if(s[i]=='\n'){
            stack_idx--;
            while (stack_idx >= 0) {
                answer[answer_idx++] = stack[stack_idx];
                stack[stack_idx--] = 0;
            }
            stack_idx++;
        }else{
            stack[stack_idx++]=s[i];
        }
    }
    printf("%s",answer);
    return 0;
}