#include <iostream>
using namespace std;
int main(){
	int reng;
	cout<<"Enter Number:";
	cin>>reng;
	cout<<"All Prime No. In Given Renge:"<<endl;
	for(int i=1;i<=reng;i++){
		if(reng%2==0){
		 cout<<i<<endl;	
		}
		i++;
	}
}
