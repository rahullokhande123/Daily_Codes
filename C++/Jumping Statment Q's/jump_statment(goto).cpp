#include <iostream>
using namespace std;
int main(){
	cout<<"introduction to goto\n";
	goto abcd;
	for(int i=1;i<=10;i++){
		cout<<i<<endl;
	}
	abcd:{
	cout<<"label of goto\n";
	}
	cout<<"end of goto";
}
