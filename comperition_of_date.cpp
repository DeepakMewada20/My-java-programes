#include<stdio.h>
#include<conio.h>
typedef struct date{
	int date;
	int manth;
	int year;
}day;
void show(day d3){
	printf("%d/%d/%d\n",d3.date,d3.manth,d3.year);
}
day comperition(day d1,day d2){
	day d3;
	d3.date=d1.date-d2.date;
	d3.manth=d1.manth-d2.manth;
	d3.year=d1.year-d2.year;
	return d3;
}
int main(){
	day d1={5,6,2022},d2={4,3,2023};
	show(d1);
	show(d2);
	//comperition(d1,d2);
	show(comperition(d1,d2));
	return 0;
}

