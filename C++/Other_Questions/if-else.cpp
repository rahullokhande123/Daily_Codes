#include <iostream>
using namespace std;
int main(){
	int age;
    cout<<"enter your age:";
	cin>>age;
if(age<=12){
		cout<<"childe"<<endl;
	}
	else if(age>12 && age<=18){
		cout<<"Teen Age"<<endl;
	}
	else if(age>18 && age<=30){
		cout<<"Younger Age"<<endl;
	}
	else if(age>30 && age<=60){
		cout<<"senior citysion"<<endl;
    }
 
 else{
		cout<<"{Respected:}-Old"<<endl;
		}
	
	return 0;

}