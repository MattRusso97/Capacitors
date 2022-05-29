#include <iostream>
#include "app2.h"
using namespace std;

//Let's show some of the methods implemented in the Capacitor class:

int main(){

  Capacitor C1(1); //Constructing a Capacitor object called C1
  C1.print();      //Using C1's method called 'print'
  
  double c = C1.Get_C();   //Showing C1's getter 
  cout << "The capacitance is: " << c << " F" << endl;


  C1.Set_C(1.3);   //Using C1's setters
  C1.Set_er(5); 

  C1.print();      //Printing the results
  return 0;
}
