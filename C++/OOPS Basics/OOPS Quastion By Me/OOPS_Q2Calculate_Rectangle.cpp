#include <iostream>
using namespace std;
class Rectangle{
	private:
		double l,w;
	public:
		Rectangle(){
			cout<<"Enter Length:";
			cin>>l;
			cout<<"Enter Width:";
			cin>>w;		
		}
		void display(){
		    cout<<l<<"Length";
		    cout<<w<<"Width";
	    }
	    void area(){
	    	cout<<"Area of Rectangle"<<l*w<<endl;
		}
		void perimeter(){
			cout<<"Perimeter:"<<l*l+w*w<<endl;
		}
	};
    int main(){
    	Rectangle r;
    	r.area();
    	r.perimeter();
	}

