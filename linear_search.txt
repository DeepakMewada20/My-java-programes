#include<stdio.h>
#include<conio.h>
#define size 20
int main(){
	int arr[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
	int i,poss;
	printf("Enter number for search = ");
	scanf("%d",&poss);
	while((arr[i]!=poss)&&(i!=(size-1))){
		if(arr[i]!=poss){
			i++;
		}
	}
	if(arr[i]==poss){
		printf("element is found\n");
		printf("index of element is = %d",i);
	}
	else{
		printf("element not found");
	}
	return 0;
}
