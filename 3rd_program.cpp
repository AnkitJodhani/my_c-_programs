// Problem :-  remove all occurance of given charactor from given string
//  Ankit Jodhani
//  19se02it019

#include <stdio.h>

void remove_char(char *string, char r)
{
    int pos = 0;

    while (string[pos] != '\0')
    {
        if (string[pos] == r)
        {
            int newpos = pos;
            while (string[newpos] != '\0')
            {
                string[newpos] = string[newpos + 1];
                newpos++;
            }
        }

        else
            pos++;
    }
}

int main(void)
{
    char str1[] = "ankit jodhani";
    printf("Given String : %s\n", str1);
    remove_char(str1, 'a');
    printf("After removing charactor : %s\n", str1);

    return 0;
}
