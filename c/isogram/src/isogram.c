#include "isogram.h"
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    bool result = true;
    int i,j;

    if (phrase == NULL) return false;
    // printf("phrase = %s\n", (char*)phrase);     // For debugging

    for (i = 0; phrase[i] != 0; i++)
    {
        if ((phrase[i] == ' ') || (phrase[i] == '-')) continue;
        for (j = (i+1); phrase[j] != 0; j++)
        {
            if ( tolower(phrase[i]) == tolower(phrase[j]) )
            {
                // printf("%d == %d\n", phrase[i], phrase[j]);      // debugging
                return false;
            }
            // else printf("%c != %c\n", phrase[i], phrase[j]);     // debugging
        }
    }
    return result; 
}
