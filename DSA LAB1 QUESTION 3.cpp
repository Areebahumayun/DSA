#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Medianfinder{
	private:
		vector<int>arr;
	public:
void	addnum(int n){
	arr.push_back(n);
	sort(arr.begin(),arr.end());
}
double findMedian(){
	int n=arr.size();
	if(n%2==0){
		int mid1=n/2;
		int mid2=n/2-1;
		return(arr[mid1]+arr[mid2]);
		
		
	}
	else{
		int mid=n/2;
		return arr[mid];
	}
}
};
int main() {
    Medianfinder mf;

    mf.addnum(1);
    mf.addnum(2);
    cout << "Median: " << mf.findMedian() << endl; // Output: 1.5

    mf.addnum(3);
    cout << "Median: " << mf.findMedian() << endl; // Output: 2.0

    return 0;
}