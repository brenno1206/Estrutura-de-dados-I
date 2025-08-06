#include <stdio.h>


/*10. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.,
*/

int main() {
    int idade, tempoTrabalhado;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu tempo trabalhado: ");
    scanf("%d", &tempoTrabalhado);
    
    if(idade >= 65 || tempoTrabalhado >= 30 || (idade >= 60 && tempoTrabalhado >= 25)) {
        printf("Você tem direito a aposentadoria");
    } else {
        printf("Você não tem direito a aposentadoria");
    }
}

/*9.Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção:

int main () {
    int a, b, o;
    
    printf("Escolha a opção:\n");
    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    printf("Opção:");
    scanf("%d", &o);
    
    if(o >= 1 && o <= 4) {
        printf("Digite um número inteiro: ");
        scanf("%d", &a);
        printf("Digite outro número inteiro: ");
        scanf("%d", &b);
    }
    switch(o) {
        case 1:
            printf("A soma dos números é: %d", a + b);
            break;
        case 2:
            printf("A diferença entre os números é: %d", a - b);
            break;
        case 3:
            printf("O produto dos números é: %d", a * b);
            break;
        case 4:
            printf("A divisão entre os números é: %d", a / b);
            break;
        default:
            printf("ERRO: Opção não disponível");
    }
}
*/

/*8.Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.

int main () {
    int a, b;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    
    if(a > b) {
        printf("%d > %d\n", a, b);
        printf("Diferença de %d", a - b);
    } else if (a < b) {
        printf("%d > %d\n", b, a);
        printf("Diferença de %d", b - a);
    } else {
        printf("%d = %d\n", b, a);
        printf("Diferença de 0");
    }
    
}
*/
/*7. Faça um programa que receba um número inteiro e verifique se este número e par ou ímpar.

int main () {
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    
    if(a % 2 == 0) {
        printf("Par");
    } else {
        printf("Ímpar");
    }
}
*/
/*6. Faça um programa que receba dois números e mostre qual deles é o maior.
int main () {
    int a, b;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    
    if(a > b) {
        printf("%d > %d", a, b);
    } else if (a < b) {
        printf("%d > %d", b, a);
    } else {
        printf("%d = %d", b, a);
    }
    
}
*/

/*5. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int main () {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("antecessor: %d, sucessor: %d", numero -1, numero +1);
    return 0;
}
*/
/*4. Leia um número real e imprima a quinta parte deste número.


int main () {
    float numero;
    printf("Digite um número real: ");
    scanf("%f", &numero);
    printf("A quinta parte de %.2f é %.2f", numero, numero / 5);
    return 0;
}

*/
/*3. Leia um número real e imprima o resultado do quadrado desse número.

int main () {
    float numero;
    printf("Digite um número real: ");
    scanf("%f", &numero);
    printf("O quadrado de %.2f é %.2f", numero, numero*numero);
    return 0;
}
*/

/*2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

int main() {
    int numeros[3];
    int soma = 0;
    for(int i = 0; i < 3; i++) {
        printf("Digite um número inteiro %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("A soma dos números é: %d", soma);
    return 0;
}
*/


/*1. Faça um programa que leia um número inteiro e o imprima.
int main()
{
    int number;
    printf("Digite um número inteiro: ");
    scanf("%d", &number);
    
    printf("O número que você digitou foi: %d", number);
    return 0;
}
 */
