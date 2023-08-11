#include<stdio.h>
#include<conio.h>
int main(){
	FILE *ptr;
	int n[10],i=0;
	ptr=fopen("filename.txt","r");
//	fscanf(ptr,"%d",&n[0]);
	for(i=0;i<10;i++){
//		printf("%d",n[i]);
		fscanf(ptr,"%d",&n[i]);
		printf("%d,",n[i]);
	}
	fclose(ptr);
	return 0;
}
