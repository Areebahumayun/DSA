#include<iostream>
using namespace std;
int linearsearch(int arr[],int N,int x){
	for(int i=0;i<N;i++){
		if(arr[i]==x){
			return i;
		}}
		return -1;
	
}
int main(){
	int arr[4]={2,3,4,5};
	int N=sizeof(arr)/sizeof(arr[0]);
	int x=3;
	int result=linearsearch(arr,N,x);
	if(result==-1){
		cout<<"element not found in array"<<endl;
	}
	else {
		cout<<"element found in array at index no:"<<result<<endl;
	}
}