//#include <iostream>
//using namespace std;
//int main(){
//	int ar[8]={82,33,4,44,67,39,42,36};
//	for(int i=0;i<8;i++){
//		cout<<ar[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<8;i++ ){
//		if(ar[i]>=35 && ar[i]<40){
//			ar[i]=40;
//		}
//	}
//	for(int i=0;i<8;i++ ){
//		cout<<ar[i]<<" ";
//	}	
//}

#include <iostream>
using namespace std;
int main(){
	int arr[10]={82,33,4,44,67,39,42,36,99,87};
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		if(80<arr[i] && 100>arr[i]){
			arr[i]=420;
		}
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
}
