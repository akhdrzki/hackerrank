#include <iostream>

/* pair of matching socks, 
 * there are n colors of socks,
 * find how much socks to collect to get a pair of matching socks, if there are n colors.
*/

int max_drawer(int n) {
  int socks = 2;
  int count_socks, collect_socks;

  if (n > 1) {
    count_socks = socks * n;
    collect_socks = (count_socks/2) + 1;
    return collect_socks; 
  }
  return socks;
}

int main() {
  // int n = 100;
  // int count = max_drawer(n);
  //
  // std::cout << count << std::endl;
  return 0;
}
