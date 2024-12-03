#include <iostream>
using namespace std;
// encapsulation 
class home {
    private :
    string floor ;
int money;
public:
// seter x=a , geter  return x;
// mama
void set_floor(string f){
    floor=f;
}
// default  not prameter 
string  get_floor(){
return floor ;
}
void set_money(int m){
    // 90
    money=m;
}
int get_money(){
    return  money;
}
};
int main() {
home op1;
op1.set_money(7000);
// int call return type 
cout<<op1.get_money()<<endl;
op1.set_floor("mama");
cout<<op1.get_floor()<<"\n";
return 0;
}

