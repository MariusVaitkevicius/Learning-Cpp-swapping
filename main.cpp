#include <iostream>

using namespace std;

//  Swap variable x and y values.
//  Do the same without introducing a new variable.

int main()
{
   int a,b;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Meanings before swapping places: "<<endl;
    cout << "First number = " << a <<endl;
    cout << "Second number = " << b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Meanings after swapping places: "<<endl;

    cout << "First number = " << a <<endl;
    cout << "Second number = " << b <<endl;
    cout << "";

    return 0;
}
