#include<iostream>
#include<cstdio>
using namespace std;
int main() {
  // 13 in binary: 1101
  // What is the value at the 2nd position (2^2) in `1101`?
  // To check, right shift the number by 2 positions: 1101 >> 2 = 11
  // The rightmost bit of the result (`11`) is the 2nd position bit (1).
  // Therefore, the value at the 2nd position is 1.
  int num = 13;
  int pos = 2;
//  pos = 1;
  int bitVal = (num >> pos) & 1;
  cout << "The bit at position " << pos << " in binary " << num << " is: " << bitVal << endl;
  // least significant bit --> LSB
  // All even number binaries end with 0 (LSB is 0)
  // Example of even number: 2 (10[0])
  // All odd number binaries end with 1 (LSB is 1)
  // Example of odd number: 13 (110[1])



  // Example to find the value of a specific bit position using bitwise operators

  // Let's start with the number 13 (binary: 1101)

  // Step 1: Find the value at position 1 (1st position from the right, 0-based index)
  // Right shift the number by 1 position: (13 >> 1) = 110
  // Now, perform bitwise AND with 1 to isolate the rightmost bit:
  //    110  (binary of 6 after shifting)
  //  & 001
  //  -------
  //    000  (binary representation of 0)
  // Result: The bit at position 1 is 0.

  // Step 2: Find the value at position 2 (2nd position from the right)
  // Right shift the number by 2 positions: (13 >> 2) = 11
  // Perform bitwise AND with 1:
  //    11   (binary of 3 after shifting)
  //  & 01
  //  -------
  //    01   (binary representation of 1)
  // Result: The bit at position 2 is 1.

  // Step 3: Find the value at position 0 (0th position from the right, or LSB)
  // Simply perform: 13 & 1
  //    1101  (binary of 13)
  //  & 0001
  //  -------
  //    0001  (binary representation of 1)
  // Result: The bit at position 0 is 1.

  // Summary:
  // - To find the value at a specific bit position (pos):
  //   1. Right shift the number by "pos" positions: (num >> pos)
  //   2. Perform bitwise AND with 1: (num >> pos) & 1
  // - This isolates the bit at the desired position.

  return 0;
}
