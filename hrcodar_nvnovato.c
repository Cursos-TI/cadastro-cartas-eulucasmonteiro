#include <stdio.h>

int main (){ 
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 500;

    printf ("Entre com a temperutura: \n");
    scanf ("%f", &temperatura);
    printf ("Entre com a umidade: \n");
    scanf ("%f", &umidade);
    printf ("Entre com o estoque: \n");
    scanf ("%u", &estoque);   


    if (temperatura >= 20){
        printf ("a temperatura esta alta \n");
    }
    else { 
        printf ("a temperatura esta adequada \n");
    }

    if (umidade <= 20){
        printf ("a umidade esta dentro dos parametros \n"); 
    }
    else {
        printf ("a umidade esta alta \n");
    }
    if (estoque < estoqueminimo){
        printf ("o estoque abaixo do minimo \n");
    }
    else {
        printf ("o estoque esta no nivel correto \n");
    }






}


