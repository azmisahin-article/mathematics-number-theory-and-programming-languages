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
