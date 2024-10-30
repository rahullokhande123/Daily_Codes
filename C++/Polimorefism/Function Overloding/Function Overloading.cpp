#include <iostream>
using namespace std;
//class sqr_rect{
//	public:
//	void area(double s){
//			double area;
//			area=s*s;
//			cout<<"Area Of Squre:"<<area<<endl;	
//			cout<<"Circumference Of Squre:"<<4*s<<endl;
//		}
//	void area(double l, double b){
//			cout<<"Area Of Rectangal:"<<l*b<<endl;
//			cout<<"Circumference Of Rectangal:"<<2*(l+b)<<endl;
//		}
//};	
//int main(){	
//	sqr_rect sr;
//	sr.area(2);	
//	sr.area(2.0,4.0);
//}
//========================== Class Bank And Add Amount ===================================
//class Bank{
//	private:
//		int amount;
//	public:	
//		Bank(int a){
//			amount=a;
//		}
//    void addamount(){
////	    string name;
////	    int amount;
////	    cout<<"enter name and amount:";
////	    cin>>name>>amount;
//        amount=amount+100;
//	    cout<<"Flat 100 Rs.Add In Amount: "<<amount<<endl;
//   }
//    void addamount(int am){
//        amount=amount+am;
//        cout<<"Amount add to the amount: "<<am<<endl;
//   }
//   void display(){
//   	cout<<"Final Amount: "<<amount<<endl;
//   }
//};
//int main(){
//	Bank b(10000);
//	b.addamount();
//	b.addamount(5000);
//	b.display();
//}
//======================== Class Name Massege ===============================
class Massege{
	public:
		void mymassage(){
			cout<<"I Love Programming Languages:"<<endl;
		}
		void mymassage(string m){
			cout<<"I Love "<<m<<endl;
		}
};
int main(){
	Massege m;
	m.mymassage();
	m.mymassage("C++");
}