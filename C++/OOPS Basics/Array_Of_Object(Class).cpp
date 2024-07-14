// Topic Polymorphism:
#include <iostream>
using namespace std;
class Student{
	public: 
	   string name;
	   int roll;
	   double marks;
	   
	Student(){
			cout<<"Enter Roll No,Name,Marks:";
			cin>>roll>>name>>marks;
		}
//		void display(){
//			for(int i=0;i<=2;i++)
//			cout<<roll[i];
//		}
};
int main(){
	int n;
	cout<<"How many record do u want to insert:";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++){
		cout<<"Name:"<<s[i].name<<endl;
		cout<<"Roll:"<<s[i].roll<<endl;
		cout<<"Marks:"<<s[i].marks<<endl;
	}
	int high = s[0].marks;
	for(int i=1;i<n;i++){
		if(s[i].marks>high)
		high=s[i].marks;
	}
	cout<<"Highest Marks Of"<<high;
}
