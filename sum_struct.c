#include<stdio.h>
//#include<conio.h>
typedef struct vector{
	int x;
	int y;
}mp;
mp sumvector(mp v1,mp v2){
	mp r;
	r.x=v1.x+v2.x;
	r.y=v1.y+v2.y;
	return r;
}
int main(){
	mp v1,v2,result;
	printf("enter the x vector of v1 = ");
	scanf("%d",&v1.x);
	printf("enter the y vector of v1 = ");
	scanf("%d",&v1.y);
	printf("enter the x vector of v2 = ");
	scanf("%d",&v2.x);
	printf("enter the y vector of v2 = ");
	scanf("%d",&v2.y);
	
	result=sumvector(v1,v2);
	printf("The sum of x vector is = %d and y vector is = %d",result.x,result.y);
	return 0;
}
