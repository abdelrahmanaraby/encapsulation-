#include <iostream>
using namespace std;
// dry.
// inheritance  , single , multilevel ,  multiple , hilytecal 
/*
single 
class a  base 
class b : public a drive class 
  multilevel 
  class a
class b :a
class c:b
-------------
hilytecal 
mama 
baba 
son : mama ,baba 
--------------------
... 
public , protected , private 
*/ 
//single  inheritance 
class base {
protected :
string name ;
public:
// protected :
 void set_name(string n){
  name=n;
 }
};
//: public base 
class drive : public base  {
public:
string get_name(){
//      return name;
    return name;
}
};
int main() {
 // method  base class 
drive op;
op.set_name("abdo");
cout<<op.get_name();
return 0;
}