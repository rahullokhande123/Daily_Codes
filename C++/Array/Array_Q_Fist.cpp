//#include <iostream>
//using namespace std;
//int main(){
//	int n,sum=0,high,low;
//	cout<<"How Many Student In Class:";
//	cin>>n;
//	int marks[n];
//	for(int i=0;i<n;i++){
//		cout<<"Enter Student Marks:"<<i+1<<":";
//		cin>>marks[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<"Student Marks:"<<i+1<<":"<<marks[i]<<endl;
//		sum=sum+marks[i];
//	
//   }
//    for(int i=0;i<n;i++){
//    	low=marks[0];
//        	high=marks[0];
//    	
//    	if(high<marks[i]){
//    		high=marks[i];
//		}
//		
//		else if(low>marks[i]){
//			low=marks[i];	
//		}
//	}
//	    cout<<"Student Lowest Marks:"<<low<<endl;
//		cout<<"Student Highest Marks:"<<high<<endl;
//        cout<<"Total Marks:"<<sum<<endl;
//	    cout<<"Avrege Marks:"<<(float)n/sum<<endl;
//}  


#include <iostream>
using namespace std;
int main(){
	int n,sum=0,high,low;
	cout<<"How many students in class:";
	cin>>n;
	int marks[n];
	for(int i=0;i<n;i++){
		cout<<"enter Marks:";
		cin>>marks[i];
	}
	for(int i=0;i<n;i++){
		cout<<marks[i]<<endl;
		sum=sum+marks[i];
	}
	for(int i=0;i<n;i++){
		high=marks[0];
		low =marks[0];
		if(high<marks[i]){
			high=marks[i];
		}
		else if(low>marks[i]){
			low=marks[i];
		}
	}
	cout<<"Highest NO."<<high<<endl;
	cout<<"Lowest No."<<low<<endl;
	cout<<"Total Marks:"<<sum<<endl;
	cout<<"Avrage:"<<sum/(float)n<<endl;
}
 
