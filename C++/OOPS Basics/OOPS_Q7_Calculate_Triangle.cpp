#include <iostream>
using namespace std;
class Triangle{
	private:
	double l1,l2,l3;
	public:
		Triangle(){
			cout<<"Enter-l1:";
			cin>>l1;
			cout<<"Enter-l2:";
			cin>>l2;
			cout<<"Enter-l3:";
			cin>>l3;
		}
		void display(){
		    cout<<l1<<"Length-1"<<endl;
		    cout<<l2<<"Length-2"<<endl;
		    cout<<l3<<"Length-3"<<endl;
	    }
	    
};
