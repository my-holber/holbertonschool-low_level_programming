#include <stdio.h>
/**
  * main - Prints some letters of alphabet
  *
  * Return: Always (Success)
  */
int main(void) {
	char i;

	for (i = 'a'; i < 'z'; i++) {
		if (i != 'q' && i != 'e') {
			putchar(i);
		}
	}

	return 0;
}
