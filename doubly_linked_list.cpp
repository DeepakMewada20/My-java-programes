#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<malloc.h>
typedef struct node{
	struct node *prives;
	int data;
	struct node *next;
}pm;
pm *start=NULL;
pm* creat_node(){
	pm *p;
	int a;
	p=(pm*)malloc(sizeof(pm));
	printf("Enter number = ");
	scanf("%d",&a);
	p->prives=NULL;
	p->data=a;
	p->next=NULL;
	return p;
}
void creat_list(){
	system("cls");
	start=creat_node();
	printf("your list is created.\nyou can perform other operation.");
}
void trevers(){
	pm *q;
	q=start;
	printf("your list = ");
	while(q!=NULL){
		printf("%d,",q->data);
		q=q->next;
	}
}
void insert_at_begin(){
	pm *p;
	p=creat_node();
	p->next=start;
	start->prives=p;
	start=p;
	printf("your element has inserted");
}
void insert_at_end(){
	pm *p,*q;
	p=creat_node();
	q=start;
	while(q->next!=NULL){
		q=q->next;
	}
	q->next=p;
	p->prives=q;
	printf("your element has inserted");
}
void insert_at_possition_before(){
	pm *p,*q;
	int poss;
	printf("Enter possition for insert element before");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=NULL)){
		q=q->next;
	}
	if(q==start){
		if(q->data!=poss){
			printf("your element not found");
		}
		else{
			p=creat_node();
			p->next=q;
			q->prives=p;
			start=p;
			printf("your element has insered");
		}
	}
	else{
		if(q->data!=poss){
			printf("your element not found");
		}
		else{
			p=creat_node();
			p->next=q;
			q->prives->next=p;
			p->prives=q->prives;
			q->prives=p;
			printf("your element has insered");
		}
	}
}
void insert_at_possition_after(){
	pm *p,*q;
	int poss;
	printf("enter possition for insert element after");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=NULL)){
		q=q->next;
	}
	if(q->next==NULL){
		if(q->data!=poss){
			printf("Element not found");
		}
		else{
			p=creat_node();
			q->next=p;
			p->prives=q;
			printf("your element has insered");
		}
	}
	else{
		if(q->data!=poss){
			printf("Element not found");
		}
		else{
			p=creat_node();
			p->next=q->next;
			q->next->prives=p;
			q->next=p;
			p->prives=q;
			printf("Your element has insered");
		}
	}
}
void delet_from_possition(){
	pm *q;
	int poss;
	printf("Enter element for delet = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=NULL)){
		q=q->next;
	}
	if(start==q){
		if(q->data!=poss){
			printf("Element not exsit in your list");
		}
		else{
			if(start->next==NULL){
				start=NULL;
			}
			else{
				start=start->next;
			}
			free(q);
			printf("your element has deleted");
		}
	}
	else{
		if(q->data!=poss){
			printf("Element not exist in list");
		}
		else{
			if(q->next==NULL){
				q->prives->next=NULL;
			}
			else{
				q->prives->next=q->next;
				q->next->prives=q->prives;
			}
			free(q);
			printf("Your element has deleted");
		}
	}
}
void delet_from_begin(){
	pm *q;
	q=start;
	if(q->next==NULL){
		start=NULL;
	}
	else{
		start=start->next;
	}
	free(q);
	printf("your element has deleted");
}
void delet_from_end(){
	pm *q,*p;
	q=start;
	while(q->next!=NULL){
		q=q->next;
	}
	if(start->next==NULL){
		start=NULL;
	}
	else{
		q->prives->next=NULL;
	}
	free(q);
	printf("your element has deleted");
}
void search(){
	pm *q;
	int poss,i=1;
	printf("Enter element for search = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=NULL)){
		q=q->next;
		i++;
	}
	if(q->data!=poss){
		printf("Element is not found");
	}
	else{
		printf("Element is found\n");
		printf("possition of this element is = %d",i);
	}
}
void switchcase(int ch){
	switch(ch){
		case 1:{
//			printf("creat_list");
			creat_list();
			break;
		}
		case 2:{
//			printf("incert_at_begin");
			insert_at_begin();
			break;
		}
		case 3:{
//			printf("incert_at_end");
			insert_at_end();
			break;
		}
		case 4:{
//			printf("incert_at_possition_after");
			insert_at_possition_after();
			break;
		}
		case 5:{
//			printf("incert_at_possition_before");
			insert_at_possition_before();
			break;
		}
		case 6:{
//			printf("delet_at_begin");
			delet_from_begin();
			break;
		}
		case 7:{
//			printf("delet_at_end");
			delet_from_end();
			break;
		}
		case 8:{
//			printf("delet_at_possition");
			delet_from_possition();
			break;
		}
		case 9:{
//			printf("search");
			search();
			break;
		}
		case 10:{
//			printf("treavers");
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
	index();
	return 0;
}
