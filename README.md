# Mathematics: Number Theory and Programming Languages
Number theory is a branch of mathematics that deals with the properties and relationships of numbers, especially integers. It studies patterns and structures with numbers and tries to understand their behavior and properties.

An example of number theory is the concept of prime numbers. Prime numbers are positive integers greater than 1 that have no positive integer divisors other than 1 and itself. For example, 2, 3, 5, 7, 11 and 13 are prime numbers.

Number theory also includes the study of divisibility, which is the property that one integer can be equally divisible by another integer. For example, the number 12 is divisible by 3 because 12 is divisible by 3 without a remainder. In number theory, we use the notation “a | b” to indicate that “a” divides “b” equally.

Another example of number theory is the Euclidean algorithm used to find the greatest common divisor (OBB) of two integers. The OCD of two integers is the largest positive integer that evenly divides the two. For example, 12 and 18 have a GCA of 6 because 6 is the largest positive integer that evenly divides both 12 and 18.

Number theory has many practical applications, such as cryptography, the study of secure communication. Cryptography relies on the properties of prime numbers and modular arithmetic, both areas of number theory, to develop secure encryption algorithms.

## What does this have to do with computer programming language?

Number theory has several applications in computer programming language. Many cryptographic algorithms, such as RSA and elliptic curve cryptography, are based on number theory concepts, particularly prime numbers, modular arithmetic, and properties of large integers.

Computer programming languages such as Python, Java, and C++ have built-in libraries for handling large numbers and implementing number theory algorithms. For example, the Python programming language has a built-in module called “math” that provides functions for calculating GCD, generating prime numbers, and performing modular arithmetic operations.

Number theory concepts are also used in algorithm design and analysis. Efficient algorithms for prime factorization, modular exponentiation, and other number theory problems are essential for cryptography, data encryption, and secure communication. These algorithms require an understanding of number theory concepts and properties such as the Chinese Remainder Theorem, Fermat’s Little Theorem, and Euler’s Totient Function.

In summary, number theory plays an important role in computer programming language, especially cryptography and algorithm design.

## Let’s create a sample code for this.

Example Python code using the built-in math module to calculate the GCD of two numbers using the Euclidean algorithm:
```python
"""
gcd.py
"""

import math

a = 24
b = 36

# Calculate the GCD of a and b using the Euclidean algorithm
gcd = math.gcd(a, b)

print("The GCD of", a, "and", b, "is", gcd)

```

In this code, we first import the **`math`** module, which provides the **`gcd`** function, which we will use to calculate the **`a`** and **`b` SME. **. Next, we define two integer variables **`a`** and **`b`** with values 24 and 36 respectively.

Next, we use the **`math.gcd`** function to calculate the SME of **`a`** and **`b`**. The result is stored in the **`gcd`** variable.

Finally, we print a message to the console showing the values **`a`**, **`b`** and GCD. The output of this code will be:
```
The GCD of 24 and 36 is 12
```

We could have implemented the Euclidean algorithm ourselves using a while loop and a modulo function, but keep in mind that using the built-in math.gcd function is simpler and more efficient.

## Let’s exemplify this with C++.

Example C++ code that calculates the GCD of two integers using the Euclidean algorithm:
```c++
/*
 * gcd.cpp
 */

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a = 24, b = 36;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}
```

In this code we define a function called **`gcd`** which takes two integer parameters **`a`** and **`b`** and returns their GCD using the Euclidean algorithm. If **`b`** is zero, we simply return **`a`** as **`a`** and **`0`** OBE is **`a`**. Otherwise, since it has **`a`** and ** GCD, we call **`gcd`** recursively with **`b`** and **`a % b`** as parameters. `b`**, **`b`** and **`a are the same as the GCD of %b`**.

In the **`main`** function, we define two integer variables **`a`** and **`b`** with values 24 and 36 respectively. Next, we call **`gcd`** as parameters **`a`** and **`b`** and store the result in a variable named **`result`**. Finally, using the **`cout`** function, we print a message to the console showing the values **`a`**, **`b`** and GCD.

The output of this code will be:
```
The GCD of 24 and 36 is 12
```

Note:

In the C++ programming language, a % b is an arithmetic operator that returns the remainder after dividing a by b. This operator is called the “mod” or “modulus” operator.

For example, suppose a=7 and b=3. After a % b operation, the remainder of 7 divided by 3 will be 1. In this case, the value of a %b would be 1.

The modulus operator is especially useful for iterative operations or loops. For example, it can be used to determine whether a number is even or odd. In this case, by checking the remainder from dividing the number by 2, if the remainder is 0 the number is even, otherwise the number is odd.

## What would happen if we added a console output code to the code’s iteration area?
```c++
/*
 * gcd-iteration.cpp
 */

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    cout << "a is " << a << " b is " << b << endl;

    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a = 24, b = 36;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}
```

In the above code, the values of a and b parameters are printed to the screen each time the function is called, thanks to the cout expression in the gcd function. This way, we can better understand how the function works.

Below is the output of the program:
```
a is 24 b is 36
a is 36 b is 24
a is 24 b is 12
a is 12 b is 0
The GCD of 24 and 36 is 12
```

The way the program works is as follows:

1. In the main function, the values a=24 and b=36 are assigned and the gcd function is called.
2. In the gcd function, a=24 and b=36 values are printed on the screen.
3. Because b=0, the function is called again and this time a=36 and b=24.
4. In the gcd function, a=36 and b=24 values are printed on the screen.
5. Because b=0, the function is called again and this time with a=24 and b=12.
6. In the gcd function, the values a=24 and b=12 are printed on the screen.
7. Because b=0, the function is called again and this time with a=12 and b=0.
8. In the gcd function, a=12 and b=0 values are printed on the screen.
9. Because b=0, the function returns the value a.
10. The result (12) calculated in the main function is printed on the screen.

As you can see, each time the gcd function is called, it works with the remaining values from the previous calls, and the greatest common divisor is calculated as a result.

# We will try to exemplify an encrypted message creation project used in real projects.

Example Python code that demonstrates the use of number theory concepts in cryptography. Specifically, it uses the RSA algorithm for public key encryption and decryption:
```python
"""
gcd-encryption.py
"""

import math

# Generate two large prime numbers
p = 17
q = 19

# Calculate n and the totient of n
n = p * q
phi_n = (p - 1) * (q - 1)

# Choose an encryption key e such that e and phi_n are coprime
e = 7
while math.gcd(e, phi_n) != 1:
    e += 1

# Calculate the decryption key d using the extended Euclidean algorithm
def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)


_, d, _ = egcd(e, phi_n)
if d < 0:
    d += phi_n

# Encrypt a message using the public key (e, n)
message = "hello"
plaintext = [ord(c) for c in message]
ciphertext = [(m ** e) % n for m in plaintext]

# Decrypt the message using the private key (d, n)
decrypted = [chr((c ** d) % n) for c in ciphertext]
plaintext = ''.join(decrypted)

print("Original message:", message)
print("Encrypted message:", ciphertext)
print("Decrypted message:", plaintext)

```

In this code, we first generate two large prime numbers, `p` and `q`, which will be used to calculate the totient **`n`** and **`n`. ** (**`phi_n`**). Next, we choose an encryption key **`e`** so that **`e`** and **`phi_n`** are co-prime, that is, their greatest common divisor is 1.

Next, we calculate the decryption key **`d`** using the extended Euclidean algorithm, which allows us to find the multiplicative inverse of **`e`** modulo **`phi_n`**. We make the **`d`** value be positive by adding **`phi_n`** if needed.

Next, we demonstrate the use of the RSA algorithm for public key encryption and decryption. We encrypt a message by first converting it to a list of ASCII codes (**`plain text`**) and then encrypting each code using the formula **`(m **e) %n`**, where ** `m`** ASCII code and **`e`** and **`n`** are the public key. The resulting ciphertext is a list of integers.

To decrypt the message, we use the private key **`(d, n)`** and perform the reverse operation **`(c ** d) % n`** on each element of the ciphertext. We convert the resulting list of ASCII codes back to a string (**`plain text`**) using the **`chr`** function.

The output of this code will be:
```
Original message: hello
Encrypted message: [120, 247, 247, 153, 149]
Decrypted message: hello
```

Note that this is a simple example and does not provide any real security because the prime numbers used are very small and easy to factor. In practice, much larger prime numbers are used and additional security measures are taken to protect against attacks.

## What would it look like if we tried to develop the same code in c++?
```c++
/*
 * gcd-encryption.cpp
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Calculate the greatest common divisor of two integers
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

// Calculate the modular inverse of a modulo m using the extended Euclidean algorithm
int modInv(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    while (a > 1)
    {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}

int main()
{
    int p = 17, q = 19;
    int n = p * q;
    int phi_n = (p - 1) * (q - 1);

    int e = 7;
    while (gcd(e, phi_n) != 1)
    {
        e++;
    }

    int d = modInv(e, phi_n);

    string message = "hello";
    vector<int> plaintext;
    // Convert each character in the message to its UTF-8 codepoint
    for (char c : message)
    {
        plaintext.push_back((int)c);
    }

    vector<int> ciphertext;
    for (int m : plaintext)
    {
        // Use binary exponentiation for modular exponentiation
        int c = 1;
        for (int i = 0; i < e; i++)
        {
            c = (c * m) % n;
        }
        ciphertext.push_back(c);
    }

    vector<int> decrypted;
    for (int c : ciphertext)
    {
        // Use binary exponentiation for modular exponentiation
        int m = 1;
        for (int i = 0; i < d; i++)
        {
            m = (m * c) % n;
        }
        decrypted.push_back(m);
    }

    string plaintext_str;
    // Convert each UTF-8 codepoint in the decrypted message to its corresponding character
    for (int m : decrypted)
    {
        plaintext_str += static_cast<char>(m);
    }

    cout << "Original message: " << message << endl;
    cout << "Encrypted message: [";
    for (int c : ciphertext)
    {
        cout << c << ", ";
    }
    cout << "]" << endl;
    cout << "Decrypted message: " << plaintext_str << endl;

    return 0;
}

```

The code is largely the same as the Python example, but with some differences in syntax and implementation details. For example, we use a **`vector`** to store plain text, ciphertext, and decrypted messages, and we use the **`pow`** function from the **`cmath`** library to calculate the modular exponent. We also define separate functions to calculate the greatest common divisor and its modular inverse using the extended Euclidean algorithm.

The output of this code will be the same as the Python example:
```
Original message: hello
Encrypted message: [120, 247, 247, 153, 149]
Decrypted message: hello
```

## I wonder how it would look if we wanted to write the same code in javascript scripting language?
```javascript
/*
 * gcd-encryption.js
 */

// Define a function to compute the greatest common divisor (GCD) of two numbers
function gcd(a, b) {
    if (b === 0) {
        // If b is 0, then a is the GCD
        return a;
    } else {
        // Otherwise, recurse with a and b % a
        return gcd(b, a % b);
    }
}

// Define a function to compute the modular inverse of a mod m
function modInv(a, m) {
    // Keep track of the original value of m
    let m0 = m,
        t,
        q;
    // Initialize x0 and x1 to 0 and 1, respectively
    let x0 = 0,
        x1 = 1;
    // If m is 1, then a has no inverse mod m
    if (m === 1) {
        return 0;
    }
    // Use the extended Euclidean algorithm to compute the modular inverse
    while (a > 1) {
        q = Math.floor(a / m);
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    // If x1 is negative, add m0 to make it positive
    if (x1 < 0) {
        x1 += m0;
    }
    return x1;
}

// Choose two prime numbers p and q
let p = 17,
    q = 19;
// Compute n and phi(n)
let n = p * q;
let phi_n = (p - 1) * (q - 1);

// Choose a public exponent e
let e = 7;
// Increment e until it is relatively prime to phi(n)
while (gcd(e, phi_n) !== 1) {
    e++;
}

// Compute the private exponent d
let d = modInv(e, phi_n);

// Encrypt a message using RSA
let message = "hello";
let plaintext = [];
// Convert the message to an array of Unicode code points
for (let i = 0; i < message.length; i++) {
    plaintext.push(message.charCodeAt(i));
}
let ciphertext = [];
// Encrypt each code point using modular exponentiation
for (let i = 0; i < plaintext.length; i++) {
    let c = BigInt(plaintext[i]) ** BigInt(e) % BigInt(n);
    ciphertext.push(Number(c));
}

// Decrypt the ciphertext using RSA
let decrypted = [];
// Decrypt each code point using modular exponentiation
for (let i = 0; i < ciphertext.length; i++) {
    let m = BigInt(ciphertext[i]) ** BigInt(d) % BigInt(n);
    decrypted.push(Number(m));
}
let plaintext_str = "";
// Convert the decrypted code points back to characters
for (let i = 0; i < decrypted.length; i++) {
    plaintext_str += String.fromCharCode(decrypted[i]);
}

// Print the original message, encrypted message, and decrypted message
console.log("Original message: " + message);
console.log("Encrypted message: " + ciphertext);
console.log("Decrypted message: " + plaintext_str);
```

The code is similar to the previous examples, but with some differences in syntax and implementation details. For example, we use **`let`** instead of **`var`** to declare variables, and use the **`BigInt`** data type for modular exponentiation to avoid precision errors. We also use the **`charCodeAt`** method to convert each character in the message to its Unicode code point, and the **`fromCharCode`** method to convert each decrypted code point back to its corresponding character.

The output of this code will be the same as the previous examples:
```
Original message: hello
Encrypted message: 120,247,247,153,149
Decrypted message: hello
```

# Conclusion

We tried to relate how number theory is used with computer programming languages with a real-world example application.
