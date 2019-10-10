#include <iostream>
#include <cmath>
class Complex {
  private:
    double real;        // the real part
    double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex(){
	      real = 0;
	      imaginary = 0;
    }
	
    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary){
    	this -> real = real;
	this -> imaginary = imaginary;
    }
    ~Complex() {
	std::cout << "Destroying number " << real << "+" << imaginary<< "*i" << std::endl;
    }
    double getReal(){
	return real;
    }            
    double getImaginary(){
    	return imaginary;
    }        
    void setReal(double re){
	real = re;
    }      
    void setImaginary(double im){
	imaginary = im;
    }

    double magnitude(){
	double mag = sqrt (pow(real, 2) + pow(imaginary, 2));
	return mag;
    }
  
    void normalize(){
	double mag = magnitude();
	real = real/mag;
	imaginary = imaginary/mag;
    }

};


int main() {
  Complex c1;
  Complex c2 = Complex(3,4);

  c1.normalize();

  c1.setReal(c2.getReal());
  c1.setImaginary(c2.getImaginary());

  std::cout << "c1 magnitude: " << c1.magnitude() << std::endl;
  c1.normalize();

  std::cout << "c1 is: " << c1.getReal() <<
    " + " << c1.getImaginary() << " * i" << std::endl;
  std::cout << "c1 magnitude:" << c1.magnitude() << std::endl;
}
