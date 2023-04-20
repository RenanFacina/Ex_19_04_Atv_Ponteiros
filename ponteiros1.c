#include <stdio.h>

int main()
{
    int var1 = 2;
    int var2 = 3;
    
    int *pont1;
    int *pont2;
    
    pont1 = &var1;
    pont2 = &var2;

    if (pont1 > pont2)
    {
        printf("O ponteiro1 é o de maior valor: %p", pont1);
    }
    else
    {
        printf("O ponteiro2 é o de maior valor: %p", pont2);
    }
    
    while (1 > 0)
    {
        printf("Erro ");
    }
    
    return 0;
}