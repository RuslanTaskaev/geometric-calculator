#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cstring>
#include <cstdio>
#define PI 3.14159

using namespace std;

class Rectangle {
private:
	double length;
	double width;

public:
	void user_input();
	double get_area();
};

void Rectangle::user_input() {
	cout << "\nВведите длину прямоугольника: ";
	cin >> length;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;
}

double Rectangle::get_area() {
	return length * width;
}

class Circle {
private:
	double radius;
	double d;
	double len;
public:
	void user_inputR();
	void user_inputD();
	void user_inputL();
	double get_area_r();
	double get_area_d();
	double get_area_l();
};

void Circle::user_inputR() {
	cout << "\nВведите радиус окружности: ";
	cin >> radius;
}

void Circle::user_inputD() {
	cout << "\nВведите диаметр окружности: ";
	cin >> d;
}

void Circle::user_inputL() {
	cout << "\nВведите длину окружности: ";
	cin >> len;
}


double Circle::get_area_r() {
	return PI * pow(radius, 2);
}

double Circle::get_area_d() {
	return 0.25 * PI * pow(d,2);
}

double Circle::get_area_l() {
	return pow(len, 2) / (4 * PI);
}

class Triangle {
private:
	double first_LegLength;
	double second_LegLength;
	double third_LegLength;
	double height;
	double angle;

public:
	void user_input_pifagor();
	void user_input_heron();
	void user_input_twosides_angle();
	void user_input_side_height();
	double pifagor();
	double heron();
	double twoside_angle();
	double side_height();
};

void Triangle::user_input_pifagor() {
	cout << "\nВведите длину первого катета треугольника: ";
	cin >> first_LegLength;
	cout << "Введите длину второго катета треугольнки: ";
	cin >> second_LegLength;
}

void Triangle::user_input_heron() {
	cout << "\nВведтие длину первой стороны: ";
	cin >> first_LegLength;
	cout << "Введите длину второй стороны: ";
	cin >> second_LegLength;
	cout << "Введите длину третьей стороны: ";
	cin >> third_LegLength;
}

void Triangle::user_input_twosides_angle() {
	cout << "\nВведите длину первой стороны: ";
	cin >> first_LegLength;
	cout << "Введите длину второй стороны: ";
	cin >> second_LegLength;
	cout << "Введите угол между двумя этими сторонами(в градусах): ";
	cin >> angle;
}

void Triangle::user_input_side_height() {
	cout << "\nВведите длину стороны: ";
	cin >> first_LegLength;
	cout << "Введите длину проведённой к этой стороне высоты: ";
	cin >> height;
}

double Triangle::pifagor() {
	return sqrt(pow(first_LegLength, 2) + pow(second_LegLength, 2));
}

double Triangle::heron() {
	int p = (first_LegLength + second_LegLength + third_LegLength) / 2;
	int s = p * (p - first_LegLength) * (p - second_LegLength) * (p - third_LegLength);
	return sqrt(s);
}

double Triangle::twoside_angle() {
	return (first_LegLength / 2) * second_LegLength * sin(angle);
}

double Triangle::side_height() {
	return (first_LegLength / 2) * height;
}

class Square {
private:
	double side_ofSquare;
	double len_dioganal;

public:
	void user_input_side();
	void user_input_dioganal();
	double get_area_side();
	double get_area_dioganal();
};

void Square::user_input_side() {
	cout << "\nВведите одну из сторон квадрата: ";
	cin >> side_ofSquare;
}

void Square::user_input_dioganal() {
	cout << "\nВведите длину диоганали: ";
	cin >> len_dioganal;
}

double Square::get_area_dioganal() {
	return pow(len_dioganal, 2) / 2;
}
double Square::get_area_side() {
	return pow(side_ofSquare, 2);
}

class Rhombus {
private:
	double len_side;
	double len_height;
	double angle;
	double first_dioganal, second_dioganal;

public:
	void user_input_sideHeight();
	void user_input_angle();
	void user_input_dioganal();
	double get_area_sideHeight();
	double get_area_angle();
	double get_area_dioganal();
};

void Rhombus::user_input_sideHeight() {
	cout << "\nВведите длину одной из сторон ромба: ";
	cin >> len_side;
	cout << "Введите длину высоты, опущенной на эту сторону: ";
	cin >> len_height;
}

void Rhombus::user_input_angle() {
	cout << "\nВведите длину стороны: ";
	cin >> len_side;
	cout << "Введите угол между ними в градусах: ";
	cin >> angle;
}

void Rhombus::user_input_dioganal() {
	cout << "Введите длину первой диоганали: ";
	cin >> first_dioganal;
	cout << "Введите длину второй диоганали: ";
	cin >> second_dioganal;
}

double Rhombus::get_area_sideHeight() {
	return len_side * len_height;
}

double Rhombus::get_area_angle() {
	return pow(len_side, 2) * sin(angle);
}

double Rhombus::get_area_dioganal() {
	return (first_dioganal / 2) * second_dioganal;
}

class Trapezoid {
private:
	double topBase_length;
	double bottomBase_length;
	double len_height;

public:
	void user_input();
	double get_area();
};

void Trapezoid::user_input() {
	cout << "\nВведите длину верхнего основания трапеции: ";
	cin >> topBase_length;
	cout << "Введите длину нижнего основания трапеции: ";
	cin >> bottomBase_length;
	cout << "Введите высоту трапеции: ";
	cin >> len_height;
}

double Trapezoid::get_area() {
	return ((topBase_length + bottomBase_length) * len_height) / 2;
}

int main() {

	setlocale(LC_ALL, "Russian");

	char choice;

	while (true) {
		do {
			cout << "\n\t\t\t~~~Выберите операцию~~~\n";
			cout << "1. Вычислить прямоугольник.\n";
			cout << "2. Вычислить площадь круга.\n";
			cout << "3. Вычислить гипотенузу или площадь треугольника.\n";
			cout << "4. Вычислить площадь квадрата.\n";
			cout << "5. Вычислить площадь ромба.\n";
			cout << "6. Вычислить площадь трапеции.\n";
			cout << "7. Выход из программы.\n";
			cout << "Ввод: ";
			cin >> choice;

			switch (choice) {
			case '1':
				Rectangle rectangle;
				rectangle.user_input();
				cout << "\nПлощадь вашего прямоугольника равна "
					<< rectangle.get_area() << "(m^2)" << endl;
				break;
			case '2':
				Circle circle;
				do{
					cout << "\t1. Вычислить площадь круга через его радиус.\n";
					cout << "\t2. Вычилисть площадь круга через его диаметр.\n";
					cout << "\t3. Вычислить площадь круга через его длину.\n";
					cout << "\t4. Назад.\n";
					cout << "Ввод: ";
					cin >> choice;
					if (choice == 4) break;
					switch (choice){
					case '1':
						circle.user_inputR();
						cout << "\nПлощадь круга, через его радиус равна: " <<
							circle.get_area_r();
						break;
					case '2':
						circle.user_inputD();
						cout << "\nПлощадь круга, через его диаметр равна: " <<
							circle.get_area_d();
						break;
					case '3':
						circle.user_inputL();
						cout << "\nПлощадь круга, через его длину равна: " <<
							circle.get_area_l();
						break;
					default:
						cout << "Некорректная операция.";
						break;
					}
					break;

				} while (choice > '1' || choice < '4');
				break;

			case '3':
				Triangle triangle;
				do{
					cout << "\t1.Формула площади треугольника по стороне и высоте.\n";
					cout << "\t2.Формула площади треугольника по трем сторонам\n";
					cout << "\t3.Формула площади треугольника по двум сторонам и углу между ними\n";
					cout << "\t4.Формула нахождения гипотенузы треугольника.\n";
					cout << "\t5.Назад.\n";
					cout << "Ввод: ";
					cin >> choice;
					if (choice == '5') break;
					switch (choice){
					case '1':
						triangle.user_input_side_height();
						cout << "Площадь треугольника по стороне и высоте равна: " <<
							triangle.side_height() << endl;
						break;
					case '2':
						triangle.user_input_heron();
						cout << "Площадь треугольника по трём его сторонам равна: " <<
							triangle.heron() << endl;
						break;
					case '3':
						triangle.user_input_twosides_angle();
						cout << "Площадь треугольника по двум сторонам и углу между ними равна " <<
							triangle.twoside_angle() << endl;
						break;
					case '4':
						triangle.user_input_pifagor();
						cout << "Гипотензу треугольника по двум его катетам равна: " <<
							triangle.pifagor() << endl;
						break;
					default:
						cout << "Введена некорректная операция." << endl;
						break;
					}
				} while (choice  < '1' || choice > '5');

				break;
			case '4':
				Square square; 
				do{
					cout << "\t1.Площадь квадрата через длину его стороны.\n";
					cout << "\t2.Площадь квадрата через длину его диоганали.\n";
					cout << "\t3.Назад.\n";
					cout << "Ввод: ";
					cin >> choice;

					if (choice == '3') break;
					
					switch (choice){
					case '1':
						square.user_input_side();
						cout << "Площадь квадрата через длину его стороны равна: " <<
							square.get_area_side() << endl;
						break;
					case '2':
						square.user_input_dioganal();
						cout << "Площадь квадрата через длину его диагонали равна: " <<
							square.get_area_dioganal() << endl;
						break;
					case '3':
						break;
					default:
						cout << "Введена некорректная операция." << endl;
						break;
					}

				} while (choice > '1' || choice < '3');
				break;
			case '5':
				Rhombus rhombus;
				do{
					cout << "\t1.Площадь ромба через сторону и высоту.\n";
					cout << "\t2.Площадь ромба через сторону и углу между ними.\n";
					cout << "\t3.Площадь ромба через две его диагонали.\n";
					cout << "\t4.Назад.\n";
					cout << "Ввод: ";
					cin >> choice;
					
					if (choice == '4') break;

					switch (choice){
					case '1':
						rhombus.user_input_sideHeight();
						cout << "Площадь ромба через сторону и высоту равна " <<
							rhombus.get_area_sideHeight() << endl;
						break;
					case '2':
						rhombus.user_input_angle();
						cout << "Площадь робма через сторону и углу между ними равна " <<
							rhombus.get_area_angle() << endl;
						break;
					case '3':
						rhombus.user_input_dioganal();
						cout << "Площадь ромьа через две его диагонали равна " <<
							rhombus.get_area_dioganal() << endl;
						break;
					default:
						cout << "Введена некорректная операция." << endl;
						break;
					}
				} while (choice > '1' || choice < '4');
				break;
			case '6':
				Trapezoid trapezoid;
				trapezoid.user_input();
				cout << "\nПлощадь ромба трапеции равна: " <<
					trapezoid.get_area() << endl;
				break;
			case '7':
				break;
			default:
				cout << "Выбрана некорректная операция!\n";
				break;
			}

		} while (choice < '1' || choice > '6' && choice != '7');

		if (choice == '7') break;
	}

	return 0;
}
