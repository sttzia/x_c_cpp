#include <iostream>
#include <math.h>

using namespace std; 

int main() {

    long long seqNum; // sequence number users will input
    long double val=0; // the series output

    cout << "Welcome to the compute PI program." << endl; // welcome message
    cout << "Please inter the sequence number in the form of an integer." << endl;
    cin >> seqNum; // user input

    while ( seqNum < 0) // validation, number must be positive
    {
        cout << "Please enter a positive number." << endl;
        cin >> seqNum;
    } // end while

    if (seqNum > 0)
    {
        for ( long int i = 0; i < seqNum; i++ )
        {
            val = val + 4 * (pow(-1.00,i)/(1 + 2*i)); // Gregory-Leibniz sum calculation
        }// end for


        cout << val;
    } // end if

    return 0;
}