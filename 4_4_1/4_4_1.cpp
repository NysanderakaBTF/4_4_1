
#include <iostream>
#include"base.h"
#include"class1.h"
#include"class2.h"
#include"class3.h"
int main()
{
	base* p;
	p = new class3;
	p->in_out();
	((class3*)p)->in_out();
	return 0;
}

