#include <iostream>
using namespace std;

const int maxisize = 100;

float fmemory[maxisize];
int fmem_top = 0;
int pmemory[maxisize];
int pmem_top = 0;

class Float{
protected:
    int addr;
public:
    Float(float newnum) {
        addr = fmem_top;
        *(fmemory + addr) = newnum;
        fmem_top++;
    }
    int operator& (){
        return addr;
    }
};
class ptrFloat {
private:
    int pmem_ind;
public:
    ptrFloat(int newp) {
        pmem_ind = pmem_top;
        *(pmemory + pmem_ind) = newp;
        pmem_top++;
    }
    float& operator* () {
        return fmemory[pmemory[pmem_ind]];
    }
};
int main()
{
    Float var1 = -1.234;	//	���������� � ��������������
    Float var2 = 5.678;	//	��� ������������ ����������
    ptrFloat ptr1 = &var1;	// ���������� � ��������������
    ptrFloat ptr2 = &var2;	// ��� ���������
    cout << "*ptr1 = "	<< *ptr1;	//	�������� �������� ����������
    cout << "\n*ptr2 = " << *ptr2;	//	� ������� �� �����
    *ptr1 = -7.123;	//	����������� ����� ��������
    *ptr2 = 8.456;	//	����������, ������������ ����� ���������
    cout << "\n*ptr1 = " << *ptr1;	//	����� �������� ��������
    cout << "\n*ptr2 = " << *ptr2;	//	� ������� �� �����
    cout << endl << fmem_top;
    return 0;
}

