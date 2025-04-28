
#include "Ejercicio7.h"
#include <unordered_map>
#include <unordered_set>

vector<string> noLetraRepetida(vector<string>& palabras) {
    vector<string> r;

    for (auto& palabra : palabras) {
        unordered_set<char> letrasPalabra;
        bool esUnica = true;
        for (char letra : palabra) {
            if (letrasPalabra.count(letra)) {
                esUnica = false;
                break;
            }
            letrasPalabra.insert(letra);
        }
        if (esUnica) {
            r.push_back(palabra);
        }
    }
    return r;
}
