#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
 cout << "������� ����� ���������� ������: ";
 float dfunt; cin >> dfunt; 
 int p = (dfunt - static_cast<int> (dfunt))*100*2.4;
 cout <<"������������� ����� � ������ ����� ������: " << static_cast<int> (dfunt)<<"."<< p/12<<"."<<p %12;
}
 

