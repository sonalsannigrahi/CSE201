#pragma once

#include <iostream>

template <typename T> class Complex {
private:
  double real, imaginary;

  static Complex max;

  void setMax();

public:
  // complex 0
  Complex();

  // initialize complex from given real and imaginary parts
  Complex(double re, double im);

  // initialize complex from a different complex
  Complex(const Complex &other);

  // get the components
  double getReal() {return real;}
  double getImaginary() {return imaginary;}

  // set the components
  void setReal(double re);
  void setImaginary(double im);

  // arithmetic
  Complex operator-();
  Complex operator+(const Complex &other);
  Complex operator-(const Complex &other);
  Complex operator*(const Complex &other);

  // comparison
  bool operator==(const Complex &other) const;
  bool operator!=(const Complex &other) const;
  Complex<T> operator+(Complex<T>& a){return Complex<T>(a.getReal() + this->real, a.getImaginary() + this->imaginary);}
  Complex<T> operator-(Complex<T>& a){return Complex<T>(a.getReal() - this->real, a.getImaginary() - this->imaginary);}
  Complex<T> operator*(Complex<T>& a){return Complex<T>(a.getReal()*this->real + a.getImaginary()*this->imaginary, a.getReal()*this->imaginary + a.getImaginary()*this->real);}	 

  // static
  static void printMaxComplex(); 
  static Complex fromMax();

  // print
  void print(){
       std::cout<< real<< " + " << imaginary<< "i"<<std::endl;
  }
};


