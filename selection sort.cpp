#include<iostream>
#define size 10
using namespace std;
int main(){
	int arr[size],i,j,min,temp,hold,n;
	//cout<<"Enter array size, between 1 to 10 = ";
	//cin>>n;
	cout<<"Enter element for sort\n";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	for(i=0;i<(size-1);i++){
		min=arr[i];
		for(j=(i+1);j<size;j++){
			if(min>=arr[j]){
				min=arr[j];
				hold=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[hold];
		arr[hold]=temp;
	}
	cout<<"sorted array\n";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
