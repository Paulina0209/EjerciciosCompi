#include "Ejercicio2.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm> 

vector<int> buscarConcatenaciones(string texto, vector<string>& palabras) {
    vector<int> resultFin;
    if (palabras.empty() || texto.empty()) return resultFin;

    vector<string> palabrasCopia = palabras;
    unordered_set<string> concatenacionesPosibles;

  
    sort(palabrasCopia.begin(), palabrasCopia.end());
    do {
        string concatenacion = "";
        for (const string& palabra : palabrasCopia) {
            concatenacion += palabra;
        }
        concatenacionesPosibles.insert(concatenacion);
    } while (next_permutation(palabrasCopia.begin(), palabrasCopia.end()));

    
    for (const string& concatenacion : concatenacionesPosibles) {
        size_t pos = texto.find(concatenacion);
        while (pos != string::npos) {
            resultFin.push_back(pos);
            pos = texto.find(concatenacion, pos + 1); 
        }
    }

    sort(resultFin.begin(), resultFin.end()); 
    return resultFin;
}