#include <iostream>
#include <string>

using namespace std;

class A {
	private:
  		int i;

	public:
  		A(int a) : i(a) { }
		A() { }
  		int getI() { return i; }
		
		bool operator>=(A& a){ return  i >= a.getI(); }
};


template <typename T> T max(T x, T y, T z) {
	T big;
	if (x>=y && x>=z){
		big = x;
	} else if (y>=z){
		big = y;
	} else {
		big = z;
	}
	return big;
}


int main()
{
  int i1 = 10;
  int i2 = 12;
  int i3 = 7;
  cout << "max(i1, i2, i3): " << max(i1, i2, i3) << endl;

  double d1 = i1 + 0.1;
  double d2 = i2 + 0.1;
  double d3 = i3 + 0.1;
  cout << "max(d1, d2, d3): " << max(d1, d2, d3) << endl;

  string s1 = "10";
  string s2 = "12";
  string s3 = "7";
  cout << "max(s1, s2, s3): " << max(s1, s2, s3) << endl;

  A a1(i1), a2(i2), a3(i3);
  cout << "max(a1, a2, a3): " << max(a1, a2, a3).getI() << endl;

  return 0;
}
