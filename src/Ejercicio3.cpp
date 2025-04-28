#include "Ejercicio3.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm> 


vector<string> resumirVecNum(vector<int>& numeros) {
    vector<string> r;
    int n = numeros.size();
    if (n == 0) return r;

    int inicio = numeros[0];

    for (int i = 1; i <= n; i++) {
        if (i == n || numeros[i] != numeros[i - 1] + 1) {
            if (inicio == numeros[i - 1]) {
                r.push_back(to_string(inicio));
            } else {
                r.push_back(to_string(inicio) + "->" + to_string(numeros[i - 1]));
            }
            if (i < n) inicio = numeros[i];
        }
    }
    return r;
}