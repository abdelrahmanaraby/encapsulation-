#include <iostream>
using namespace std;
class Name {
    private:
    string Name ;
    public:
    Name (string  x ) {
Name=x;
    }
    friend void pop(Name  opj);
};
void pop(Name  opj){
    cout<<opj.Name<<" ";
}
int main() 
{
    Name oop ("abdo");
pop(oop);
return 0;
}
