#include "cabecera.h"

int main() {
    // Declaración e inicialización de variables de diferentes tipos de datos
    int edad = 25;                    // Variable entera para almacenar la edad
    float salario = 575.350;          // Variable flotante para almacenar el salario
    char nombre = 'J';                // Variable de tipo char para almacenar un carácter
    double distancia = 123456.789;    // Variable doble para almacenar una distancia con mayor precisión
    
    short temperatura = 20;         // Variable entera corto para almacenar la temperatura
    long poblacion = 80000000L;     // Variable entero largo para almacenar la poblacion
    unsigned int edadSinSigno = 30; // Variable entero para almacenar sin signo (numeros positivos)
    signed int saldo = -500;        // Varibale entero para almacenar con signo (numeros negativos)
    
        // Declaración variables double
    double doubleVar1 = 5.0;          
    double doubleVar2 = 3.0;          

    // Declaración variables enteras
    int par = 6;                      
    int impar = 5;
                        
    // Asignación dinámica de memoria en el heap para una variable de tipo entero
    int *variable = (int *) malloc(sizeof(int)); // Asignar memoria para un entero en el heap
    if (variable == NULL) {                  // Verificar la asignación de memoria
        fprintf(stderr, "Error al asignar memoria.\n");
        return 1;                            // Salir del programa con un código de error
    }
    *variable = 4;                          // Asignar el valor 4 a la memoria apuntada por 'variable'
    printf("Valor original: %d\n", *variable); // Imprimir el valor original de la variable
    *variable *= 10;                       // Multiplicar el valor almacenado por 10
    printf("Valor modificado: %d\n", *variable); // Imprimir el valor modificado

    free(variable);                        // Liberar

    int sumando = sumarEnteros(par, impar);    // Llamada a la función para sumar dos enteros
    int restando = restarEnteros(par, impar);  // Llamada a la función para restar dos enteros
    int multiplicando = multiEnteros(par, impar); // Llamada a la función para multiplicar dos enteros
    int dividiendo = divEnteros(par, impar);    // Llamada a la función para dividir dos enteros

    // Imprimir los resultados de las operaciones con enteros
    printf("La suma de los numeros ENTEROS es %d\n", sumando);
    printf("La resta de los numeros ENTEROS es %d\n", restando);
    printf("La multiplicacion de los numeros ENTEROS es %d\n", multiplicando);
    printf("La division de los numeros ENTEROS es %d\n", dividiendo);

    double suma = sumaNumeros(doubleVar1, doubleVar2); // Llamada a la función para sumar dos números flotantes
    double resta = restaNumeros(doubleVar1, doubleVar2); // Llamada a la función para restar dos números flotantes
    double multiplicacion = multiplicaNumeros(doubleVar1, doubleVar2); // Llamada a la función para multiplicar dos números flotantes
    double division = divisionNumeros(doubleVar1, doubleVar2); // Llamada a la función para dividir dos números flotantes

    // Imprimir los resultados de las operaciones con flotantes
    printf("La Suma de los numeros FLOTANTES es: %f\n", suma);
    printf("La Resta de los numeros FLOTANTES es: %f\n", resta);
    printf("La Multiplicacion de los numeros FLOTANTES es: %f\n", multiplicacion);
    printf("La Division de los numeros FLOTANTES es: %f\n", division);

    mostrarTablaASCII(); // Llamada al procedimiento para mostrar la tabla ASCII

    return 0; 
}

// Función para sumar dos números enteros
int sumarEnteros(int numero1, int numero2) {
    return numero1 + numero2; // Retorna la suma de numero1 y numero2
}

// Función para restar dos números enteros
int restarEnteros(int numero1, int numero2) {
    return numero1 - numero2; // Retorna la resta de numero1 y numero2
}

// Función para multiplicar dos números enteros
int multiEnteros(int numero1, int numero2) {
    return numero1 * numero2; // Retorna la multiplicación de numero1 y numero2
}

// Función para dividir dos números enteros
int divEnteros(int numero1, int numero2) {
    if (numero2 == 0) { // Verifica si el divisor es cero
        printf("Error: División por cero no permitida.\n"); // Imprime mensaje de error
        return 0; // Retorna 0 en caso de error
    }
    return numero1 / numero2; // Retorna la división de numero1 y numero2
}

// Función para sumar dos números flotantes
double sumaNumeros(double numero1, double numero2) {
    return numero1 + numero2; // Retorna la suma de numero1 y numero2
}

// Función para restar dos números flotantes
double restaNumeros(double numero1, double numero2) {
    return numero1 - numero2; // Retorna la resta de numero1 y numero2
}

// Función para multiplicar dos números flotantes
double multiplicaNumeros(double numero1, double numero2) {
    return numero1 * numero2; // Retorna la multiplicación de numero1 y numero2
}

// Función para dividir dos números flotantes
double divisionNumeros(double numero1, double numero2) {
    if (numero2 == 0) { // Verifica si el divisor es cero
        printf("Error: No se puede dividir entre 0.\n"); // Imprime mensaje de error
        return 0; // Retorna 0 en caso de error
    } else {
        return numero1 / numero2; // Retorna la división de numero1 y numero2
    }
}

// Procedimiento para mostrar la tabla ASCII
void mostrarTablaASCII() {
    char arreglo_de_ascii[256]; // Arreglo para almacenar los caracteres ASCII
    for (int i = 0; i < 256; i++) {
        arreglo_de_ascii[i] = i; // Asigna el valor ASCII correspondiente a cada posición del arreglo
        printf("Caracter ASCII en posicion %d: %c\n", i, arreglo_de_ascii[i]); 
    }
}
