#include <stdio.h>

int main()
{

    int count, length;
    float avg_length;

    avg_length = 0;
    length = 0;
    count = 0;

    char ch;

    printf("Enter a sentence: ");

    do
    {
        ch = getchar();
        length++;
        // printf("Length=%d\n",length);
        if (ch == ' ' || ch == '\n')
        {
            length--;
            count++;
            avg_length += length;
            length = 0;
            // printf("Count=%d, avg_length=%f",count,avg_length);
        }
    } while (ch != '\n');
    printf("Average word length: %.1f", avg_length / count);
    return 0;
}