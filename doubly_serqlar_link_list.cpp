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
pm *creat_node(){
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
	start->prives=start;
	start->next=start;
	printf("your list is created.\nyou can perform other operation.");
}
void trevers(){
	pm *q;
	q=start;
	printf("your list = ");
	while(q->next!=start){
		printf("%d,",q->data);
		q=q->next;
	}
	printf("%d",q->data);
}
void insert_at_begin(){
	pm *p;
	p=creat_node();
	p->next=start;
	p->prives=start->prives;
	start->prives->next=p;
	start->prives=p;
	start=p;
	printf("your element has inserted");
}
void insert_at_end(){
	pm *p;
	p=creat_node();
	p->prives=start->prives;
	p->next=start;
    start->prives->next=p;
	start->prives=p;
	printf("your element has inserted");
}
void insert_at_possition_after(){
	pm *p,*q;
	int poss;
	printf("Enter possition you want to insert element = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=start)){
		q=q->next;
	}
	if(q->data!=poss){
		printf("Element not found");
	}
	else{
		p=creat_node();
		p->prives=q;
		p->next=q->next;
		q->next=p;
		q->next->prives=p;
		printf("Your element has inserted");
	}
}
void insert_at_possition_before(){
	pm *q,*p;
	int poss;
	printf("Enter possition, you want to insert element = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=start)){
		q=q->next;
	}
	if(q->data!=poss){
		printf("Element not found");
	}
	else{
		p=creat_node();
		if(start==q){
			start=p;
		}
		p->next=q;
		p->prives=q->prives;
		q->prives->next=p;
		q->prives=p;
		printf("Element has inserted");
	}
}
void delet_from_begin(){
	pm *q;
	q=start;
	if(q->next==q){
		start=NULL;
	}
	else{
		q->next->prives=q->prives;
		q->prives->next=q->next;
		start=q->next;
	}
	free(q);
	printf("Your element has deleted");
}
void delet_from_end(){
	pm *q;
	q=start->prives;
	if(q==q->next){
		start=NULL;
	}
	else{
		q->next->prives=q->prives;
		q->prives->next=q->next;
	}
	free(q);
	printf("Your element has deleted");
}
void delet_from_possition(){
	pm *q;
	int poss;
	printf("Enter element, you want to delet = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=start)){
		q=q->next;
	}
	if(q->data!=poss){
		printf("Element not exist in your list");
	}
	else{
		if(q==q->next){
			start=NULL;
		}
		else{
			q->next->prives=q->prives;
			q->prives->next=q->next;
			if(start==q){
				start=q->next;
			}
		}
		free(q);
		printf("Element has deleted");
	}
}
void search(){
	pm *q;
	int i=1,poss;
	printf("Enter element for search = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=start)){
		q=q->next;
		i++;
	}
	if(q->data!=poss){
		printf("Your element is not esist in list");
	}
	else{
	printf("Your element is found\n");
	printf("The possition of your element is = %d",i);
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
		printf("6: Delete from being\n");
		printf("7: Delete from end\n");
		printf("8: Delete from possition\n");
		printf("9: Search\n");
		printf("10: Trevers\n");
		printf("11: Exit\n");
		printf("Enter your chouse = ");
		scanf("%d",&ch);
		if((start==NULL)&&(ch!=1)&&(ch!=11)&&(ch<=11)){
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
