#include <iostream>
#include <vector>
#include "Ejercicio4.h"
#include "Ejercicio6.h"
#include "Ejercicio8.h"

int main() {
    // Ejercicio 4: Eliminar Duplicados
    std::vector<std::string> input = {"apple", "banana", "apple", "orange", "banana"};
    std::vector<std::string> output = eliminarDuplicados(input);

    std::cout << "Resultado del Ejercicio 4 (Eliminar Duplicados):\n";
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    // Ejercicio 6: Intercalar Listas
    std::vector<int> list1 = {1, 2, 3};
    std::vector<std::string> list2 = {"a", "b"};
    std::vector<std::string> resultadoIntercalado = intercalarListas(list1, list2);

    std::cout << "Resultado del Ejercicio 6 (Intercalar Listas):\n";
    for (const auto& element : resultadoIntercalado) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    // Ejercicio 8: Frecuencia de Palabras
    std::string texto = "Hola mundo. Hola clase, hola estudiantes!";
    std::vector<std::pair<std::string, int>> resultadoFrecuencia = contarFrecuencia(texto);

    std::cout << "Resultado del Ejercicio 8 (Frecuencia de Palabras):\n";
    for (const auto& par : resultadoFrecuencia) {
        std::cout << "(" << par.first << ", " << par.second << ") ";
    }
    std::cout << "\n";

    return 0;
}