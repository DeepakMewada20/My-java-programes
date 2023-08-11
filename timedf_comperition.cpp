#include<stdio.h>
#include<conio.h>
typedef struct timedef{
	int date;
	int month;
	int year;
	int hore;
	int minte;
}dm;
void show(dm t1){
	printf("%d-%d-%d,%d:%d\n",t1.date,t1.month,t1.year,t1.hore,t1.minte);
}
int comperition(dm t1,dm t2){
	if(t1.year>t2.year){
	return 1;
	}
	if(t1.year<t2.year){
	
	return -1;}
	if(t1.month>t2.month){
	return 1;}
	if(t1.month<t2.month){
	return -1;}
	if(t1.date>t2.date){
	return 1;}
	if(t1.date<t2.date){
	return -1;}
	if(t1.hore>t2.hore){
	return 1;}
	if(t1.hore<t2.hore){
	return -1;}
	if(t1.minte<t2.minte){
	return 1;}
	if(t1.minte<t2.minte){
	return -1;}
	return 0;
}
int main(){
	dm t1={5,6,2025,4,54},t2={5,6,2025,4,54};
	show(t1);
	show(t2);
	printf("%d\n",comperition(t1,t2));
	return 0;
}
