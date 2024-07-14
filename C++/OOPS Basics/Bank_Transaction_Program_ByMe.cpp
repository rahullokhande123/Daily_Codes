#include <iostream>
using namespace std;
class Bank{
	protected:
		string depositer_name,ac_type;
		int acc_no,bal_amount,password;
		int temp,deposit_amount,withdraw_amount;
	public:
//		Bank(){
//			cout<<"Enter Depositer Name:"<<endl;
//			cout<<"Account Type:"<<endl;
//			cout<<"Account No:"<<endl;
//			cout<<"Type Balance Amount:"<<endl;
//			cout<<"Enter Password:"<<endl;
//			cin>>depositer_name>>ac_type>>acc_no>>bal_amount>>password;
//		}
//		Bank(string n,string ac_t,int a_no , int b_a, int p){
//			depositer_name=n;
//			ac_type=ac_t;
//			acc_no=a_no;
//			bal_amount=b_a;
//			password=p;
//			
//		}
        void assign_values(string n,string ac_t,int a_no , int b_a, int p){
			depositer_name=n;
			ac_type=ac_t;
			acc_no=a_no;
			bal_amount=b_a;
			password=p;
			
		}
		void deposite(){
			temp=password;
			cout<<"Please Enter Password:";
			cin>>temp;
			if(temp==password){
				cout<<"How much money do you want to deposit:";
				cin>>deposit_amount;
				bal_amount=bal_amount+deposit_amount;
			}
			else 
			   cout<<"Sorry.... You Are Enter Increct Password:";
			   
		}
		void withdraw(){
			temp=password;
			cout<<"Your Account Balance:"<<bal_amount<<endl;
			cout<<"If You Want To Withdraw Money,Then Enter Your Ac. Password Again:"<<endl;
			cin>>temp;
			if(temp==password){
				cout<<"How Much Money Do You Want To Withdraw:";
			    cin>>withdraw_amount;
			    bal_amount=bal_amount-withdraw_amount;
				
			}
			else
			   cout<<"Sorry.... You Enter Incorect Password";
			
		}
//		void checkBalance(){
//		     cout<<"Your Account Current Banlance:"<<bal_amount<<endl;
//		}
		void display(){
			cout<<"Depositer Name:"<<depositer_name<<endl;
			cout<<"Your Account Current Balance:"<<bal_amount<<endl;
		}
};
int main(){
	Bank b;
	b.assign_values("Rahul","Saving Account",123456,40000,6244);
//	b.checkBalance();
	b.deposite();
	b.withdraw();
	b.display();
}
