#include "Ejercicio5.h"

#include <sstream>
#include <string>
#include <vector>
std::vector<std::string>dividirPalabra(const std::string frase) {
    std::vector<std::string> palabras;
    std::istringstream stream(frase);
    std::string palabra;
    while (stream >> palabra) {
        palabras.push_back(palabra);
    }
    return palabras;
}
std::string rotarPalabras(const std::string & frase, int k) {
    std::vector<std::string> palabras = dividirPalabra(frase);
    int n = palabras.size();
    if (n == 0) return frase;
    k = k % n;
    if (k == 0) return frase;

    std::vector<std::string> rotado;

    rotado.insert(rotado.end(), palabras.end() - k, palabras.end());
    rotado.insert(rotado.end(), palabras.begin(), palabras.end() - k);

    std::ostringstream resultado;
    for (size_t i = 0; i < rotado.size(); ++i) {
        resultado << rotado[i];
        if (i != rotado.size() - 1) {
            resultado << " ";
        }
    }

    return resultado.str();
}