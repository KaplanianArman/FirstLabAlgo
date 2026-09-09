#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<int> mas(n);
    for (int i = 0; i < n; ++i) std::cin >> mas[i];
    std::cout << mas[n - 1] << ' ';
    for (int i = 0; i < n - 1; ++i) std::cout << mas[i] << ' ';
    std::cout << std::endl;
    return 0;
}