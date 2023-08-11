#include<stdio.h>
#include<conio.h>
int main(){
	FILE *p,*q;
	char c;
	p=fopen("linear_search.cpp","r");
	q=fopen("linear_search.txt","w");
	c=getc(p);
	while(c!=EOF){
		putc(c,q);
		c=getc(p);
	}
	fclose(p);
	fclose(q);
	return 0;
}
