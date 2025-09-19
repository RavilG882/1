#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
int main() {
  int n;
  double l = 0;
  double r = 0;
  long double a = 1;
  std::cin >> n;
  std::vector<long double> arr(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  std::vector<long double> arr1(n);
  arr1[0] = std::log(arr[0]);
  for (int i = 1; i < n; ++i) {
    arr1[i] = arr1[i - 1] + std::log(arr[i]);
  }
  int q;
  long double b;
  const int cG = 7;
  std::cin >> q;
  for (int i = 0; i < q; ++i) {
    std::cin >> l >> r;
    b = ((arr1[r] - arr1[l] + std::log(arr[l])) / (r - l + 1));
    a = std::pow(M_E, b);
    std::cout << std::setprecision(cG) << a << "\n";
  }
  return 0;
}
