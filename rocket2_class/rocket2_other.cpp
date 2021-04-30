/* Other ways to make Rocket2 */
/* Definition of member functions */
/* Write the function definition separately */
#include<iostream>
using namespace std;

class Rocket2_other{
  
  int f,v,h;

public:
  Rocket2_other();
  Rocket2_other(int a, int b, int c);
  ~Rocket2_other();
  
  int GetF() const {
    return f;
  };
  void Accel(int b);
  void Report() const;
};

Rocket2_other::Rocket2_other():f(100),v(0),h(0){}
Rocket2_other::Rocket2_other(int a, int b, int c):f(a),v(b),h(c){}
Rocket2_other::~Rocket2_other(){
  cout << "END OF THE SPACE ESCAPE" << endl;
  cout << "Disassembled Rocket2_other" << endl;
}

void Rocket2_other::Accel(int b){
  if(b<0){
    b = 0;
  }else if(b>f){
    b = f;
  }
  f -= b;
  v += b;
  h += v;
}

void Rocket2_other::Report() const{
  cout << "status Report:" << endl;
  cout << "fuel: " << f << endl;
  cout << "velocity: " << v << endl;
  cout << "height: " << h << endl;
  cout << endl;
}

int main(){
  Rocket2_other x;
  int b;
  x.Report();
  cout << "input boost value >> ";
  cin >> b;
  x.Accel(b);
  x.Report();
  while(x.GetF()>0){
    cout << "There are still fuel" << endl;
    cout << "input boost value, again >> ";
    cin >> b;
    x.Accel(b);
    x.Report();
  }
  cout << "complete mission " << endl;
}
