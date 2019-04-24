#include <iostream>
using namespace std;

int get_change(int money) {
int remaining = money%10;
int count = money/10 + remaining/5 + remaining%5;

return count;
}

int main() {
  int money;
  cin >> money;
  cout << get_change(money) << '\n';
}
