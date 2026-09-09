#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<int> mas(n);
    for (int i = 0; i < n; ++i) std::cin >> mas[i];
    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (mas[i] > mas[i - 1] && mas[i] > mas[i + 1]) ans++;
    }
    std::cout << ans << std::endl;
    return 0;
}