#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double pi = 0;
    int elements;
    cout << "How many??? ";
    cin >> elements;
    
    for (int n = 1; n <= elements; n++)
    {
        pi += (double) pow(-1, n+1)/(2*n-1);    
    } 
    pi *= 4;

    cout << "Estimated PI value of (" << elements << " elements): " << pi << "\n";
 
    system("pause");
    return 0;
}