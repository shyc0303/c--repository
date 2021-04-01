#include "car.cpp""

int main() {
	Car c1{"2020 카니발",2008,163};
	Car c2{ "2020 k5",1681,170 };
	Car c3{ "2019 스팅어",2050,186 };
	Car c4{ "2018 k7",2056,182 };

	cout << "기아차의 = " << c1.Getname() << ", " << "배기량 :" << c1.Getkm() << "cc" << ", " << "최대출력 :" << c1.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c2.Getname() << ", " << "배기량 :" << c2.Getkm() << "cc" << ", " << "최대출력 :" << c2.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c3.Getname() << ", " << "배기량 :" << c3.Getkm() << "cc" << ", " << "최대출력 :" << c3.Gethp() << "hp" << endl;
	cout << "기아차의 = " << c4.Getname() << ", " << "배기량 :" << c4.Getkm() << "cc" << ", " << "최대출력 :" << c4.Gethp() << "hp" << endl;
	
}