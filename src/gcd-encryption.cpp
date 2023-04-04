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
