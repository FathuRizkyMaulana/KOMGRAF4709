#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;

    std::cout << "Masukkan koordinat titik pertama (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Masukkan koordinat titik kedua (x2 y2): ";
    std::cin >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = std::max(std::abs(dx), std::abs(dy));

    float xIncrement = static_cast<float>(dx) / steps;
    float yIncrement = static_cast<float>(dy) / steps;

    float x = x1;
    float y = y1;

    std::cout << "Koordinat Piksel di Garis:\n";
    for (int i = 0; i <= steps; i++) {
        std::cout << "(" << round(x) << ", " << round(y) << ")\n";
        x += xIncrement;
        y += yIncrement;
    }

    return 0;
}
