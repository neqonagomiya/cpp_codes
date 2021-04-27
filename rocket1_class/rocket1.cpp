/*
Enhanced version of rocket1_basic.cpp 
add:
    default constructor
    user input for Accel function
*/

#include<iostream>
using namespace std;

class Rocket1{
  int f;
  int v;
  int h;

public:
  Rocket1(){
    f = 100;
    v = 0;
    h = 0;
  }
  /* Create a variable and assign a value to it*/
  Rocket1(int a, int b, int c){
    f = a;
    v = b;
    h = c;
  } 
  /*another
　Initialize when creating a variable
  Rocket1(int a,int b, int c):f(a),v(b),h(c){}
  */
  void Accel(int b){
    if(b<0){
      b = 0;  //if input b is (-), b=0 ,Don't think decelerations
    }
    else if(b>f){
      b = f;  //if input b is bigger than f , b=f, Match with fuel
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
  Rocket1 x;
  cout << "Launching the your Rocket ! " << endl;
  cout << "This Rocket is controlled by you !" << endl;
  cout << "You decide acceleration." << endl;
  cout << "There are 3 chances of acceleration" << endl;
  
  x.Report();

  int b; //input value
  int i;

  for(i=0;i<3;i++){
    cout << "Enter acceleration >> ";
    cin >> b;
    x.Accel(b);
    x.Report();
  }
}
