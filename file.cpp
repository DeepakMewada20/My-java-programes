#include<stdio.h>
//#include<conio.h>
int main(){
	FILE *ptr;
	int n;
	ptr=fopen("filename.txt","r");//-->for reding the file
	//ptr=fopen("filename.txt","w");//-->for weite the file
	fscanf(ptr,"%d",&n);
	printf("the velue of num is %d",n);
	return 0;
}
