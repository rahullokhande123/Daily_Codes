#include <iostream>
using namespace std;
int main(){
	int weekN;
	cout<<"enter week number:";
	cin>>weekN;
	switch(weekN){
	case 1: cout<<"Monday";
		        break;
    case 2: cout<<"Tuysday";
		        break;
	case 3: cout<<"Wednesday";
		        break;  
    case 4: cout<<"Thursday";
		        break;	
	case 5: cout<<"Friday";
		        break;
	case 6: cout<<"Saturday";
		        break;
    case 7: cout<<"Sunday";
		        break;	
	    default:cout<<"invalid choice";				      
}
}