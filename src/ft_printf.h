#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#define MAX_BUF (sizeof(long int) * 8)

typedef struct s_struct
{
	int minus; // -
	int zero; // 0

	int width; // 0 - 9
	int precision; // .
} t_struct;
#endif
