#include<stdio.h>
#include<conio.h>
typedef struct compiex{
	int a;
	char x;
	char sing;
	int b;	
}com;
int main(){
	int i;
	com arr[5];
	for(i=0;i<3;i++){
		printf("enter %d eqvetion\n",i+1);
		scanf("%d%c%c%d",&arr[i].a,&arr[i].x,&arr[i].sing,&arr[i].b);
	}
	for(i=0;i<3;i++){
		printf("\nyour %d eqvetion\n",i+1);
		printf("%d%c%c%d",arr[i].a,arr[i].x,arr[i].sing,arr[i].b);
	}
	return 0;
}
