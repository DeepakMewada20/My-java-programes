#include<stdio.h>
//#include<conio.h>
#define size 20
int main(){
	int arr[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int high=(size-1),low=0,mid,poss;
	int n=high;
	printf("Enter number for search = ");
	scanf("%d",&poss);
	
	do{
		mid=n/2;
		if(arr[mid]>poss){
			high=mid;
			n=high+low;
		}
		else{
			low=mid;
			n=high+low;
		}
	}while((arr[mid]!=poss)&&(low!=(high-1)));
	if(arr[mid]==poss){
		printf("element is found\n");
		printf("index of number is = %d",mid);
	}
	else{
		printf("element not found");
	}
	return 0;
}
