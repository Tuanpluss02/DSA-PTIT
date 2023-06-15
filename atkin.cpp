// C++ program for implementation
// of Sieve of Atkin
#include <bits/stdc++.h>
using namespace std;

// Function to generate primes
// till limit using Sieve of Atkin
void SieveOfAtkin(int limit)
{
    // Initialise the sieve array
    // with initial false values
    bool sieve[limit + 1];
    for (int i = 0; i <= limit; i++)
        sieve[i] = false;

    // 2 and 3 are known to be prime
    if (limit > 2)
        sieve[2] = true;
    if (limit > 3)
        sieve[3] = true;

    /* Mark sieve[n] is true if one
       of the following is true:
    a) n = (4*x*x)+(y*y) has odd number of
       solutions, i.e., there exist
       odd number of distinct pairs (x, y)
       that satisfy the equation and
        n % 12 = 1 or n % 12 = 5.
    b) n = (3*x*x)+(y*y) has odd number of
       solutions and n % 12 = 7
    c) n = (3*x*x)-(y*y) has odd number of
       solutions, x > y and n % 12 = 11 */
    for (int x = 1; x * x <= limit; x++)
    {
        for (int y = 1; y * y <= limit; y++)
        {

            // Condition 1
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;

            // Condition 2
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;

            // Condition 3
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }

    // Mark all multiples
    // of squares as non-prime
    for (int r = 5; r * r <= limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r * r; i <= limit; i += r * r)
                sieve[i] = false;
        }
    }

    // Print primes using sieve[]
    for (int a = 1; a <= limit; a++)
        if (sieve[a])
            cout << a << " ";
    cout << "\n";
}

// Driver program
int main(void)
{
    int limit = 19;
    SieveOfAtkin(limit);
    return 0;
}