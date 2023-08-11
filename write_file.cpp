#include<stdio.h>
#include<conio.h>
int main(){
	int n1=235,n2=387;
	FILE *ptr;
	ptr=fopen("genretfil.txt","w");
	fprintf(ptr,"the velude of number 1 is = %d\n",n1);
	fprintf(ptr,"the velude of number 2 is = %d",n2);
	fclose(ptr);
    return 0;
}
