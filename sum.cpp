#include <iostream>

int main() {
    long long a, b;
    std::cout << "Nhap hai so nguyen: ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Dau vao khong hop le\n";
        return 1;
    }
    std::cout << "Tong: " << a + b << '\n';
    return 0;
}
