#include <iostream>
#include <random>
#include <chrono>
#include <cmath>

// Function to check if a number is prime
bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

// Function to generate a random 16-digit prime number
long long generate_16_digit_prime() {
    std::random_device rd;
    std::mt19937_64 rng(rd());
    std::uniform_int_distribution<long long> dist(1000000000000000, 9999999999999999);

    long long candidate;
    do {
        candidate = dist(rng);
    } while (!is_prime(candidate));

    return candidate;
}

int main() {
    // Generate and print a 16-digit prime number
    long long prime = generate_16_digit_prime();
    std::cout << "16-digit prime number: " << prime << std::endl;

    return 0;
}
