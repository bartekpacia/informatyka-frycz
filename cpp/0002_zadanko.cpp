#include <iostream>

int main() {
    int k = 0;
    std::cout << "Podaj liczbę podzielną przez 6: ";
    std::cin >> k;

    for (int i = 1; i <= k; i++) {
        if (i % 6 == 0) {
            std::cout << "Znaleziono liczbę " << i << " podzielną przez 6"
                      << std::endl;
        }
    }

    getchar();
    return 0;
}