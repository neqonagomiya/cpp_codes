/*
simple Rocket simulation 1

Rocket class:
data:
      fuel
      velocity
      height
action:
      acceleration
      status Report

b:booster
*/

#include<iostream>
using namespace std;

class Rocket1
{
  int f;
  int v;
  int h;

public:
  Rocket1(){
    f = 100;
    v = 0;
    h = 0;
  }
  
  void Accel(int b){
    f -= b; /*fuel is reduced by boost*/
    v += b; /*velocity is increased by boost*/
    h += v; /*height is increased by boost*/
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
  
  Rocket1 x;
  
  for(int i=0; i<3 ;i++){
    x.Report();
    x.Accel(10);
  }
}

