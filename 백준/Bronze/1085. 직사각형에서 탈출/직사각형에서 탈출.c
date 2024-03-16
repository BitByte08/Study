#include <stdio.h>

int main(){
	int x,y,w,h;
	x=y=w=h=0;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	if((w-x>h-y?h-y:w-x)< (x>y?y:x)){
		if(w-x>h-y){
			printf("%d",h-y);
		}else{
			printf("%d",w-x);
		}
	}else{
		printf("%d",x>y?y:x);
	}
	return 0;
}