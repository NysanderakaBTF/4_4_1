#include "class1.h"

int class1::func()
{
    int k = a[0];
    for (int i = 1; i < n; i++) {
        k -= a[i];
    }
    return k;
}
