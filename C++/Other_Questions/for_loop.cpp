// #include <iostream>
// using namespace std;
// int main(){
// 	int n,sum=0;
// 	cout<<"Enter No.";
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
		
		
// 		if(i==n)
// 		    cout<<"("<<i<<"*"<<i<<")"<<"=";
// 		else
// 		    cout<<"("<<i<<"*"<<i<<")"<<"+";
		
// 		sum=i*i+sum;
// 	}

// 	    cout<<sum;
// }

// =================================================

//#include <iostream>
//using namespace std;
//int main(){
//	int num,sum=0;
//	cout<<"enter num";
//	cin>>num;
//	for(int i=1;i<=num;i++){
//		if(i==num){
//			cout<<"("<<i<<"*"<<i<<")"<<"=";
//		}
//		else
//		    cout<<"("<<i<<"*"<<i<<")"<<"+";
//		    sum=i*i+sum;
//	}
//	cout<<sum;
//}


// ==================================================

// #include <iostream>
// using namespace std;
// int main(){
// 	int n,sum=0;
// 	cout<<"Enter No.";
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
	
		
// 		if(i==n)
// 			cout<<"("<<i<<"+"<<i<<")"<<"=";
// 		else
// 		    	cout<<"("<<i<<"+"<<i<<")"<<"+";
		
// 		sum=i+i+sum;
// 	}

// 	    cout<<sum;
// }

// =================== Pettern By For Loop ==================

//#include <iostream>
//using namespace std;
//int main(){
//	for(int i=5;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

// =================== Nested Pettern By For Loop =================

#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=5;i>=0;i--){
		for(int j=i;j>=0;j--){
			cout<<"*";
		}
		cout<<endl;
		
	}
}

// =====================================================================

//#include <iostream>
//using namespace std;
//int main(){
//	char ch='A';
//	for(int i=1;i<=4;i++){
//		for(int j=1;j<=5;j++){
//			cout<<ch;
//			ch++;
//			}
//		cout<<endl;
//	}
//}


//#include <iostream>
//using namespace std;
//int main(){
//	char ch='A';
//	for(int i=1;i<=5;i++){  // Row
//		for(int j=1;j<=6;j++){ // Colume
//			cout<<ch;
//			ch++;
//		}
//		cout<<"\n";
//	}
//	
//}

#include <iostream>
using namespace std;
int main(){
	char ch='A';
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<ch;
			ch++;
		}
		
		cout<<"\n";
	}
	
}
