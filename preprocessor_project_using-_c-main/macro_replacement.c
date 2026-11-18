#include "header.h"
#include <ctype.h>
#define MAX 100
#define ARG 10
char macro[MAX][SIZE], value[MAX][SIZE];
char param[MAX][ARG][SIZE];
int type[MAX], nargs[MAX], count = 0;
int search(char *word)
{
    int i;
    for(i = 0; i < count; i++)
        if(strcmp(word, macro[i]) == 0)
            return i;
    return -1;
}
void macro_replace(char *line, FILE *fs)
{
    char word[SIZE], body[SIZE], output[SIZE];
    char actual[ARG][SIZE], temp[SIZE];
    int i = 0, j, k, n, index, depth;
    if(strncmp(line, "#define", 7) == 0)
    {
        i = 7;
        while(isspace(line[i]))
            i++;
        j = 0;
        while(isalnum(line[i]) || line[i] == '_')
            word[j++] = line[i++];
        word[j] = '\0';
        index = search(word);
        if(index == -1)
            index = count++;
        strcpy(macro[index], word);
        type[index] = 0;
        nargs[index] = 0;
        if(line[i] == '(')
        {
            type[index] = 1;
            i++;
            j = 0;
            while(line[i] != ')' && line[i] != '\0')
            {
                if(line[i] == ',')
                {
                    param[index][nargs[index]++][j] = '\0';
                    j = 0;
                    i++;
                }
                else
                    param[index][nargs[index]][j++] = line[i++];
            }
            if(j > 0)
                param[index][nargs[index]++][j] = '\0';
            i++;
        }
        while(isspace(line[i]))
            i++;
        strcpy(value[index], line+i);
        return;
    }
    i = 0;
    output[0] = '\0';
    while(line[i] != '\0')
    {
        if(isalpha(line[i]) || line[i] == '_')
        {
            j = 0;
            while(isalnum(line[i]) || line[i] == '_')
                word[j++] = line[i++];
            word[j] = '\0';
            index = search(word);
            if(index == -1)
            {
                strcat(output, word);
                continue;
            }
            strcpy(body, value[index]);
            if(type[index])
            {
                k = i;
                while(isspace(line[k]))
                    k++;
                if(line[k] != '(')
                {
                    strcat(output, word);
                    continue;
                }
                k++;
                n = 0;
                j = 0;
                while(line[k] != ')' && line[k] != '\0')
                {
                    if(line[k] == ',' && n < nargs[index]-1)
                    {
                        actual[n][j] = '\0';
                        n++;
                        j = 0;
                    }
                    else
                        actual[n][j++] = line[k];

                    k++;
                }
                actual[n][j] = '\0';
                if(line[k] != ')' || n != nargs[index]-1)
                {
                    strcat(output, word);
                    continue;
                }
                for(j = 0; j < nargs[index]; j++)
                {
                    char *p = body;
                    char result[SIZE] = "";
                    char token[SIZE];
                    int a = 0, b = 0;
                    while(p[a] != '\0')
                    {
                        if(isalpha(p[a]) || p[a] == '_')
                        {
                            b = 0;
                            while(isalnum(p[a]) || p[a] == '_')
                                token[b++] = p[a++];
                            token[b] = '\0';
                            if(strcmp(token, param[index][j]) == 0)
                                strcat(result, actual[j]);
                            else
                                strcat(result, token);
                        }
                        else
                        {
                            b = strlen(result);
                            result[b++] = p[a++];
                            result[b] = '\0';
                        }
                    }
                    strcpy(body, result);
                }
                i = k+1;
            }
            strcat(output, body);
        }
        else
        {
            j = strlen(output);
            output[j++] = line[i++];
            output[j] = '\0';
        }
    }
    fputs(output, fs);
}