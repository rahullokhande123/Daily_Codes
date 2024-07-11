#include <iostream>
using namespace std;
int main(){
	int a[4]{22,33,4,55};
	a[2]=203;
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	cout<<"================"<<endl;
	
	a[3]=203;
	cout<<a[3];
	
}
