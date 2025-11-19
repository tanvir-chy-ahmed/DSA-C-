#include <iostream>
#include <vector>
int main()
{

    int n = 13;
    int rev = 0;

    // Step 1: Make reverse binary
    while (n > 0)
    {
        int rem = n % 2;      // bit
        rev = rev * 10 + rem; // build reversed binary
        n = n / 2;
    }

    // Step 2: Reverse again → final binary
    int bin = 0;
    while (rev > 0)
    {
        int last = rev % 10;
        bin = bin * 10 + last;
        rev = rev / 10;
    }

    std::cout << bin;

    // int n = 13;
    // vector<int> bits;

    // while (n > 0)
    // {
    //     int rem = n % 2; // remainder = next bit
    //     bits.push_back(rem);
    //     n = n / 2; // reduce number
    // }

    // // reverse bits for final answer
    // reverse(bits.begin(), bits.end());

    return 0;
}