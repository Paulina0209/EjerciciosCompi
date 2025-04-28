#include <iostream>
#include <vector>
#include "Ejercicio4.h"
#include "Ejercicio6.h"
#include "Ejercicio8.h"
#include "Ejercicio1.h"
#include "Ejercicio5.h"
#include <unordered_map>
#include "Ejercicio2.h"
#include "Ejercicio3.h"
#include "Ejercicio7.h"
int main() {

    //Ejercicio 1
    std::vector<std::string> entrada1 = {"eat", "tea", "tan", "ate", "nat", "bat"};

    std::vector<std::vector<std::string>> resultado = agruparAnagrama(entrada1);
    for (const auto& grupo : resultado) {
        std::cout << "[ ";
        for (const auto& palabra : grupo) {
            std::cout << palabra << " ";
        }
        std::cout << "]" << std::endl;
    }

    // Ejercicio 2
    std::string texto = "barfoothefoobarman";
    std::vector<std::string> palabras = {"foo", "bar"};
    std::vector<int> indices = buscarConcatenaciones(texto, palabras);
 
    std::cout << "Ejercicio 2 - Índices encontrados: ";
    for (int indice : indices) {
     std::cout << indice << " ";
    }  
    std::cout << std::endl;

       // Ejercicio 3
       vector<int> numeros = {0, 1, 2, 4, 5, 7};
       vector<string> resumen = resumirVecNum(numeros);
   
       cout << "Ejercicio 3 - orden del vector resumido: ";
       for (string rango : resumen) {
           cout << rango << " ";
       }
       cout << endl;

    // Ejercicio 4: Eliminar Duplicados
    std::vector<std::string> input = {"apple", "banana", "apple", "orange", "banana"};
    std::vector<std::string> output = eliminarDuplicados(input);

    std::cout << "Resultado del Ejercicio 4 (Eliminar Duplicados):\n";
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    std::cout << "\n";

       //Ejercicio 5
       std::string entrada5 = "uno dos tres cuatro";
       int k = 1;
       std::string salida = rotarPalabras(entrada5,k);
       std::cout << "Resultado: " << salida << std::endl;
      

    // Ejercicio 6: Intercalar Listas
    std::vector<int> list1 = {1, 2, 3};
    std::vector<std::string> list2 = {"a", "b"};
    std::vector<std::string> resultadoIntercalado = intercalarListas(list1, list2);

    std::cout << "Resultado del Ejercicio 6 (Intercalar Listas):\n";
    for (const auto& element : resultadoIntercalado) {
        std::cout << element << " ";
    }
    std::cout << "\n";


      // Ejercicio 7
      vector<string> palabrasEntrada = {"hola", "casa", "perro", "luz"};
      vector<string> palabrasUnicas = noLetraRepetida(palabrasEntrada);
  
      cout << "Ejercicio 7 - Palabras que no repiten letras: ";
      for (string palabra : palabrasUnicas) {
          cout << palabra << " ";
      }
      cout << endl;

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