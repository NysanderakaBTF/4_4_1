#include "class3.h"
#include <iomanip>
void class3::in_out()
{
	cout << "Array dimension: " << n<<endl;
	cout << "The original array:";
	for (int i = 0; i < n; i++) {
		cout << setw(5) << a[i];
	}
	cout << endl << "Min: " << class1::func()<<endl;
	cout << endl << "Sum: " << class2::func() << endl;
}
