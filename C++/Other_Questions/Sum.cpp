// #include <iostream>
// using namespace std;
// int main(){
// 	int num,sum=0,last;
// 	cout<<"Enter No.";
// 	cin>>num;
// 	while(num>0){
// 		last=num%10;
// 		sum=sum*10+(last);
// 		num=num/10;	
// 	}
// 	cout<<" "<<sum;
// }

// ====================================================

// #include <iostream>
// using namespace std;
// int main(){
// 	int a,sum=0;
// 	while(1){
// 		cout<<"enter a number:";
// 		cin>>a;
// 		sum=sum+a;
// 		cout<<sum<<endl;
// 		if(a%10==0){
// 		   cout<<"thank u for using our service...";
// 	   	   break; //exit point
// 	   }
//   }
//   cout<<"Sum:"<<sum<<endl;
// } 


// =====================================================

#include <iostream>
using namespace std;
int main(){
	int n;
	double sum=0;
	cout<<"Enter No.";
	cin>>n;
	for(int i=1;i<=n;i++){ // 6
		
		if(i==n)
			  cout<<1<<"/"<<i<<"=";
		else
		    cout<<1<<"/"<<i<<"+";
		sum=sum+(1.0/i);	
	}
	cout<<sum;
}


