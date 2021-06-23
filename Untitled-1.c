
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char list[] = {2, 2, 3, 4};
    char *count;
    int i, j, size, cont, biggest = 0, result = -1;

    size = sizeof(list) / sizeof(list[0]);
    for (i = 0; i < size; i++)
    {
        if (biggest < list[i])
            biggest = list[i];
    }
    biggest += 1;

    count = malloc(sizeof(int) * biggest);
    if (count == NULL)
        return (-1);
    
    for (i = 0; i < biggest; i++)
        count[i] = 0;
    
    for (j = 0; j < biggest; j++)
    {
        cont = 0;
        for (i = 0; i < size; i++)
        if (list[i] == j)
        {
            cont += 1;
        }
        count[j] = cont;
    }
    for (i = 0; i < biggest; i++)
    {
        if (i == list[i])
            result = i;
    }
    printf("result: %d\n", result);
    return (0);
}