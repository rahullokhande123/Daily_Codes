#include <iostream>
using namespace std;
int main(){
//	int ar[2][3]={1,2,3,4,5,6};
//	cout<<ar[1][1]<<endl; // result=5
//	cout<<ar[0][2]<<endl; // result=3
	
	int arr[3][2][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	cout<<arr[0][1][1]<<endl;
	cout<<arr[1][0][2]<<endl;
	cout<<arr[0][1][0]<<endl;
}
