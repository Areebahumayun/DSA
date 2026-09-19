#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>s1;
s1.push(2);
s1.push(4);
s1.push(6);
s1.pop();
cout<<"The element at top is:"<<s1.top()<<endl;
}