#include<stdio.h>
//#include<conio.h>
int main(){
	FILE *ptr;
	FILE *J;
	char c;
	int i=0,n,t=345;
//	printf("Enter num, you want copy file = ");
//	scanf("%d",&n);
	J=fopen("asitid formet.cpp","w");
	ptr=fopen("copy file.cpp","r");
	c=getc(ptr);
		while(c!=EOF){
		printf("%c",c);
		putc(c,J);
		c=getc(ptr);
	}
	fclose(ptr);
	fclose(J);
	return 0;
}
