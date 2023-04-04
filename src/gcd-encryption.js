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