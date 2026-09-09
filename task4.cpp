#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<int> mas(n);
    for (int i = 0; i < n; ++i) std::cin >> mas[i];
    int x; std::cin >> x;
    int mn = 2001, ans = 0;
    for (int i = 0; i < n; ++i) {
        int cur = abs(mas[i] - x);
        if (cur < mn) {
            mn = cur;
            ans = mas[i];
        }
    }
    std::cout << ans << std::endl;
    return 0;
}