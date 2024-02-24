#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to convert decimal to binary
vector<int> decimalToBinary(int decimal)
{
    vector<int> binary;

    // Edge case for 0
    if (decimal == 0)
    {
        binary.push_back(0);
        return binary;
    }
    // Edge case for 1
    if (decimal == 1)
    {
        binary.push_back(1);
        return binary;
    }

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary.push_back(remainder);
        decimal /= 2;
    }

    // Reverse the vector to get the binary representation
    reverse(binary.begin(), binary.end());

    return binary;
}

int main()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    vector<int> binaryNumber = decimalToBinary(decimalNumber);

    cout << "Binary equivalent: ";
    for (int bit : binaryNumber)
    {
        cout << bit;
    }
    cout << endl;

    return 0;
}
