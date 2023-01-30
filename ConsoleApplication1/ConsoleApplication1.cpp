#include <iostream>
#include "..\KvadratLib\Kvadrat.h"

using namespace std;

int main()
{
    Kvadrat k = Kvadrat(12);

    int area = k.GetArea();
    int perimeter = k.GetPerimeter();
    int size = k.Size();

    printf("Size: %d \n", size);
    printf("Area: %d \n", area);
    printf("Perimeter: %d \n", perimeter);

    getchar();
}
