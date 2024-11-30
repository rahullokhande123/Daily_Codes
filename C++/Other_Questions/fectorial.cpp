//#include <iostream>
//using namespace std;
//int main(){
//	
//	int n,fact=1;
//	cout<<"enter number:";
//	cin>>n;
//	cout<<n<<"!=";
//	for(int i=n;i>=1;i--){
//		if(i==1)
//		   cout<<i<<"=";
//		else
//		   cout<<i<<"*";
//	fact=fact*i;
//		
//	}
//	cout<<fact;
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int num,fect=1;
//	cout<<"enter Number:";
//	cin>>num;
//	cout<<num<<"!=";
//	for(int i=num;i>=1;i--){
//		if(i==1){
//			cout<<i<<"=";
//		}
//		else
//		   cout<<i<<"*"; 
//		fect=fect*i;
//	}
//	cout<<fect;
//}


#include <iostream>
using namespace std;
int main(){
	int num,fect=1;
	cout<<"enter no";
	cin>>num;
	cout<<num<<"!=";
	for(int i=num;i>=1;i--){
		if(i==1){
			cout<<i<<"=";
		}
		else 
		   cout<<i<<"x";
		   fect=fect*i;
	}
	cout<<fect;
}