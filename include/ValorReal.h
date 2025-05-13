#ifndef VALOR_REAL_H
#define VALOR_REAL_H

#include <string>
#include <vector>
#include <utility> // Para std::pair
#include "Variable.h" // Incluye la definición de Variable

/**
 * @class ValorReal
 * @brief Representa un valor concreto de una variable lingüística con sus grados de pertenencia
 * 
 * Esta clase almacena un valor numérico real y calcula sus grados de pertenencia
 * a todos los conjuntos difusos de la variable lingüística correspondiente.
 */
class ValorReal {
private:
    std::string nombreVariableCorrespondiente; ///< Nombre de la variable lingüística asociada
    double valorNumerico; ///< Valor numérico concreto
    std::vector<std::pair<std::string, double>> valoresPertenecientes; ///< Vector de pares (nombre_conjunto, grado_pertenencia)

public:
    
    ValorReal(const std::string& nombreVariableCorrespondiente, 
             double valorNumerico, 
             std::vector<Variable>& variables);

    /**
     *Obtiene el valor numérico almacenado
     * retorna El valor numérico concreto
     */
    double getValorNumerico() const;

    //Obtiene el nombre de la variable lingüística asociada
     
    std::string getVariablePerteneciente() const;

  
    void imprimir() const;
};

#endif // VALOR_REAL_H
