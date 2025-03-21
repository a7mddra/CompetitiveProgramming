#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    while (true) {
        if (c == 0) {
            a--;
            if (a < 0) {
                std::cout << "Aoki" << std::endl;
                break;
            }
            b--;
            if (b < 0) {
                std::cout << "Takahashi" << std::endl;
                break;
            }
        } else {
            b--;
            if (b < 0) {
                std::cout << "Takahashi" << std::endl;
                break;
            }
            a--;
            if (a < 0) {
                std::cout << "Aoki" << std::endl;
                break;
            }
        }
    }

    return 0;
}
