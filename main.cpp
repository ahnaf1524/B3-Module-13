#include <iostream>
using namespace std;

/*
Topic 1: Bitwise OR Operator (|)

Introduction:
- The bitwise OR operator (|) is used to perform a bitwise comparison between
two integers.
- It works at the binary level, comparing each bit of the two numbers.
- The result of each bit is set to 1 if either of the bits is 1, otherwise it is
set to 0.

Difference between Bitwise OR and Logical OR:
- Bitwise OR Operator Symbol: |
  - Works with binary digits (bits).
  - Compares corresponding bits of two numbers.
  - Sets the bit to 1 if either bit is 1.

- Logical OR Operator Symbol: ||
  - Used in conditional statements.
  - Returns true (1) if at least one condition is true, otherwise false (0).

Bitwise OR Truth Table:
1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0

Example: Bitwise OR of 5 and 6
Binary representation of 5: 101
Binary representation of 6: 110
Applying OR:
   101
|  110
-------
   111 (Binary) -> 7 (Decimal)

Summary:
- Use '|' for bitwise operations.
- Use '||' for logical comparisons.
*/

void topicOne(void) {
  int x, y;
  cin >> x >> y;
  // Performing bitwise OR operation
  int ans = x | y;
  cout << "Bitwise OR of " << x << " and " << y << " is: " << ans << endl;
}

/*
Topic 2: Bitwise AND Operator (&)

Introduction:
- The bitwise AND operator (&) is different from the "address-of" operator (&)
used with scanf().
- The bitwise AND operator works with two integer values (binary numbers),
  while the "address-of" operator works with a single variable to get its memory
address.

Difference between Bitwise AND and Logical AND:
- Bitwise AND Operator Symbol: &
  - Works at the binary level.
  - Compares each bit of two numbers and sets the resulting bit to 1
    only if both bits are 1.

- Logical AND Operator Symbol: &&
  - Used in conditional statements.
  - Returns true (1) if both conditions are true, otherwise false (0).

Bitwise AND Truth Table:
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0

Example: Bitwise AND of 5 and 6
Binary representation of 5: 101
Binary representation of 6: 110
Applying AND:
   101
&  110
-------
   100 (Binary) -> 4 (Decimal)

Summary:
- Use '&' for bitwise operations.
- Use '&&' for logical comparisons.
*/
void topicTwo(void) {
  int x, y;
  cin >> x >> y;
  int ans = (x & y);
  cout << "Bitwise AND of " << x << " and " << y << " is: " << ans << endl;
}

/*
Topic 3: Bitwise XOR Operator (^)

Introduction:
- The bitwise XOR (Exclusive OR) operator (^) is used to compare corresponding
bits of two integers.
- It sets each bit to 1 only if the bits are different (one is 1 and the other
is 0).
- If both bits are the same (both 0 or both 1), the result is 0.

Difference between Bitwise XOR and Logical XOR:
- Bitwise XOR Operator Symbol: ^
  - Works at the binary level.
  - Compares each corresponding bit of two numbers.
  - Sets the bit to 1 if the bits are different (one 1 and one 0).

- Logical XOR Operator:
  - There is no direct "logical XOR" in C++, but XOR logic can be achieved using
the expression: (a && !b) || (!a && b)
  - Returns true (1) if exactly one of the conditions is true.

Bitwise XOR Truth Table:
1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0

Example: Bitwise XOR of 5 and 6
Binary representation of 5: 101
Binary representation of 6: 110
Applying XOR:
   101
^  110
-------
   011 (Binary) -> 3 (Decimal)

Properties of XOR:
1. a ^ a = 0      (Any number XORed with itself is 0)
2. a ^ 0 = a      (Any number XORed with 0 remains unchanged)
3. XOR is commutative and associative:
   - a ^ b = b ^ a
   - (a ^ b) ^ c = a ^ (b ^ c)

Summary:
- Use '^' for bitwise XOR operations.
- XOR is useful for tasks like swapping variables without a temporary variable
and finding the unique element in an array.
*/

void topicThree(void) {
  int x, y;
  cin >> x >> y;
  int ans = (x ^ y);
  cout << "Bitwise XOR of " << x << " and " << y << " is: " << ans << endl;
}
/*
Question: What happens if we perform bitwise operations among three numbers?

Introduction:
- In C++, bitwise operations can be performed on more than two numbers.
- The operations are performed **from left to right**, following the order of
evaluation.

How It Works:
- When performing bitwise operations among three numbers, the operator works on
the first two numbers first, then takes the result and performs the operation
with the third number.
- In other words:
  (a OP b) OP c
  where OP is a bitwise operator (|, &, ^, etc.).

Example 1: Bitwise OR among three numbers (5, 6, and 3)
Binary representation:
5 -> 101
6 -> 110
3 -> 011

Step 1: Perform bitwise OR between 5 and 6:
   101
|  110
-------
   111 (Result: 7)

Step 2: Perform bitwise OR between the result (7) and 3:
   111
|  011
-------
   111 (Final Result: 7)

Final Answer:
Bitwise OR among (5, 6, 3) = 7

Example 2: Bitwise AND among three numbers (5, 6, and 3)
Binary representation:
5 -> 101
6 -> 110
3 -> 011

Step 1: Perform bitwise AND between 5 and 6:
   101
&  110
-------
   100 (Result: 4)

Step 2: Perform bitwise AND between the result (4) and 3:
   100
&  011
-------
   000 (Final Result: 0)

Final Answer:
Bitwise AND among (5, 6, 3) = 0

Example 3: Bitwise XOR among three numbers (5, 6, and 3)
Binary representation:
5 -> 101
6 -> 110
3 -> 011

Step 1: Perform bitwise XOR between 5 and 6:
   101
^  110
-------
   011 (Result: 3)

Step 2: Perform bitwise XOR between the result (3) and 3:
   011
^  011
-------
   000 (Final Result: 0)

Final Answer:
Bitwise XOR among (5, 6, 3) = 0

Summary:
- Bitwise operations among three numbers are performed from left to right.
- The result of the first operation is used as input for the next operation.
- The final result may vary based on the operator (|, &, ^).
*/
void bitwiseThreeInput(void) {
  int a, b, c;
  cin >> a >> b >> c;
  int orResult = (a | b) | c;
  int andResult = a & b & c;
  int xorResult = a ^ b ^ c;
  cout << "Bitwise OR among (" << a << ", " << b << ", " << c
       << ") = " << orResult << endl;
  cout << "Bitwise AND among (" << a << ", " << b << ", " << c
       << ") = " << andResult << endl;
  cout << "Bitwise XOR among (" << a << ", " << b << ", " << c
       << ") = " << xorResult << endl;
}
/*
Carry Term in Arithmetic and Binary Operations:

1. Arithmetic Operations (Decimal):
   - The carry is the value transferred to the next higher digit
     when the sum of two digits exceeds the base (10).
   - Example:
     27 + 38 = 65
       (7 + 8 = 15, carry 1 to the tens place)

2. Binary Operations:
   - The carry in binary addition occurs when the sum of two bits is 2 or more
(binary 10).
   - Example:
     1 + 1 = 10 (binary), carry 1 to the next higher bit.
*/

/*
Topic 4: Bitwise NOT Operator (~)

Introduction:
- The **Bitwise NOT** operator (~) is used to flip or invert all the bits of an
integer.
- It changes all `1`s to `0`s and all `0`s to `1`s.

Basic Concept:
- **Not true = false**
- **Not false = true**
- The Bitwise NOT operator works similarly by flipping every bit.

Explanation:
- The operator **flips** the bits:
  - `1` becomes `0`
  - `0` becomes `1`

Example:
- For example, let's consider the number `5`, which in binary is `101`.
  - Applying `~5` (Bitwise NOT of 5) will flip each bit:
    - `1` becomes `0`
    - `0` becomes `1`
    - `1` becomes `0`

  - The binary representation of `5` is `101`, and after applying the Bitwise
NOT (`~`), it becomes `010`.

Key Points:
1. **Bitwise NOT** flips all the bits.
2. The result is often expressed in **two's complement** notation for signed
numbers, which can make the result negative.
3. It affects every bit in the number, converting all `1`s to `0`s and vice
versa.

Summary:
- The Bitwise NOT operator (`~`) inverts every bit of a number:
  - `1 -> 0`
  - `0 -> 1`
*/

void topicFour(void) {
  // Bitwise NOT Operator (~) - Explanation and Usage

  // The bitwise NOT operator (~) flips all bits of a given number.
  // In C++, integers are stored in 32-bit format by default (signed integers).
  // This means the number is represented using 32 bits (1 bit for sign and 31
  // bits for value).

  // Let's break down how ~5 works step by step:

  // Step 1: Binary representation of 5 (32-bit format)
  // 5 in binary (32-bit signed integer):
  // 0000 0000 0000 0000 0000 0000 0000 0101
  // Here:
  // - The first bit (MSB - Most Significant Bit) is 0, indicating a positive
  // number.
  // - The remaining 31 bits represent the value 5.

  // Step 2: Applying the Bitwise NOT (~) operator
  // The ~ operator flips every bit:
  // ~0000 0000 0000 0000 0000 0000 0000 0101
  //  = 1111 1111 1111 1111 1111 1111 1111 1010

  // Step 3: Interpreting the Result as a Signed Integer
  // In C++, signed integers use "Two's Complement" representation to store
  // negative numbers. In two's complement:
  // - If the MSB (most significant bit) is 1, the number is negative.
  // - To find the negative value, invert all bits and add 1.

  // Step 4: Calculating the Two's Complement of the Result
  // Inverted bits: 1111 1111 1111 1111 1111 1111 1111 1010  (Step 2 result)
  // Flip all bits: 0000 0000 0000 0000 0000 0000 0000 0101  (Inverted)
  // Add 1:        + 0000 0000 0000 0000 0000 0000 0000 0001
  //               ----------------------------------------
  //                0000 0000 0000 0000 0000 0000 0000 0110  (Decimal 6)

  // Step 5: Applying the Negative Sign
  // Since the original number had an MSB of 1 (indicating negativity), the
  // result is -6. Therefore, ~5 results in -6.

  // Key Takeaways:
  // 1. The ~ operator flips every bit, including the sign bit.
  // 2. In C++, signed integers use two's complement representation.
  // 3. The result of ~5 is -6 because the flipped binary becomes -6 when
  // interpreted as a signed integer.
  // 4. ~x = -(x + 1), which is a shortcut formula to understand the result.

  // Example to demonstrate Bitwise NOT
  long long b;
  cout << "Enter a number: ";
  cin >> b;
  long long c = ~b;
  cout << "Bitwise NOT of " << b << " is " << c << endl;

  // Additional Information:
  // - C++ uses 32 bits for signed integers.
  // - Bitwise NOT (~) flips all bits, including the sign bit.
  // - Signed integer capacity: -2^31 to (2^31 - 1).
  // - NOT (~) is not commonly used in competitive programming but can be useful
  // in specific cases.
  // - Just having knowledge about its behavior is sufficient for most cases.
}

/*
Topic 5: Bitwise Shift Operator

Bitwise shift operators are used to shift the bits of a number to the left or right.
There are two types of shift operators in C++:
1. Left Shift Operator (<<)
2. Right Shift Operator (>>)

1. Left Shift Operator (<<):
   - The left shift operator shifts bits to the left by a specified number of positions.
   - Each left shift operation (x << n) is equivalent to multiplying the number x by 2^n.
   - For example:
     5 << 1  -> 5 * 2^1  = 10
     5 << 2  -> 5 * 2^2  = 20
     5 << 3  -> 5 * 2^3  = 40

2. Right Shift Operator (>>):
   - The right shift operator shifts bits to the right by a specified number of positions.
   - Each right shift operation (x >> n) is equivalent to dividing the number x by 2^n.
   - For example:
     20 >> 1 -> 20 / 2^1 = 10
     20 >> 2 -> 20 / 2^2 = 5
     20 >> 3 -> 20 / 2^3 = 2

Explanation of the Given Example:
255 * 10 = 2250
2250 * 10 = 22500
22500 * 10 = 225000
225

These numbers do not directly relate to bitwise shift operations. However, we can understand the multiplication pattern:
- Multiplication by 10 can be achieved using bitwise operations by combining shifts and additions.
- Example:
  10 * x = (8 * x) + (2 * x) = (x << 3) + (x << 1)
  (x << 3) means shifting bits to the left by 3 (equivalent to multiplying by 8).
  (x << 1) means shifting bits to the left by 1 (equivalent to multiplying by 2).

For instance:
  255 * 10 = (255 << 3) + (255 << 1)
           = (255 * 8) + (255 * 2)
           = 2040 + 510
           = 2550 (close to 2250, possibly a typo)

Takeaway:
- Left shift (<<) can be used for fast multiplication by powers of 2.
- Right shift (>>) can be used for fast division by powers of 2.
- Bitwise shift operations are faster than multiplication and division.
*/

void topicFive(void) {
    // The bitwise shift operators are used to shift the bits of a number to the left or right.
    // There are two types of shift operators in C++:
    // 1. Left Shift Operator (<<)
    // 2. Right Shift Operator (>>)

    // 1. Left Shift Operator (<<):
    //    - Shifts the bits of the number to the left by the specified number of positions.
    //    - Each left shift (x << n) is equivalent to multiplying x by 2^n.
    //    - It is faster than multiplication as it directly manipulates the bits.
    //    - For example:
    //        x << 1  -> x * 2
    //        x << 2  -> x * 4 (2 * 2)
    //        x << 3  -> x * 8 (2 * 2 * 2)

    int a;
    cout << "Enter a number for left shift: ";
    cin >> a;

    // Example 1: Simple left shift (multiplication by 2)
    int b = a << 1; // Equivalent to a * 2
    cout << "Left Shift by 1 (a << 1): " << b << " (Equivalent to " << a << " * 2)" << endl;

    // Example 2: Left shift by 2 (multiplication by 4)
    b = a << 2; // Equivalent to a * 4
    cout << "Left Shift by 2 (a << 2): " << b << " (Equivalent to " << a << " * 4)" << endl;

    // Example 3: Left shift by 6 (multiplication by 64)
    b = a << 6; // Equivalent to a * 64
    cout << "Left Shift by 6 (a << 6): " << b << " (Equivalent to " << a << " * 64)" << endl;

    // 2. Right Shift Operator (>>):
    //    - Shifts the bits of the number to the right by the specified number of positions.
    //    - Each right shift (x >> n) is equivalent to dividing x by 2^n.
    //    - It is faster than division as it directly manipulates the bits.
    //    - For example:
    //        x >> 1  -> x / 2
    //        x >> 2  -> x / 4 (2 * 2)
    //        x >> 3  -> x / 8 (2 * 2 * 2)

    int x = 24;

    // Example 4: Simple right shift (division by 2)
    int y = x >> 1; // Equivalent to 24 / 2
    cout << "Right Shift by 1 (x >> 1): " << y << " (Equivalent to 24 / 2)" << endl;

    // Example 5: Right shift by 2 (division by 4)
    y = x >> 2; // Equivalent to 24 / 4
    cout << "Right Shift by 2 (x >> 2): " << y << " (Equivalent to 24 / 4)" << endl;

    // Example 6: Right shift by 3 (division by 8)
    y = x >> 3; // Equivalent to 24 / 8
    cout << "Right Shift by 3 (x >> 3): " << y << " (Equivalent to 24 / 8)" << endl;

    // Key Takeaways:
    // ----------- This Shift Only works with 2 means only binary -------------
    // 1. The left shift operator (<<) multiplies a number by 2^n.
    // 2. The right shift operator (>>) divides a number by 2^n.
    // 3. Shift operators are faster than arithmetic operations like multiplication and division.
    // 4. They are useful in scenarios where high performance is required, such as bit manipulation tasks.
    // 5. Be cautious when using shift operators with negative numbers, as behavior may vary.

    // ----------- Shift operators only work with powers of 2 (binary) -------------
    // This means that left shift (<<) and right shift (>>) operations
    // are equivalent to multiplying or dividing the number by powers of 2.
    // For example:
    //   - a << 1  -> a * 2 (2^1)
    //   - a << 3  -> a * 8 (2^3)
    //   - a >> 2  -> a / 4 (2^2)
    // Therefore, shift operations are only effective when dealing with binary (powers of 2).
}

int main() {
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);
  //  topicOne();
  //  topicTwo();
  //  topicThree();
  //  bitwiseThreeInput();

  /*
  Quick Quiz: Calculate the result of the following expression using pen and
  paper:
  (((3 & 5) | 4) ^ 7) = ?
  */
  // Solution : https://smalldev.tools/share-bin/4LBZlMEp
  //  cout << "Value is : " << (((3 & 5) | 4) ^ 7) << endl;
  topicFive();
  return 0;
}
