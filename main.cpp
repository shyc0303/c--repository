#include "car.cpp""

int main() {
	Car c1{"2020 ī�Ϲ�",2008,163};
	Car c2{ "2020 k5",1681,170 };
	Car c3{ "2019 ���þ�",2050,186 };
	Car c4{ "2018 k7",2056,182 };

	cout << "������� = " << c1.Getname() << ", " << "��ⷮ :" << c1.Getkm() << "cc" << ", " << "�ִ���� :" << c1.Gethp() << "hp" << endl;
	cout << "������� = " << c2.Getname() << ", " << "��ⷮ :" << c2.Getkm() << "cc" << ", " << "�ִ���� :" << c2.Gethp() << "hp" << endl;
	cout << "������� = " << c3.Getname() << ", " << "��ⷮ :" << c3.Getkm() << "cc" << ", " << "�ִ���� :" << c3.Gethp() << "hp" << endl;
	cout << "������� = " << c4.Getname() << ", " << "��ⷮ :" << c4.Getkm() << "cc" << ", " << "�ִ���� :" << c4.Gethp() << "hp" << endl;
	
}