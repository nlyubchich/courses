#include <stdio.h>
# define ASCII_SYMBOL_COUNT 128

void print_horizontal_histogram(int word_count_map[])
{
    int current_word_count;
    for (int i = 1; i < ASCII_SYMBOL_COUNT; ++i)
    {
        current_word_count = word_count_map[i];
        if (current_word_count == 0) continue;

        printf("%c ", i);
        for (int i = 0; i < current_word_count; ++i)
        {
            putchar('=');
        }
        putchar('\n');
    }
}


int main()
{
    int s;
    int words_count[ASCII_SYMBOL_COUNT];

    for (int i = 0; i < ASCII_SYMBOL_COUNT; ++i) {
        words_count[i] = 0;
    }

    // getting text and parsing to words count map
    while ((s = getchar()) != EOF) {
        words_count[s]++;
    }
    print_horizontal_histogram(words_count);
}