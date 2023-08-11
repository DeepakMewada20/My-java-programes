#include<stdio.h>
#include<conio.h>
#include<iostream>
#define size 5
int arr[size];
int top=-1;
void trevers(){
	int i;
	printf("Element in stack = ");
	for(i=top;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
void push(){
	int num;
	if(top==(size-1)){
		printf("stack is full");
	}
	else{
		printf("Enter number for push = ");
		scanf("%d",&num);
		top++;
		arr[top]=num;
		printf("Number is pushed");
	}
}
void pop(){
	int i;
	printf("this number is pop = %d\n",arr[top]);
	printf("your new stack is = ");
	top--;
	for(i=top;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
void search(){
	int poss,i;
	printf("Enter number for search = ");
	scanf("%d",&poss);
	i=top;
	while((arr[i]!=poss)&&(i!=-1)){
		i++;
	}
	if(arr[i]==poss){
		printf("Number is found");
	}
	else{
		printf("Number is not found");
	}
}
void switch_case(int ch){
	switch(ch){
		case 1:{
//			printf("push");
			push();
			break;
		}
		case 2:{
//			printf("pop");
			pop();
			break;
		}
		case 3:{
//			printf("search");
			search();
			break;
		}
		case 4:{
//			printf("teravers");
			trevers();
			break;
		}
		case 5:{
			break;
		}
		default:{
			printf("Enter carect choes");
			break;
		}
	}
}
void index(){
	int ch;
	do{
		printf("SETAK OPARETION\n");
		printf("1 Push\n");
		printf("2 pop\n");
		printf("3 search\n");
		printf("4 trevers\n");
		printf("5 Exit\n");
		printf("Enter your chues = ");
		scanf("%d",&ch);
		if((top==-1)&&((ch!=1)&&(ch!=5))){
			printf("Steak is empty");
		}
		else{
//			printf("switch case");
			switch_case(ch);
			
		}
		getch();
		system("cls");
	}while(ch!=5);
}
int main(){
	index();
	return 0;
}

