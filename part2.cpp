#include <iostream>
using namespace std;
// encasulation 
// friend function  , friend class  a -> base  <- dreive 
class person {
private :
string name ;
string secrit;
public:
void set_name (string n){
    name=n;
}
string  get_name (){
    return name ;
}
// friend function 
void set_secrit (string s){
secrit=s;
}
// prototype function , prameter object  , object .
friend string get_secrit(person  op);
};
string get_secrit( person  op){
    // print  secrit . 
    return op.secrit;
}
int main() {
person op;
op.set_name("abdo");
cout<<op.get_name()<<"\n";
// set friend function
// op ->  iam hacking !". 
op.set_secrit("iam hacking !");
// call friend function 
//  calling friend function non object from class 
cout<<get_secrit(op);
return 0;
}

