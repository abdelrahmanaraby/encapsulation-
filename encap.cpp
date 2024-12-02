#include <iostream>
using namespace std;
class oop {
private :
int age ;
string name ;
public:
void set_name (string n ){
 name=n;
}
string get_name(){
    return name;
}
void set_age (int a ){
age=a;
}
int get_age(){
    return age;
}
};
int main()
{
oop op;
op.set_name("koko");
op.set_age(20);
cout<<op.get_name()<<endl;
cout<<op.get_age()<<"\n";
return 0;
}