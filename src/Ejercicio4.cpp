#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include "Ejercicio4.h"

// Ejercicio 4: Eliminar Duplicados Mantenimiento el Último
std::vector<std::string> eliminarDuplicados(const std::vector<std::string>& input) {
    std::unordered_set<std::string> seen;
    std::vector<std::string> result;

    // Iteramos desde el final para mantener el último elemento
    for (std::size_t i = 0; i < input.size(); ++i) {  // Corregido el índice
        if (!seen.contains(input[i])) {
            seen.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    // Revertimos el vector ya que lo recorrimos de atrás hacia adelante
    std::ranges::reverse(result.begin(), result.end());
    return result;
}