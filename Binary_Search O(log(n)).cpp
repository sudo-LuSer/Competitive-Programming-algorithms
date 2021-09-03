#include <iostream>
using namespace std;
int binary_search(int arr[],int size,int value){
	int high=size-1,mid,low=0;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==value){
			return mid;
		}
		else if(arr[mid]>value){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;cin>>n;//the size of the array
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];//input the array
	}
	int value;cin>>value;//the value for search
	if(binary_search(arr,n,value)>=0){
		cout<<"Find !"<<endl;//the search complet and the value found in the array 
	}
	else{
		cout<<"Not Find ! :/ "<<endl;//the search complet and the value not found in the array
	}
}