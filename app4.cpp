#include <iostream>
#include <fstream>
#include "app2.h"
#include "TRandom3.h"
using namespace std;


int main(){
  
  //Operator overloading test
  
  Capacitor A1(1);
  Capacitor A2(1); 

  Capacitor A3 = A1 + A2; 
  Capacitor A4 = A1||A2;  

  A3.print(); //Let's show the results 
  A4.print(); //Let's show the results 


  //Now let's generate the required data 

  double C = 0;
  Capacitor C1(0); //The value of the capacitans is in [pF]
  Capacitor C2(10e-12);  
  Capacitor C3(5e-12);  
  Capacitor C4(15e-12);  
  Capacitor Ceq(1); 
  
  TRandom3* gen = new TRandom3();  //Let's use ROOT's library to generate random numbers
  gen -> SetSeed(0); 

  ofstream myfile("true_dat.txt");
  
  int N = 1000;
  for(int i = 0; i < N; i++){

    C = 1e-12 + gen -> Uniform(100e-12 - 1e-12); //Generating uniformly distribuited
                                                 //values of the C1's capacitance
    C1.Set_C(C);                                 //Uploading these values in C1
    Ceq = (C1||C2) + (C3||C4);                   //Evaluating Ceq
                                    
    myfile << C << "\t" << Ceq.Get_C() << endl; //Saving data on a .txt file
  }

  myfile.close();
  
  return 0;
}
