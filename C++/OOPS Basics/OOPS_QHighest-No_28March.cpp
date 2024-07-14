#include <iostream>
using namespace std;
class Great{
	private:
		int n1,n2,n3;
	public:	
    Great(){
    	cout<<"Enter 3 Number:";
    	cin>>n1;
    	cin>>n2;
    	cin>>n3;		
	}
	void display(){
		cout<<n1<<endl;
		cout<<n2<<endl;
		cout<<n3<<endl;
		
	}
	Great(int a, int b, int c){
		n1=a;
		n2=b;
		n3=c;
	}
	void great(){
		if(n1>n2 && n1>n3)
		    cout<<n1<<"Is Greatest:";
		else if(n2>n1 && n2>n3)
		    cout<<n2<<"Is Greatest:";
	    else
	        cout<<n3<<"Is Greatest:";
	}		
};
int main(){
	Great g;
	g.display();
	g.great();
}
