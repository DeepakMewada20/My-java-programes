#include<stdio.h>
int main(){
	FILE *ptr;
	int num1,num2;
	printf("enter first employ selery = ");
	scanf("%d",&num1);
	printf("enter second employ selery = ");
	scanf("%d",&num2);
	ptr=fopen("employe selery.txt","w");
	fprintf(ptr,"enter first employ selery is = %d\n",num1);
	fprintf(ptr,"enter second employ selery is = %d",num2);
	fclose(ptr);
	return 0;
}
