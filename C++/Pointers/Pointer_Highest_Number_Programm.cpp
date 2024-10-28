#include <iostream>
using namespace std;
int main(){
	int n=90,n1=999,*p,*p1;
    p=&n;
    p1=&n1;
    if(*p>*p1)
    	cout<<"Higher:"<<*p;
	
	else
	    cout<<"Higher:"<<*p1<<endl;
	    
	cout<<"addition :"<<*p+*p1;
}
       
     
