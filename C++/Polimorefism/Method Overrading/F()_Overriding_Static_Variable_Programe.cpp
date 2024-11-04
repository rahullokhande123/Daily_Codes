//#include <iostream>
//using namespace std;
//class Cybrom{
//	public:
//	    string st_name,course;
//	    static string address;
//	    static string institude_name;
//	public:
//		Cybrom(string n, string c){
//			st_name=n;
//			course=c;
//		}
//		void display(){
//			cout<<"Institude Name:"<<institude_name<<endl;
//			cout<<"Name:"<<st_name<<endl;
//			cout<<"Course:"<<course<<endl;
//		}
//		static void changeinstitude(string n ,string a){
//			institude_name=n;
//			address=a;
//			cout<<"Address:"<<address<<endl;
//		}
//};
//string Cybrom::institude_name="Cybrom Academy";
//string Cybrom::address="Bhopal";
//
//int main(){
//	Cybrom obj1("Raj","Python FS"),obj2("Rahul","Java");
//	obj1.display();
//	obj2.display();
////	Cybrom::institude_name="Cybrom Infotech";
//   // Cybrom::changeinstitude("Cybrom Infotech","I");
//    Cybrom::changeinstitude("Cybrom Info","MP Nager Zone 1 Bhopal,Madhya Pradesh");
//	obj1.display();
//	obj2.display();
//}

//========================== Secound Q ===================================

//class Student{
//	private:
//		static int count;
//	public:
//		Student(){
//			count++;                 
//		}
//	static void display(){
//			cout<<"Total Student:"<<count<<endl;
//		}
//};
//int Student::count;
//int main(){
//	Student s1,s2,s3,s4,s5;
//	Student::display();
//}

#include <iostream>
using namespace std;
class Cybrom{
	protected:
		string name,course;
		static string address;
		static string institude_name;
	public:
		Cybrom(string n, string c){
			name=n;
			course=c;
		}
		void display(){
			cout<<"Institude Name:"<<institude_name<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"course:"<<course<<endl;
			cout<<"Address:"<<address<<endl;
			
		}
		static void changeInstitude(string i){
			institude_name=i;
		}
};
string Cybrom::institude_name="Cybrom Institude";
string Cybrom::address="MP Nager Bhopal";
int main(){
	Cybrom c("Rahul","Fullstack Python");
	c.display();
	Cybrom::changeInstitude("Cybrom Infotec Pvt.Ltd.");
	c.display();
}