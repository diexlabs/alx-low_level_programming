#ifndef MAIN_H
#define MAIN_H

typedef struct formatter {
	char key;
	int (*format)(int *);
} formatter_t;

int _printf(const char *format, ...);
formatter_t get_formatter(char c);
int format_c(int *);
int format_s(int *);
int format_i(int *);
void itos(int, int *);
#endif
