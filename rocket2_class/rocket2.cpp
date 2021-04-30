/* 
Rocket2:
        Enhanced version of rocket1_basic.cpp and rocket1.cpp
add:
    way to write constructor
    Report function can return value

*/
#include<iostream>
using namespace std;

class Rocket2{
  int f, v, h;

public:
  Rocket2():f(100),v(0),h(0){}
  Rocket2(int a, int b, int c):f(a),v(b),h(c){}
  //destructor
  ~Rocket2(){
    cout << "END OF THE SPACE Escape" << endl;
    cout << "Disassembled Rocket2" << endl;
  }
  int GetF() const{
    return f;
  }

  void Accel(int b){
    if(b<0){
      b = 0;
    }
    else if(b>f){
      b = f;
    }
    f -= b;
    v += b;
    h += v;
  }

  void Report() const{
    cout << "Report: " << endl;
    cout << "fuel: " << f << endl;
    cout << "velocity: " << v << endl;
    cout << "height: " << h << endl;
    cout << endl;
  }
};

int main(){

  Rocket2 x;
  int b;
  x.Report();
  cout << "input boost value >> ";
  cin >> b;
  x.Accel(b);
  x.Report();

  while(x.GetF() > 0){
    cout << "there are still fuel" << endl;
    cout << "boost value >> ";
    cin >> b;
    
    x.Accel(b);
    x.Report();
  }
  cout << "mission complete" << endl;
}
