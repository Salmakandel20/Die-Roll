#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
	int x,w;
	string arr[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
	cin>>x>>w;
	x=max(x,w);
	cout<<arr[6-x];
	
}
