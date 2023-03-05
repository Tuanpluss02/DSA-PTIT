#include <iostream>
#include <cmath>

using namespace std;

double log10_factorial(int n)
{
  return 0.5 * log10(2 * M_PI * n) + n * log10(n / M_E);
}

bool has_same_digits(int x, int n)
{
  return floor(log10_factorial(x)) == n;
}

void find_x(int n)
{
  int lo = 0, hi = n;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (has_same_digits(mid, n))
    {
      cout << mid << " ";
      lo = mid + 1;
    }
    else if (floor(log10_factorial(mid)) < n)
    {
      lo = mid + 1;
    }
    else
    {
      hi = mid - 1;
    }
  }
  cout << endl;
}

int main()
{
  int n = 45;
  find_x(n);
  return 0;
}
