#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream obj;
	obj.open("index.txt"); //by default ios::in mode me rahta h
	string st;
//	char ch=obj.get();
//	cout<<ch;
//	ch=obj.get();
	//cout<<ch;  // Es Tarike SE hm only one char get kr sekte h puri string nhi
	
	
//	getline(obj,st);
//	cout<<st;

// use end of file --> eof()
    while(!obj.eof()){
    	getline(obj,st);
    	cout<<st<<endl;
    	
	}
//	while(getline(obj,st)){
//		cout<<st<<endl;
//	}  // Second Way of print all in one, when all line's finished then 
       //loop is terminat and end of file is Achived.
        
	
}
