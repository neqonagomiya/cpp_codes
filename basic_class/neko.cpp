/* How to make class by cpp*/
#include<iostream>
#include<string>
using namespace std;

class Neko{
  string name;
  
public:
  Neko(){}
  Neko(string n){
    name = n;
  }
  void SetName(string n){
    name = n;
  }
  void Naku() const{
    cout << "Nyaa~ I am " << name << "~ " << endl;
  }
};

int main()
{
 Neko x("mako");
 x.Naku();

 Neko y;
 y.SetName("nyaa");
 y.Naku();
}
