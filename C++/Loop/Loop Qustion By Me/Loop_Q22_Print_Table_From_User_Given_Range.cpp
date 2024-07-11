#include <iostream>
using namespace std;
int main(){
	int range,num;
	cout<<"Enter No.";
	cin>>num;
	cout<<"Enter Range Of Your Table:";
	cin>>range;
	for(int i=1;i<=range;i++){
		for(int j=1;j<=10;j++){
			cout<<num<<"x"<<j<<"="<<num*j<<endl;
			
		     }
			   cout<<"================="<<endl; 
			   num++;
		  }
	}
		
