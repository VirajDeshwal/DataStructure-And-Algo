#include <iostream>
using namespace std;
long long gcd_euclid(long long a, long long b)
{
  //Exit condition 
  if(a==0)
  {
    return b;
  }
  return gcd_euclid(b%a, a);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << gcd_euclid(a, b) << std::endl;
  return 0;
}
