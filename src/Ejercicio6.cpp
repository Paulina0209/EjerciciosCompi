#include "Ejercicio6.h"
#include <algorithm>

// Implementación de la función para intercalar dos listas
std::vector<std::string> intercalarListas(const std::vector<int>& list1, const std::vector<std::string>& list2) {
    std::vector<std::string> result;
    size_t size1 = list1.size();
    size_t size2 = list2.size();
    size_t max_size = std::max(size1, size2);

    for (size_t i = 0; i < max_size; ++i) {
        if (i < size1) {
            result.push_back(std::to_string(list1[i]));
        }
        if (i < size2) {
            result.push_back(list2[i]);
        }
    }

    return result;
}