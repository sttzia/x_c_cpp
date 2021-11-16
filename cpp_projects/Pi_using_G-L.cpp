#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double Calculate(long int);

int main()
{
    long int iteration;

    while (true)
    {
        cout << "Welcome to Pi Calculating Program!\n"
                "Today we will be utilizing the Gregory-Leibniz series to calculate pi.\n";
        cout << "======================================================================";
        cout << endl
             << endl
             << endl;
        cout << "Please enter the number of iterations you would like to calculate (-999 to Quit): ";
        cin >> iteration;

        if (iteration == -999)
        {
            cout << "======================================\n";
            cout << "Thank You for calculating Pi, GoodBye!";
            cout << "\n======================================\n";
            return 0;
        }

        if (!cin || cin.peek() != '\n')
        {
            cout << endl
                 << endl
                 << endl;
            cout << "================================================\n";
            cout << "Invalid input.. Try Again . . .";
            cout << "\n================================================";
            cout << endl
                 << endl
                 << endl;
            cin.clear();
            cin.ignore(32768, '\n');
            continue;

            Calculate(iteration);

            return 0;
        } //if
    }     //while (true)
} //main

double Calculate(long int iteration)
{

    double pi;
    for (int i = 1; i <= iteration; i++)
    {

        pi = ((4 / i) - (4 / i + 2));
        i + 4;
        cout << pi;
    }
}
