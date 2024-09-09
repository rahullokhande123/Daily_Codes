//wap to create a file named "new.txt" and add content in this file until user want.
//and also read all content in the end.

// Write Opration Perform----------
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream wr;
	wr.open("new.txt");
	string s;
	string s1;
	while(1){
		cout<<"Enter Data:";
		getline(cin,s);
		wr<<s<<endl;
		cout<<"Do you wanna continue .... Type-exit for exit othervise Type any char:";
		getline(cin,s1);
		if(s1=="exit")
		   break;
	}
	wr.close();
}
//==================================================================================

#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream o;
	o.open("File_hiding.txt",ios::out|ios::app);
	string s;
	string s1;
	while(1){
	o<<"Enter Number:";
	getline(cin,s);
	o<<s<<endl;
	   	cout<<"Do you wanna continue type any character othorvise type exit for exit:";
   	getline(cin,s1);
   	if(s1=="exit")
	            break;	
	} 
	o.close(); 
}

//=================================================================================
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ra;
	ra.open("filehiding.txt");
	string s;
	string s1;
	while(1){
		cout<<"Enter Number:";
		getline(cin,s);
		ra<<s<<endl;
		cout<<"Do you wanna continue type any character othorvise type exit for exit:";
		getline(cin,s1);
		if(s1=="exit")
		    break;
		
	}
	ra.close();
}

//===================================================================================
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream ma;
	ma.open("index.txt",ios::out|ios::app);
	string s;
	string s1;
	while(1){
		cout<<"Enter Number:";
		getline(cin,s);
		ma<<s<<endl;
		cout<<"Do you wanna continue type any character othorvise type exit for exit:";
		getline(cin,s1);
		if(s1=="exit")
		   break;
	}
	ma.close();
	
}

  

