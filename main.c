#include <stdio.h>
#include <stdlib.h>

/*Solicitar um n�mero entre 1 e 4 (considere o 1 e o 4 como n�meros
v�lidos). Se a pessoas digitar um n�mero diferente, mostrar a
mensagem "Entrada Inv�lida" e solicitar o n�mero novamente. Se digitar
correto mostrar o n�mero digitado.*/
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
