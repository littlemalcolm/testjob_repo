#include <stdio.h>
#include <stdarg.h>



int _putchar(char c)
{
	return write(1, &c, 1);
}



int _printf(const char* format, ...) 
{
	va_list args;
	va_start(args, format);


	int printed_chars = 0;
	while (*format) 
	{
		if (*format == '%') 
		{
			format++; // Move past the '%'
			char specifier = *format;


			// Handle format specifiers
			switch (specifier) 
			{
				case 'c': 
				{
					int character = va_arg(args, int);
					_putchar(character);
					printed_chars++;
					break;
				}

				case 's': 
				{
					char* str = va_arg(args, char*);
					while (*str) {
		                        _putchar(*str);
					printed_chars++;
					str++;
				}
				break;
				
				case '%':
					_putchar('%');
						                        printed_chars++;
									                    break;
