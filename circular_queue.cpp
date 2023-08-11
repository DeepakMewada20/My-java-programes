#include<stdio.h>
//#include<conio.h>
#include<iostream>
#define size 5
int queue[size];
int front=-1,rear=-1;
void trevers(){
	if(front==-1){
		printf("queue is empty");
	}
	else{
		printf("Element in queue = ");
		if(rear<front){
			int i=(front-1);
			do{
				i++;
				printf("%d ",queue[i]);
				if(i==(size-1)){
					i=-1;
				}
			}while(i!=rear);
		}
		else{
			for(int i=front;i<=rear;i++){
				printf("%d ",queue[i]);
			}
		}
	}
}
void search(){
	int poss,i;
	if(front==-1){
		printf("queue is empty");
	}
	else{
		printf("enter element for search = ");
		scanf("%d",&poss);
		i=front;
		while((queue[i]!=poss)&&((i<=rear)||(i>=rear))){
			if((i==(size-1))&&(rear<i)){
				i=0;
			}
			else{
				i++;
			}
		}
		if(queue[i]==poss){
			printf("element is fount at %d possition",i);
		}
		else{
			printf("possition not found");
		}
	}
}
void insert(){
	int num;
	if(((front==0)&&(rear==(size-1)))||(front==(rear+1))){
		printf("queue is full");
	}
	else{
		printf("enter number for insert = ");
		scanf("%d",&num);
		if(rear==(size-1)){
			rear=0;
		}
		else{
			if((rear==-1)&&(front==-1)){
				front++;
			}
			rear++;
		}
		queue[rear]=num;
		printf("Number has inserted");
	}
}
void delet(){
	int a;
	if(front==-1){
		printf("queue is empty");
	}
	else{
		a=queue[front];
		if((front==(size-1))&&(front>rear)){	
			front=0;
		}
		else{
			if(front==rear){
				front=-1;
				rear=-1;
			}
			else{
				front++;
			}		
		}
		printf("%d is deleted",a);
	}
}

void switch_case(int ch){
	switch(ch){
		case 1:{
//			printf("push");
			insert();
			break;
		}
		case 2:{
//			printf("pop");
			delet();
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
		printf("1 Insert\n");
		printf("2 Delet\n");
		printf("3 search\n");
		printf("4 trevers\n");
		printf("5 Exit\n");
		printf("Enter your chues = ");
		scanf("%d",&ch);
		switch_case(ch);
		//getch();
		system("cls");
	}while(ch!=5);
}
int main(){
	index();
	return 0;
}

