#include "main.h"
/**
 * _printf - funtion like "printf"
 * @format: the str will be printed
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
va_list ptr;
int i = 0, ret = 0;

	va_start(ptr, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					ret += print_char(ptr);
					break;
				case 's':
					ret += print_str(ptr);
					break;
				case '%':
					ret += print_porcentage();
					break;
				case '\0':
					break;
				default:
					i--;
					ret += _putchar(format[i]);
					break;
			}
		}
		else
		{
			ret += _putchar(format[i]);
		}
	i++;
	}
	return (ret);
}
