#include <iostream>
using namespace std;

int countFibonacciWays(int N, int K)
{
  int fibonacci[100]; // mảng lưu trữ các số Fibonacci
  fibonacci[0] = 0;   // F(0) = 0
  fibonacci[1] = 1;   // F(1) = 1
  // tính tất cả các số Fibonacci nhỏ hơn hoặc bằng N
  for (int i = 2; fibonacci[i - 1] <= N; i++)
  {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }
  if (fibonacci[K - 1] > N)
  {
    return 0; // không có cách biểu diễn nào
  }
  int table[100][100]; // bảng lưu trữ số cách biểu diễn
  // khởi tạo giá trị cho bảng
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= K; j++)
    {
      table[i][j] = 0;
    }
  }
  table[0][0] = 1; // có 1 cách biểu diễn số 0 bằng 0 số Fibonacci
  // tính toán giá trị của các phần tử trong bảng
  for (int i = 0; i < K; i++)
  {
    for (int j = fibonacci[i]; j <= N; j++)
    {
      table[j][i + 1] = table[j - fibonacci[i]][i] + table[j][i];
    }
  }
  return table[N][K]; // trả về số cách biểu diễn N bằng K số Fibonacci
}

int main()
{
  int N, K;
  // cout << "Nhap N: ";
  cin >> N;
  // cout << "Nhap K: ";
  cin >> K;
  int count = countFibonacciWays(N, K);
  cout << "So cach bieu dien " << N << " bang " << K << " so Fibonacci la: " << count << endl;
  return 0;
}