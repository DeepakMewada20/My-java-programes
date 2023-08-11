#include<iostream>
#define size 10
using namespace std;
int main(){
	int j,i,k,key,temp,arr[size];
	cout<<"Enter element 1 to 10\n";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	for(key=1;key<size;key++){
		//cout<<"\n\t\tpass = "<<key<<endl;
		for(i=key && (j=1);(arr[i-1]>arr[i]&&i>0);(i-- && j++)){
			temp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=temp;
			//cout<<"\nstep = "<<j<<",\t";
//			for(k=0;k<size;k++){
//				cout<<arr[k]<<" ";
//			}
		}
	}
	cout<<"\nsorted element\n";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
