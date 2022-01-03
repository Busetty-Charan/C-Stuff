// Program to chop up a string based on spaces and also to find the longest and the shortest strings among the chopped strings

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char beegstring[100];

    printf("Enter a string : ");
    fgets(beegstring, 100, stdin);

    char smolstrings[100][100];
    int current_smol = 0, current_smol_char_pos = 0, smol_str_len_arr[100];

    for (int i = 0; i < 100; i++)
    {
        if (beegstring[i] == ' ' || beegstring[i] == '\n')
        {
            smol_str_len_arr[current_smol] = current_smol_char_pos;
            smolstrings[current_smol][current_smol_char_pos] = '\0';
            current_smol_char_pos = 0;

            current_smol++;
            continue;
        }
        else if (beegstring[i] == '\0')
        {
            break;
        }
        else
        {
            smolstrings[current_smol][current_smol_char_pos] = beegstring[i];
            current_smol_char_pos++;
        }
    }

    int max = 0, min = 2147483647, max_index = 0, min_index = 0;

    for (int i = 0; i < current_smol; i++)
    {
        if (smol_str_len_arr[i] > max)
        {
            max = smol_str_len_arr[i];
            max_index = i;
        }
        if (smol_str_len_arr[i] < min)
        {
            min = smol_str_len_arr[i];
            min_index = i;
        }
    }

    for (int i = 0; i < current_smol; i++)
    {
        printf("%s\n", smolstrings[i]);
    }

    printf("The longest slice is '%s' measuring %d\n", smolstrings[max_index], max);
    printf("The shortest string is '%s' measuring %d", smolstrings[min_index], min);

    return 0;
}
