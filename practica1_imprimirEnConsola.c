// Los comentarios se hacen colocando dos slahs (//)
/* Con Slash y asterisco se pueden comentar
varios parrafos a la vez.
Los comentarios no se compilan. 
*/

#include <stdio.h>

int main(){
    // Ejercicio 1.1: Imprimir algo en pantalla
    printf("Bienvenido al programa\n");
    
    // Ejecicio 1.2: Capturar un número introducido por teclado e imprimir en pantalla (scanf)
    int dato;
    printf("Ingrese un número: ");
    scanf("%d", &dato);
    printf("El número que ingresó es: %d\n", dato);

    // Ejercicio 1.3: Hacer una suma, una resta y multiplicación de dos datos introducidos por teclado.
        // Imprimir los resultados de manera ordenada y fácil de identificar.
        // Reto1: Imprima los resultados en un único print sin perder la legibilidad.
        // Reto2: Solo utilizar las dos variables de los números.
    int dato1; int dato2;

        /* El primer párametro de Scanf debe contener únicamente el formato de entrada
        scanf("Ingrese el primer número: %d\n", &dato1);
        scanf("Ingrese el segundo numero %d\n", &dato2);
        */
    printf("Ingrese el primer número: ");
    scanf("%d", &dato1);
    printf("ingrese el segundo número: ");
    scanf("%d", &dato2);

    printf("Suma: %d + %d = %d\nResta: %d - %d = %d\nMultiplicación: %d x %d = %d\n",dato1,dato2,dato1+dato2,dato1,dato2,dato1-dato2,dato1,dato2,dato1*dato2);

    // Ejercicio 1.4: Obtener la división y el módulo de la divisón de dos enteros introducidos por teclado.
        // Reto1: Garantizar que el resultado de la división pueda ser decimal.
        // Reto2: Limitar a solo dos decimales en el resultado de la división. 
        // Reto3: Solo utilizar dos variables.  
    printf("Ingrese el primer número: ");
    scanf("%d", &dato1);
    printf("ingrese el segundo número: ");
    scanf("%d", &dato2);

    printf ("División sin límite de decimales: %d / %d = %f\n",dato1,dato2,(float)dato1/dato2);
    printf ("División con límite de decimales: %d / %d = %.2f\n",dato1,dato2,(float)dato1/dato2);
    printf ("Módulo: %d %% %d = %d\n",dato1,dato2,dato1%dato2); //Para que C, entienda el % como carácter debe usarse %%.
    return 0;
}