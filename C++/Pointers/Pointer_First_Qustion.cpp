#include <iostream>
using namespace std;
int main(){
	int n=90,*q;
	
	q=&n;
	cout<<"address of n:"<<q<<endl;  // derefrence
	cout<<"data store at n:"<<*q<<endl;
	*q=*q+10;
	cout<<"data store at n:"<<*q<<endl;
}
     // pointer create, pointer dereference--->  *
     // Dereference --> fetch data through pointer
     
//#include <iostream>
//using namespace std;
//int main(){
//	int n=80,*p;
//	cout<<"Num"<<n<<endl;
//	p=&n;
//	cout<<"address:"<<p<<endl;
//	cout<<"value of p"<<*p<<endl;
//	*p=*p+6;
//	cout<<"value of p"<<*p<<endl;
//}
     
