#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    string user_input = get_string("plaintext: ");

    int k = (int)argv[1];
    for (int i = 0; i < strlen(user_input); i++)
    {
        int p = (int)user_input[i];
        printf("%i\n", p);
    }
}
