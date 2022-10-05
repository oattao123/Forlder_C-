#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

void long_operation()
{
   using namespace std::chrono_literals;
   std::this_thread::sleep_for(150ms);
}

bool check_prime(int);

int main() {
  using std::chrono::high_resolution_clock;
  using std::chrono::duration_cast;
  using std::chrono::duration;
  using std::chrono::milliseconds;

  auto t1 = high_resolution_clock::now();
  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if (check_prime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";
  auto t2 = high_resolution_clock::now();
  duration<double, std::milli> ms_double = t2 - t1;
  std::cout << endl;
  std::cout << ms_double.count() << "ms\n";
  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;
  if(n <= 3) {
    return n > 1;
  }
  for (int i = 2; i <n ; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}