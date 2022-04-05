#include "base.h"

void base::in_out()
{
	cin >> n;
	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
