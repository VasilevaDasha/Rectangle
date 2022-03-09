// прямоугольник.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Rectangle {
private:
	int P;
	int S;
	int a, b;
public:
	void setAB(int a, int b) {
		this->a = a;
		this->b = b;
		cout << endl;
	}
	void Perimetr() {
		P = 2 * (a + b);
		cout << "P = " << P << endl;
	}
	void Area() {
		S = a * b;
		cout << "S = " << S << endl;
	}
	void show_emp_details() {
		cout << "\n\n*****Details of Rectangle*****";
		cout << "\nSide a =   " << a;
		cout << "\nSide b =   " << b;
		cout << "\n         " << endl;
	}
};
int main() {
	Rectangle emp;
	emp.setAB(14, 6);
	emp.show_emp_details();

	emp.Area();
	emp.Perimetr();
	return 0;
}