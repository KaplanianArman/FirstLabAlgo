#include <iostream>

const int32_t INF = 2'000'000'001;

int main() {
    int n; std::cin >> n;
    int32_t mn1 = INF, mn2 = INF;
    for (int i = 0; i < n; ++i) {
        int cur; std::cin >> cur;
        if (cur < mn1) {
            int32_t buf = mn1;
            mn1 = cur;
            mn2 = buf;
        }
        else if (cur < mn2) mn2 = cur;
    }
    std::cout << mn1 << ' ' << mn2 << '\n';
    return 0;
}