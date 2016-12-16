#include <stdio.h>
# define MAX_WORD_LENGTH 20

void print_horizontal_histogram(int word_count_map[])
{
	int current_word_count;
	for (int i = 1; i < MAX_WORD_LENGTH; ++i)
	{
		current_word_count = word_count_map[i];
		if (current_word_count == 0) continue;

		printf("%d ", i);
		for (int i = 0; i < current_word_count; ++i)
		{
			putchar('=');
		}
		putchar('\n');
	}
}

void print_vertical_histogram(int word_count_map[])
{
	int word_count_peak = 0;
	int symbol;

	for (int i = 1; i < MAX_WORD_LENGTH; ++i)
	{
		if (word_count_peak < word_count_map[i])
		{
			word_count_peak = word_count_map[i];
		}
	}
	putchar('\n');

	for (; word_count_peak > 0; --word_count_peak)
	{
		for (int i = 1; i < MAX_WORD_LENGTH; ++i)
		{
			if (word_count_map[i] >= word_count_peak)
			{
				symbol = '=';
			} else {
				symbol = ' ';
			}
			printf("%3c", symbol);
		}
		putchar('\n');
	}

	for (int i = 1; i < MAX_WORD_LENGTH; ++i)
	{
		printf("%3d", i);
	}
	putchar('\n');
}


int main()
{
	int s, word_length;
	int words_count[MAX_WORD_LENGTH];

	for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
		words_count[i] = 0;
	}

	word_length = 0;

	// getting text and parsing to words count map
	while ((s = getchar()) != EOF) {
		if (s == ' ' || s == '\t' || s == '\n') {
			++words_count[word_length];
			word_length = 0;
		} else {
			++word_length;
		}
	}
	print_horizontal_histogram(words_count);
	// print_vertical_histogram(words_count);
}