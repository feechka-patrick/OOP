#include <iostream>

using namespace std;
int main()
{
 setlocale(LC_ALL, "rus");
 int f,s,p;
 cout << "������� ���������� ������: ";
 cin >>f;
 cout << "������� ���������� ���������: ";
 cin >>s;
 cout << "������� ���������� ������: ";
 cin >>p;
 float newp = (s*12 + p)/2.4;
 float newf = f + newp/100;
 //char a = "&#163";
 cout << "���������� ������: " << char(156)<< int(newf*100 + 0.5)/100.0 ;
}

