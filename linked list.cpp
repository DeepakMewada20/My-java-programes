#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<iostream>
#include<string.h>
void switchcase(int ch);
typedef struct node{
	int data;
	struct node *next;
}pm;
pm *start=NULL;
pm* creatnode(){
	int a;
	pm *q;
	q=(pm*)malloc(sizeof(pm));
	printf("enter number for insert list = ");
	scanf("%d",&a);
	q->data=a;
	q->next=NULL;
	return q;
	}
void creat_list(){
	system("cls");
	printf("Creat list\n");
	start=creatnode();
	printf("your list is creat\n");
}
void insert_at_being(){
	pm *q;
	system("cls");
	q=creatnode();
	q->next=start;
	start=q;
	printf("your element has inserted\n");
}
void trevers(){
	pm *r;
	if(start==NULL){
		printf("your list is impty");
	}
	else{
		printf("your list = ");
		r=start;
		while(r!=NULL){
			printf("%d,",r->data);
			r=r->next;
		}	
	}
}
void insert_at_end(){
	system("cls");
	printf("Incert at end\t\t\tExit -> prese :1 else :prese any key\n");
	pm *q,*r;
	int ch;
	do{
	q=creatnode();
	r=start;
	while(r->next!=NULL){
		r=r->next;
	}
	r->next=q;
	printf("Exit= ");
	fflush(stdin);
	scanf("%d",&ch);
}while(ch!=1);
	printf("your element has inserted\n");
}
void insert_at_after_possition(){
	system("cls");
	printf("Insert at possition after\n");
	pm *q,*r;
	int poss;
	printf("your list= ");
	trevers();
	q=creatnode();
	printf("\nEnter num for insier at possition = ");
	scanf("%d",&poss);
	r=start;
	while((r->data!=poss)&&(r->next!=NULL)){
		r=r->next;
	}
	if(r->data==poss){
	q->next=r->next;
	r->next=q;
	printf("your element has inserted\n");
    }
    else{
    	printf("possition not found\n");
	}
}
void insert_at_before_possition(){
	system("cls");
	printf("Insert at possition bfore\n");
	pm *q,*r,*s;
	int poss;
	q=creatnode();
	trevers();
	printf("\nEnter num for insier at possition = ");
	scanf("%d",&poss);
	r=start;
	s=r;
	if(r->data==poss){
		q->next=r;
		start=q;
	}
	else{
	while((r->data!=poss)&&(r->next!=NULL)){
		s=r;
		r=r->next;
		printf("your element has ensert\n");
	}
	if(r->data==poss){
		q->next=s;
		s->next=q;	
	}
	else{
		printf("possition not found\n");
	}
}
}
void delete_at_being(){
	system("cls");
	printf("Delete at being\n");
	printf("Before deleted ");
	trevers();
	pm *q;
	if(start==NULL){
		printf("your list is empty");
	}
	else{
	q=start;
	start=q->next;
	free(q);
	printf("\nAfter deleted ");
	trevers();
	printf("\nyour element has deleted\n");
}
}
void delete_at_end(){
	system("cls");
	printf("Delete at and\n");
	printf("Before deleted ");
	trevers();
	pm *q,*p;
	if(start==NULL){
		printf("your list is empty");
	}
	else{
		q=start;
		p=q;
	while(q->next!=NULL){
		p=q;
		q=q->next;
	}
	if(p!=q){
	p->next=NULL;
	}
	else{
		start=NULL;
	}
	free(q);
	printf("\nAfter deleted ");
	trevers();
	printf("your element has delete\n");
}
}
void delete_at_possition(){
	system("cls");
	printf("Delete at possition\n");
	printf("Before deleted ");
	trevers();
	pm *q,*r;
	int poss;
	if(start==NULL){
		printf("your list is impty");
	}
	else{
		printf("\nEnter num for deleta = ");
		scanf("%d",&poss);
		q=start;
		r=q;
		while((q->data!=poss)&&(q!=NULL)){
			r=q;
			q=q->next;
		}
		if(q==NULL){
			printf("element not found");
		}
		else{
			if(q!=r){
				r->next=q->next;
			}
			else{
				start=NULL;
			}
			free(q);
			printf("\nAfter deleted ");
			trevers();
			printf("\nyour element has delete\n");
		}
	}
}
void search(){
	system("cls");
	printf("Search\n");
	pm *r;
	int poss,i=0;
	if(start==NULL){
		printf("\nyour list is impty");
	}
	else{
		printf("Enter num for search = ");
		scanf("%d",&poss);
		r=start;
		while((r->data!=poss)&&(r->next!=NULL)){
			r=r->next;
			i++;
		}
		if(r->next==NULL){
			printf("\nyour element is not found");
		}
		else{
			printf("\nyour element is found = ");
			printf("%d",r->data);
			printf("\npossition of your element is = %d\n",i+1);
			trevers();
		}
	}
}
void index(){
	int ch;
	do{
		printf("Linked list opretion\n");
		printf("1: creat linked list\n");
		printf("2: Insert at being\n");
		printf("3: Insert at end\n");
		printf("4: Insert at possition after\n");
		printf("5: Insert at possition Before\n");
		printf("6: Delete at being\n");
		printf("7: Delete at end\n");
		printf("8: Delete at possition\n");
		printf("9: Search\n");
		printf("10: Trevers\n");
		printf("11: Exit\n");
		printf("Enter your chouse = ");
		scanf("%d",&ch);
		if((start==NULL)&&(ch!=1)&&(ch!=11)){
			printf("please creat list");
		}
		else if((start!=NULL)&&(ch==1)){
			printf("your list is allredy created\nPlease enter outher choude\n");
		}
		else{
			switchcase(ch);
		}
		getch();
		system("cls");
		}while(ch!=11);						
}
int main(){
	//int ch;
	index();
	return 0;
}
void switchcase(int ch){
	switch(ch){
		case 1:{
			creat_list();
			break;
		}
		case 2:{
			insert_at_being();
			break;
		}
		case 3:{
			insert_at_end();
			break;
		}
		case 4:{
			insert_at_after_possition();
			break;
		}
		case 5:{
			insert_at_before_possition();
			break;
		}
		case 6:{
			delete_at_being();
			break;
		}
		case 7:{
			delete_at_end();
			break;
		}
		case 8:{
			delete_at_possition();
			break;
		}
		case 9:{
			search();
			break;
		}
		case 10:{
			system("cls");
			trevers();
			break;
		}
		case 11:{
			printf("exit");
			break;
		}
		default :{
			printf("enter crect chouse");
			break;
		}
	}
}
