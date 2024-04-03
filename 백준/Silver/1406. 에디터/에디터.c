#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node* prev;
    struct node* next;
}node;

void print(node* head){
    node*tmp = head;
    tmp = tmp->next;

    while(tmp){
        printf("%c", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main(void){
    char ch; // getchar() 초기 입력 문자열을 저장
    int cnt; // 명령어 입력 횟수

    node * head = (node*)malloc(sizeof(node)); // head init
    head->data = '!'; 
    head->prev = NULL; 
    head->next = NULL;

    node * corsor = head; // corsor 

    while((ch = getchar()) != '\n'){
        node*n = (node*)malloc(sizeof(node));
        n->data = ch;
        n->prev = corsor;
        corsor->next = n;
        n->next = NULL;

        corsor = n;
    }
    
    scanf("%d", &cnt);

    for(int i=0;i<cnt;i++){
        char tmp;
        scanf(" %c", &tmp); // scanf 공백

        switch (tmp){
            case 'L':{
                if(corsor->prev)
                    corsor = corsor->prev;
                break;
            }case 'D':{
                if(corsor->next)
                    corsor = corsor->next;
                break;
            }case 'B':{
                if(corsor->prev==NULL) continue; // head를 가리키는 경우
        
                node* deln = (node*)malloc(sizeof(node)); // 삭제할 노드
                deln = corsor; // 현재 커서가 가리키는 노드 삭제
                corsor = deln->prev;
                // 마지막 노드를 가리키는 경우
                if(deln->next == NULL){
                    (deln->prev)->next = NULL;
                }else{
                    (deln->prev)->next = deln->next;
                    (deln->next)->prev = deln->prev;
                }
                free(deln);
                break;
            }case 'P':{
                char temp;
                scanf(" %c", &temp);

                node* n = (node*)malloc(sizeof(node));
                n->data = temp;
                n->prev = corsor;
                
                if(corsor->next == NULL){ // 마지막 노드를 가리키는 경우
                    n->next = NULL;
                }else{
                    n->next = corsor->next;
                    (corsor->next)->prev = n;
                }
                corsor->next = n;
                corsor = corsor->next;
                break;
            }
        }
    }
    print(head); 

    return 0;
}