//ativ1
#include <iostream>

double calcularPreco(int unidades) {
double precoporunidade;

if (unidades <= 25) {
 precoporunidade = 1.50;
    }
    else {
    precoporunidade = 1.25;
    }

    double precototal = unidades * precoporunidade;
    return precototal;
}

int main() {
   int unidadescompradas;

    std::cout << "Quantas unidades de sorvete o cliente comprou? ";
   std::cin >> unidadescompradas;

    double preco_total = calcularPreco(unidadescompradas);
    std::cout << "O cliente vai pagar R$" << preco_total << " pelos sorvetes." << std::endl;

   return 0;
}
//ativ2
#include <iostream>

int main() {
    
    int numero = 15; 

  if (numero > 10) {
        
  numero = numero + 10 * 2;
    }
    else {
        
      numero = numero + 9 * 3 - 8;
    }
std::cout << "O resultado é: " << numero << std::endl;

    return 0;
}
//ativ3
#include <iostream>

int main() {
    int numero;

    std::cout << "Insira um número: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "O número " << numero << " é positivo." << std::endl;
    }
    else if (numero < 0) {
        std::cout << "O número " << numero << " é negativo." << std::endl;
    }
    else {
        std::cout << "O número é zero." << std::endl;
    }

    return 0;
}
//ativ4
#include <iostream>

int main() {
    int numero1, numero2;

    std::cout << "Insira o primeiro número: ";
    std::cin >> numero1;
    std::cout << "Insira o segundo número: ";
    std::cin >> numero2;

    if (numero1 > numero2) {
        std::cout << "O primeiro número (" << numero1 << ") é maior que o segundo número (" << numero2 << ")." << std::endl;
    }
    else if (numero2 > numero1) {
        std::cout << "O segundo número (" << numero2 << ") é maior que o primeiro número (" << numero1 << ")." << std::endl;
    }
    else {
        std::cout << "Os dois números são iguais." << std::endl;
    }

    return 0;
}
//ativ5
#include <iostream>

int main() {
    double nota1, nota2;

    std::cout << "Insira a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Insira a segunda nota: ";
    std::cin >> nota2;

    double media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        std::cout << "Aprovado" << std::endl;
    }
    else {
        std::cout << "Reprovado" << std::endl;
    }

    return 0;
}




