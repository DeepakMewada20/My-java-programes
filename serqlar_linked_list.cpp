#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<malloc.h>
typedef struct node{
	int data;
	struct node *next;
}pm;
pm *start=NULL;
pm* creat_node(){
	pm *p;
	int a;
	p=(pm*)malloc(sizeof(pm));
	printf("enter number for insert list = ");
	scanf("%d",&a);
	p->data=a;
	p->next=NULL;
	return p;
}
void creat_list(){
	system("cls");
	start=creat_node();
	start->next=start;
	printf("yuor list is created");
}
void incert_at_begin(){
	pm *p,*q;
	p=creat_node();
	q=start;
	while(q->next!=start){
		q=q->next;
	}
	q->next=p;
	p->next=start;
	start=p;
	printf("your element is inserted");
}
void incert_at_end(){
	pm *p,*q;
	p=creat_node();
	q=start;
	while(q->next!=start){
		q=q->next;
	}
	q->next=p;
	p->next=start;
	printf("your element is incerted");
}
void treavers(){
	pm *q;
	q=start;
	printf("your list = ");
	do{
		printf("%d,",q->data);
		q=q->next;
	}while(q!=start);
}
void incert_at_possition_before(){
	system("cls");
	pm *q,*p,*r;
	int poss;
	printf("before incert ");
	treavers();
	printf("\nenter possition to insert element = ");
	scanf("%d",&poss);
	q=start;
	r=q;
	while((q->data!=poss)&&(q->next!=start)){
		r=q;
		q=q->next;
	}
	if((q->next==start)&&(q==r)){
		if((q->next==start)&&(q->data!=poss)){
			printf("your possition not found");
		}
		else{
			p=creat_node();
			p->next=q;
			q->next=p;
			start=p;
			printf("your element has encerted");
		}
	}
	else{
		if((q->next==start)&&(q->data!=poss)){
			printf("possition not found");
		}
		else{
			p=creat_node();
			if((q==r)&&(q->next!=start)){
				while(q->next!=start){
					q=q->next;
				}
				p->next=r;
				q->next=p;
				start=p;
			}
			else{
				p->next=r->next;
				r->next=p;
			}
			printf("your element is incerted");
		}
		//printf("After incert ");
		//treavers();
		//printf("\nyour element is incerted");
	}
}
void incert_at_possition_after(){
	system("cls");
	pm *p,*q,*r;
	int poss;
	printf("before incert ");
	treavers();
	printf("enter possition = ");
	scanf("%d",&poss);
	q=start;
	r=q;
	while((q->data!=poss)&&(q->next!=start)){
		r=q;
		q=q->next;
	}
	if((q->next==start)&&(q==r)){
		if((q->data!=poss)&&(q->next==start)){
			printf("possition not found");
		}
		else{
			p=creat_node();
			q->next=p;
			p->next=start;
			printf("your element has incerted");
		}
	}
	else{
		if((q->data!=poss)&&(q->next==start)){
			printf("possition not found");
		}
		else{
			p=creat_node();
			if((q->data==poss)&&(q->next==start)){
				q->next=p;
				p->next=start;
			}
			else{
				p->next=q->next;
				q->next=p;
			}
			//printf("After incert ");
			//treavers();
			printf("your element is incert");
		}
	}
}
void delet_at_begin(){
	pm *p,*q;
	p=start;
	q=p;
	if((q->next==start)&&(q==p)){
		start=NULL;
	}
	else{
		while(q->next!=start){
			q=q->next;
		}
		start=p->next;
		q->next=start;
	}
	free(p);
	printf("your element has deleted");
}
void delet_at_end(){
	pm *q,*p;
	q=start;
	p=q;
	if((q->next==start)&&(q==p)){
		start=NULL;
	}
	else{
		while(q->next!=start){
			p=q;
			q=q->next;
		}
		p->next=q->next;
	}
	free(q);
	printf("your element has deleted");
}
void delet_at_possition(){
	pm *p,*q;
	int poss;
	printf("Enter possition = ");
	scanf("%d",&poss);
	q=start;
	p=q;
	while((q->data!=poss)&&(q->next!=start)){
		p=q;
		q=q->next;
	}
	if((q->next==start)&&(q==p)){
		if(q->data!=poss){
			printf("your element not found");
		}
		else{
			start=NULL;
			free(q);
			printf("your element has deleted");
		}
	}
	else{
		if((q->next==start)&&(q->data!=poss)){
			printf("element not found");
		}
		else{
			if((q->data==poss)&&(p==q)){
				start=p->next;
			}
			else{
				p->next=q->next;
			}
			free(q);
			printf("your element has deleted");
		}
	}
}
void search(){
	pm *q;
	int poss,i=0;
	printf("Enter element for search = ");
	scanf("%d",&poss);
	q=start;
	while((q->data!=poss)&&(q->next!=start)){
		q=q->next;
		i++;
	}
	if((q->next==start)&&(q==start)){
		if(q->data!=poss){
			printf("your element not exist in your list");
		}
		else{
			printf("your element found\n");
			printf("your element is = %d",q->data);
			
		}
	}
	else{
		if((q->data!=poss)&&(q->next==start)){
			printf("your element not esixt in your list");
		}
		else{
			printf("your element found\n");
			printf("your element is = %d",q->data);
		}
	}
}
void switchcase(int ch){
	switch(ch){
		case 1:{
			creat_list();
			break;
		}
		case 2:{
			incert_at_begin();
			break;
		}
		case 3:{
			incert_at_end();
			break;
		}
		case 4:{
			incert_at_possition_after();
			break;
		}
		case 5:{
			incert_at_possition_before();
			break;
		}
		case 6:{
			delet_at_begin();
			break;
		}
		case 7:{
			delet_at_end();
			break;
		}
		case 8:{
			delet_at_possition();
			break;
		}
		case 9:{
			search();
			break;
		}
		case 10:{
			treavers();
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
