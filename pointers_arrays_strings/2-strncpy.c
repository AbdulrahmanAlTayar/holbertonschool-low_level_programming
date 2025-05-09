#include "main.h"
/**
*_strlen - len
*@s: pointer
*
*Return: void
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);


}
