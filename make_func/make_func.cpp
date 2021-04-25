#include<iostream>
#include<string>
using namespace std;

void greet(){
  cout << "HeLLo (^^)" << endl;
}

void greet_you(string n){
  cout << "Hello " << n << " !" << endl;  
}


int main()
{
  greet();
  greet_you("mako");

  return 0;
}
