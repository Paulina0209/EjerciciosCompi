#include "Ejercicio8.h"
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <cctype>

// Función para limpiar el texto, eliminando signos de puntuación y convirtiendo a minúsculas
std::string limpiarPalabra(const std::string& palabra) {
    std::string cleaned;
    for (char c : palabra) {
        if (std::isalpha(c)) {  // Solo conservar letras
            cleaned.push_back(std::tolower(c));  // Convertir a minúsculas
        }
    }
    return cleaned;
}

// Función para contar la frecuencia de palabras en el texto
std::vector<std::pair<std::string, int>> contarFrecuencia(const std::string& texto) {
    std::unordered_map<std::string, int> frecuencia;
    std::stringstream ss(texto);
    std::string palabra;

    // Contar las frecuencias de las palabras
    while (ss >> palabra) {
        palabra = limpiarPalabra(palabra);
        if (!palabra.empty()) {
            frecuencia[palabra]++;
        }
    }

    // Convertir el mapa a un vector de pares para ordenar
    std::vector<std::pair<std::string, int>> resultado(frecuencia.begin(), frecuencia.end());

    // Ordenar por frecuencia descendente
    std::sort(resultado.begin(), resultado.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;  // Ordenar por la frecuencia
    });

    return resultado;
}