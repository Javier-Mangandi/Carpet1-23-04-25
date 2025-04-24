#include <iostream>

using namespace std;
#include <cmath>

int main()
{
    float deltaResult, functionResult1, functionResult2, a, b, c;

    cout << "Write the value of the variable a: " << endl;
    cin >> a;

    if (a == 0)
    {
        cout << "Your value in a is innaceptable, thats not a parabol, please, enter another value for a" << endl;
        cin >> a;
        cout << "Your parameters are wrong" << endl;
    }
    else
    {

        cout << "Write the value of the variable b: " << endl;
        cin >> b;
        cout << "Write the value of the variable c: " << endl;
        cin >> c;

        deltaResult = ((b * b) - (4 * a * c));

        if (deltaResult == 0)
        {
            functionResult1 = ((-b) / (2 * a));
            cout << "The functions value is: " << functionResult1 << endl;
        }
        else if (deltaResult > 0)
        {
            functionResult1 = ((-b) + pow(deltaResult, 0.5)) / (2 * a);
            functionResult2 = ((-b) - pow(deltaResult, 0.5)) / (2 * a);

            cout << "The functions value are: " << functionResult1 << " y " << functionResult2 << endl;
        }
        else
        {
            cout << "Its impossible to have a value with that parameters " << endl;
        }
    }
    return 0;
}