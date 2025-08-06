#include <stdio.h>

/*20.  Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do
chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/

int main() {
    
    int num, coeficiente;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                coeficiente = 1;
            } else {
                coeficiente = coeficiente * (i - j + 1) / j;
            }
            printf("%d ", coeficiente);
        
        }
        printf("\n");
    }
    
    return 0;
}

/*19. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que estão
em ambos os vetores. Não deve conter números repetidos.

int main() {
    
    int vetor[10];
    int vetor1[10];
    int interseccao[10];
    int contador = 0;
    
    printf("Preencha o primeiro vetor: ");
    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro %d: ", i);
        int temp;
        scanf("%d", &temp);
        vetor[i] = temp;
    }
    printf("Preencha o segundo vetor: ");
    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro %d: ", i);
        int temp;
        scanf("%d", &temp);
        vetor1[i] = temp;
    }
    
    for(int i = 0; i < 10; i++) {
        for(int k = 0; k < contador; k++) {
            if(vetor[i] == interseccao[k]) {
                goto proximo;
            }
        }
        for(int j = 0; j < 10; j++) {
            if(vetor[i] == vetor1[j]) {
                interseccao[contador] = vetor[i];
                contador++;
                break;
            }
        }
        proximo:;
    }
    
    for(int i = 0; i < contador; i++) {
        printf("%d ", interseccao[i]);
    }
    return 0;
}

*/

/*18. Leia um vetor de 10 posições, depois contar e escrever quantos valores pares ele possui.

int main() {
    int vetor[10];
    int pares[10];
    int contador = 0;
    
    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro: ");
        int temp;
        scanf("%d", &temp);
        vetor[i] = temp;
        if(temp % 2 == 0) {
            pares[contador]=temp;
            contador++;
        }
    }
    
    printf("O vetor tem %d números pares.\n", contador);
    for(int i = 0; i < contador; i++) {
        printf("%d ", pares[i]);
    }
    
    return 0;
}
*/

/*17. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main() {
    
    int vetor[6];
    
    for(int i = 0; i < 6; i++) {
        printf("Digite um número inteiro");
        int temp;
        scanf("%d", &temp);
        vetor[i] = temp;
    }
    
    for(int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
*/

/*16. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O
programa deve executar os seguintes passos:
• Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
• Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e
A[5] do vetor e mostre na tela esta soma.
• Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
• Mostre na tela cada valor do vetor A, um em cada linha.

int main() {
    int A[] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n", soma);
    A[4] = 100;
    for(int i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
*/

/*15. Elabore um programa que faça leitura de vários números inteiros, até que se digite um
número negativo. O programa tem que retornar o maior e o menor número lido.

int main() {
    int maior, menor, num;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&num );
    
    maior = num;
    menor = num;
    
    while(num >= 0) {
        if(num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
        printf("Digite um número inteiro: ");
        scanf("%d",&num );
    }
    
    printf("Maior: %d\n Menor %d", maior, menor);
}
*/

/*14. Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente.

int main() {
    int number;
    printf("Digite um número inteiro par: ");
    scanf("%d", &number);
    for(int i = number; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    
    return 0;
}
*/
/*13. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem "FIM!” após a contagem.

int main() {
    int i = 10;
    while(i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("FIM!");
    return 0;
}
*/

/*12.  Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes.
A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do while.

int main() {
    int contadorWhile = 1;
    int contadorDoWhile = 1;
    
    for(int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    while(contadorWhile <= 100) {
        printf("%d ", contadorWhile);
        contadorWhile += 1;
    }
    printf("\n");
    
    do {
       printf("%d ", contadorDoWhile);
        contadorDoWhile += 1; 
    } while(contadorDoWhile <= 100);
}

*/

/*11. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.

int main() {
    for(int i = 0; i <= 15; i += 3) {
        if (i!= 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
*/

/*10. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.,


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
*/

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
