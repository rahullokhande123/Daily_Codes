#include <iostream>
using namespace std;
class Book{
	int bid,quantity;
	public:
		Book(int id,int q){
			bid=id;
			quantity=q;
		}
		void currentstock(){
			cout<<"Book Id:"<<bid<<"Quantity:"<<quantity<<endl;
		}
		void purchase(){
			int n;
			cout<<"How many stock do u want to purchase:";
			cin>>n;
			quantity=quantity+n;
		}
		void sale(){
			int n2;
			cout<<"How many stock do u want to sale:";
			cin>>n2;
			quantity=quantity-n2;
			
		}
	
};
int main(){
	Book ob(),ob1(102,80);
	ob1.currentstock();
	ob1.purchase();
	ob1.currentstock();
	ob1.sale();
	ob1.currentstock();
}
