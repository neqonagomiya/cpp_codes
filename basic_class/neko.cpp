/* How to make class by cpp*/
#include<iostream>
#include<string>
using namespace std;

class Neko{
  string name;
  
public:
  void SetName(string n){
    name = n;
  }
  void Naku() const{
    cout << "Nyaa~ I am " << name << "~ " << endl;
  }
};

int main()
{
 Neko x;
 x.Naku();

 x.SetName("mako");
 x.Naku();
}
