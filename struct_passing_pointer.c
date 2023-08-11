#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct imploy{
	char name[10];
	long mn;
	int code;
}emp;
void show(emp *ptr){
	strcpy(ptr->name,"deepak");
	ptr->mn=881506850;
	ptr->code=123;
	//printf("name = %s\n",(*ptr).name);
}
int main(){
	emp e1;
	//struct imploy
	show(&e1);
	printf("name = %s\n",e1.name);
	printf("mn = %ld\n",e1.mn);
	printf("code = %d\n",e1.code);
	return 0; 
}
