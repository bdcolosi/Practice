#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //change to string//
    char s = get_string("Text: ");

    //Letter Count//

    int n = strlen(s);

    float letter_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]) == 0)
        {
            letter_count += 0;
        }
        else
        {
            letter_count++;
        }
    }

    printf("%.0f letter(s)\n", letter_count);

    //Word Count//

    float word_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isspace(s[i]) != 0 || s[i + 1] == '\0')
        {
            word_count++;
        }
    }

    printf("%.0f word(s)\n", word_count);

    //Sentence Count//

    float sentence_count = 0;

    for (int i = 0; i < n; i++)
    {
        char punct[3];
        punct[0] = '.';
        punct[1] = '!';
        punct[2] = '?';

        if (s[i] == punct[0] && isalpha(s[i + 1]) == 0)
        {
            sentence_count++;
        }
        else if (s[i] == punct[1] || s[i] == punct[2])
        {
            sentence_count++;
        }
    }
    printf("%.0f sentence(s)\n", sentence_count);

    //Coleman-Liau index//

    float L = (letter_count / word_count) * 100.0;

    float S = (sentence_count / word_count) * 100.0;

    printf("%.2f\n%.2f\n", L, S);

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index));
    }
}
