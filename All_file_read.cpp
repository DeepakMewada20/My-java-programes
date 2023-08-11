#include<stdio.h>
//#include<conio.h>
int main(){
	FILE *ptr;
	char c;
	ptr=fopen("getcdemo.txt","r");
	c=getc(ptr);
	while(c!=EOF){
		printf("%c",c);
		c=getc(ptr);
	}
	fclose(ptr);
	return 0;
}
