#include "main.h"
/**
 * prinsint - prints intbeginning with space
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index to buffer pointer
 * Return: number of characters printed
 */
int prinsint(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_temp;
	unsigned int i, div;

	int_input = va_arg(arguments, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handl_buf(buf, ' ', ibuf);
	}
	else
	{
		int_in = int_input;
		ibuf = handl_buffer(buf, ' ', ibuf);
	}
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((int_in / div) * 10) + '0', ibuf);
	}
	return (i + 1);
}
