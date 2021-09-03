#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;cin>>n;//input the size of the array
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];// input : the array element 
	}
	int k;cin>>k; // the number of 2 element array sum
	int i=0,r=n-1;
	sort(arr,arr+n);
	bool check=false;
	while(i<r){
		if(arr[i]+arr[r]==k){
			cout<<i<<" "<<r<<endl;
			check=true;
			break;
		}
		else if(arr[i]+arr[r]>k){
			r--;
		}
		else{
			i++;
		}
	}
	if(!check){
		cout<<"impossible "<<endl;
	}
}