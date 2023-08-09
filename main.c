#include <stdio.h>
#include <stdlib.h>

/*Solicitar um número entre 1 e 4 (considere o 1 e o 4 como números
válidos). Se a pessoas digitar um número diferente, mostrar a
mensagem "Entrada Inválida" e solicitar o número novamente. Se digitar
correto mostrar o número digitado.*/
/*desenvolvedor: fischerxp*/

int main()
{
    int num;
    system("color 1f");
    printf("informe um numero de 1 e 4: \n");
    scanf("%d",&num);
    while(num<1||num>4)
    {
        system("color 4f");
        printf("numero invalido, informe novamente: \n");
        scanf("%d",&num);
    }
    system("color 5f");
    printf("%d numero, valido!!!",num);
    return 0;
}
