#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    enum boolean
    {
        false = 0,
        true = 1
    }typedef boolean;

    {
        if (2 > argc) //Pas assez de param�tre
        {
            printf("Nombre de parametres insuffisants\n");
        }
        else if (3 > argc) // Commande sans option
        {

        }
        else // Commande avec option
        {

        }
    }

    return 0;
}
