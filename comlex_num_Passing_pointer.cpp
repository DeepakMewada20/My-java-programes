#include<stdio.h>
//#include<conio.h>
typedef struct compiex{
	int a;
	char x;
	char sing;
	int b;	
}com;
void show(com *ptr){
	int i;
		printf("\nyour %d eqvetion\n",++i);
		printf("%d%c%c%d",ptr->a,ptr->x,ptr->sing,ptr->b);
	}
int main(){
	int i;
	com arr[3];
	for(i=0;i<3;i++){
		printf("enter %d eqvetion\n",i+1);
		scanf("%d%c%c%d",&arr[i].a,&arr[i].x,&arr[i].sing,&arr[i].b);
	}
	for(i=0;i<3;i++){
	show(&arr[0]);
}
	return 0;
}
