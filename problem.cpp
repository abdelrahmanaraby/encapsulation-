#include <iostream>
using namespace std;
class Person {
 public:
	int age;
	bool driver_license;
	
	void check(int x){
        age=x;
        //  33 age = 33 .
	    if(age > 21){
	        cout<<"Hired"<<endl;
	        
	    }else{
	        cout<<"Reject"<<endl;
	    }
	}
};
int main() {
    // -1 
	Person ob1;
    // acess or check 
    int check_age;
	cout << "please enter your age: ";
cin>>check_age ;
ob1.check(check_age);
return 0;
}
