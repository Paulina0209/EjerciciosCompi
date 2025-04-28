#include "Ejercicio1.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
std::vector<std::vector<std::string>>agruparAnagrama(std::vector<std::string>& palabras) {
    std::unordered_map<std::string,std::vector<std::string>> grupos;
    for (const std::string& palabra:palabras) {
        std::string ordenada=palabra;
        std::sort(ordenada.begin(), ordenada.end());
        grupos[ordenada].push_back(palabra);
    }
    std::vector<std::vector<std::string>> gruposFinal;
    for (const auto& par:grupos) {
        gruposFinal.push_back(par.second);
    }
    return gruposFinal;
}