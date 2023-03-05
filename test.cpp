#include <bits/stdc++.h>

using namespace std;

vector<string> genBin(int N)
{
  vector<string> valid_strings;
  for (int i = 0; i < (1 << N); i++)
  {
    // generate binary strings of length N
    string binary_str = bitset<32>(i).to_string().substr(32 - N);
    // check if binary string contains "01" as a substring exactly two times
    int count = 0;
    for (int j = 0; j < N - 1; j++)
    {
      if (binary_str.substr(j, 2) == "01")
      {
        count++;
      }
    }
    if (count == 2)
    {
      valid_strings.push_back(binary_str);
    }
  }
  return valid_strings;
}

int main()
{
  int N = 5;
  vector<string> valid_strings = genBin(N);
  for (int i = 0; i < valid_strings.size(); i++)
  {
    cout << valid_strings[i] << endl;
  }
  return 0;
}