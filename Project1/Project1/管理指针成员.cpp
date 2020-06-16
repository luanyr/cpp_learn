#include <iostream>
#include "plain-ptr.h"
#include "value-ptr.h"
#include "smart-ptr.h"
using namespace std;

void test_AHahPtr()
{
	int i = 10;
	AHasPtr p1(&i ,42);
	AHasPtr p2 = p1;
	cout << p2.get_ptr_val() << endl;
	p1.set_ptr_val(0);
	cout << p2.get_ptr_val() << endl;

	int* ip = new int(42);
	AHasPtr ptr(ip, 10);
	cout << ptr.get_ptr_val() << endl;
	delete ip;
}

void testCHasPtr()
{
	int obj = 0;
	CHasPtr p1(obj, 42);
	CHasPtr p2 = p1;
	cout << p1.get_ptr_val() << " " << p1.get_val() << endl;
	cout << p2.get_ptr_val() << " " << p2.get_val() << endl;
	p1.set_ptr_val(6);
	p1.set_val(100);
	cout << p1.get_ptr_val() << " " << p1.get_val() << endl;
	cout << p2.get_ptr_val() << " " << p2.get_val() << endl;
}

void test_BHasPtr()
{
	int obj = 0;
	BHasPtr ptr1(&obj, 42);
	BHasPtr ptr2(ptr1);
	cout << ptr1.get_ptr_val() << "," << ptr1.get_val() << endl;
	cout << ptr2.get_ptr_val() << "," << ptr2.get_val() << endl;
	ptr2.set_ptr_val(2);
	ptr2.set_val(1);

}



