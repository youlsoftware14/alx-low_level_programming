#include "main.h"
/**
  *_isdigit - check if a character is a digit 
  *0x: the number to be checked
  *
   * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
