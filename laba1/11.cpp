#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
 setlocale(LC_ALL, "rus");
 string a[] = { "�������","���","�����","�����",
                "������","�������","�������� 16","�����-���������",
                "������","�������","�������� 16","�����-���������",
                "������","�������","�������� 16","�����-���������"};
 int i = 0;
 while (i < 16){
 cout << setw(10) <<setiosflags(ios::left)<< a[i]<< setw(10) <<setiosflags(ios::left)<<a[i+1]
      << setw(15) <<setiosflags(ios::left) <<a[i+2]<< setw(10) <<setiosflags(ios::left) <<a[i+3] <<endl;
      i+=4;
  }
}

