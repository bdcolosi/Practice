#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]))
            {
                int k = atoi(argv[1]);

                string user_input = get_string("plaintext: ");

                for (int y = 0; y < strlen(user_input); y++)
                {
                    char p = user_input[y];
                    printf("%c", p + k);
                }
                printf("\n");
                return 1;
            }
            else
            {
                printf("Q.Q\n");
                return 0;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
