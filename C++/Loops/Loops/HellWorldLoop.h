#include <iostream>
#include <string>

int main() {
    const std::string target = "Hello World";
    std::string output = "";

    // Bu döngü, tüm alfabe üzerinde döner
    for (char first = 'A'; first <= 'Z'; ++first) {
        for (char second = 'A'; second <= 'Z'; ++second) {
            output = "";

            // Hedef metni oluşturan bir döngü
            for (size_t i = 0; i < target.length(); ++i) {
                // İlk iki harfi belirleriz
                if (i == 0) {
                    output += first;
                }
                else if (i == 1) {
                    output += second;
                }
                else {
                    output += target[i];
                }
                std::cout << output << std::endl;
            }
        }
    }

    return 0;
}
