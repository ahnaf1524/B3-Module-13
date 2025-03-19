// author : ahnaf_cp
// Problem Statement : https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/BITMEDU2
#include <iostream>
#define endl '\n'
using namespace std;

// Function to perform bit manipulations
void solve(void) {
    int n;
    cin >> n;

    // Bit Manipulation Steps:
    // 1. Set the first bit (counting from the right, index 1).
    // 2. Unset the second bit (counting from the right, index 2).
    // 3. Flip the third bit (counting from the right, index 3).

    // Step 1: Setting the first bit
    // To set a specific bit to 1, we use the bitwise OR (|) operator.
    // Formula: num = num | (1 << position)
    // Example:
    //   Input: 2 (binary: 0010)
    //   Setting the first bit:
    //     0010 | 0001 = 0011 (3)
    int setBit = n | (1 << 0);

    // Step 2: Unsetting the second bit
    // To clear a specific bit, use the bitwise AND (&) with the negation (~) of the mask.
    // Formula: num = num & ~(1 << position)
    // Example:
    //   Input: 3 (binary: 0011)
    //   Unsetting the second bit:
    //     0011 & ~(0010) = 0001 (1)
    int unsetBit = setBit & ~(1 << 1);

    // Step 3: Flipping the third bit
    // To flip a specific bit, use the bitwise XOR (^) operator.
    // Formula: num = num ^ (1 << position)
    // Example:
    //   Input: 1 (binary: 0001)
    //   Flipping the third bit:
    //     0001 ^ 0100 = 0101 (5)
    int flipBit = unsetBit ^ (1 << 2);

    // Print the final result after all manipulations
    cout << flipBit << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     // a bit unset ----> 0
      // a bit set ---> 1
    solve();
    return 0;
}
