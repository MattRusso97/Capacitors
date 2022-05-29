#include <iostream>
#include <cmath>
#include <fstream>
#include "app2.h"
using namespace std;


Capacitor::Capacitor(double C){  //Constructor of Capacitor objects
  C_ = C;
  e0 = 8.854e-12;
  er = 1;
}

Capacitor::~Capacitor(){};  //Destructor of Capacitor objects

//Getters
double Capacitor::Get_C() const{  
  return C_;
}

double Capacitor::Get_e0() const{
  return e0;
}

double Capacitor::Get_er() const{
  return er;
}

//Setters
void Capacitor::Set_C(double C){
  C_ = C;
}

void Capacitor::Set_er(double Er){
  er = Er;
}

void Capacitor::print() const{   //Print method
  cout << "C = " << Get_C() << " F" << endl
       << "e0 = " << Get_e0() << " F/m" << endl
       << "er = " << Get_er() << endl << endl;
}

//Operator '+' overloading 
Capacitor Capacitor::operator+(const Capacitor& rhs) const{
  double C = (C_*rhs.C_)/(C_ + rhs.C_);
  return Capacitor(C);
}

//Operator '||' overloading
Capacitor Capacitor::operator||(const Capacitor& rhs) const{
  double C = C_ + rhs.C_;
  return Capacitor(C);
}
