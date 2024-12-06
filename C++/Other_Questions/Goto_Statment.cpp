#include <iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"enter no.";
	cin>>num;
	table :{
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
		i++;
		if(i==11)
		goto exit;
	}
	goto table;
	exit : {
		cout<<"Thenk You";
	}
}