#include<iostream>
#include<string>

using namespace std;
int main(){
  int x;
  string y;

  cout << "Tell me your age >> " << endl; /* "<<" is  "mouse"*/
  cin >> x;				   /* ">>" is "arrow"*/
  cout << "Tell me your name >>" << endl;
  cin >> y;

  cout << "your age is " << x << endl;
  cout << "your name is " << y << endl;

  return 0;
}
