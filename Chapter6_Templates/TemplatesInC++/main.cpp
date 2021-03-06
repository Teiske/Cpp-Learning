#include <iostream>

using namespace std;

//A normal class that handles intengers
// class calc {
// public:
//	 int multiply(int x, int y);
//	 int add(int x, int y);
// };
//
// int calc::multiply(int x, int y) {
//	 return x * y;
// }
//
// int calc::add(int x, int y) {
//	 return x + y;
// }

//A template class that can handle integers and
//floating point numbers or doubles
template<class A_Type> class calc {
public:
	A_Type multiply(A_Type x, A_Type y);
	A_Type add(A_Type x, A_Type y);
	A_Type subtract(A_Type x, A_Type y);
	A_Type divide(A_Type x, A_Type y);
};

template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x, A_Type y) {
	return x * y;
}

template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y) {
	return x + y;
}

template <class A_Type> A_Type calc<A_Type>::subtract(A_Type x, A_Type y) {
	return x - y;
}

template <class A_Type> A_Type calc<A_Type>::divide(A_Type x, A_Type y) {
	return x / y;
}

int main() {
	calc <int> calc_float;
	calc <float> b_calc_class;
	calc <double> c_calc_class;

	cout << "multiply(2, 2): " << calc_float.multiply(2, 2) << "\n";
	cout << "add(2, 2): " << calc_float.add(2, 2) << "\n";
	cout << "subtract(2, 2): " << calc_float.subtract(2, 2) << "\n";
	cout << "divide(2, 2): " << calc_float.divide(2, 2) << "\n";

	cout << "\n";

	cout << b_calc_class.multiply(2.f, 2.5) << "\n";
	cout << b_calc_class.add(2.f, 2.5) << "\n";
	cout << b_calc_class.subtract(2.f, 2.5) << "\n";
	cout << b_calc_class.divide(2.f, 2.5) << "\n";

	cout << "\n";

	cout << c_calc_class.multiply(2.5, 2.5) << "\n";
	cout << c_calc_class.add(2.5, 2.5) << "\n";
	cout << c_calc_class.subtract(2.5, 2.5) << "\n";
	cout << c_calc_class.divide(2.5, 2.5) << "\n";

	cin.get();
}
