#include<iostream>
#include<string>

using namespace std;
int main(){
  int x;
  string y;

  cout << "Tell me your age >> "; /* "<<" is  "mouse"*/
  cin >> x;				   /* ">>" is "arrow"*/
  cout << "Tell me your name >> ";
  cin >> y;

  cout << "your age is " << x << endl;
  cout << "your name is " << y << endl;

  return 0;
}
