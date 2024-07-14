#include <iostream>
using namespace std;
class Circle{
	private:
		double radius;
	public:
		Circle(){
			cout<<"Enter Radius:";
			cin>>radius;
		}
		Circle(int a){
			radius=a;
		}
		void display(){
		     cout<<radius<<"Radius";
	    }
	    void area(){
	    	cout<<"Area:"<<3.141*radius*radius<<endl;
		}
		void Circumference(){
			cout<<"Circumference:"<<2*3.14*radius<<endl; // 2 p i r value-->(2*3.14)
		}
};
	    
	int main(){
		Circle c;
		c.area();
		c.Circumference();
		c.display();
	}

