#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be tested
 * @needle: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		j = 0;
		for (; needle[j] != 0; )
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
			break;
		}
		Skip to content

Sign up

BlackViking93

/

alx-low_level_programming

Public

Code

Issues

Pull requests

Actions

Projects

More

alx-low_level_programming/0x07-pointers_arrays_strings/5-strstr.c

@BlackViking93

BlackViking93 5-strstr.c

 History

 1 contributor

31 lines (29 sloc)  593 Bytes

#include <stdio.h>

#include "main.h"



/**

 * _strstr - a function that locates a substring

 * @haystack: the string to be tested

 * @needle: the substring to be searched for

 * Return: returns a pointer to the beginning of the

 * located substring, or NULL if the substring is not found

 */

char *_strstr(char *haystack, char *needle)

{

	int i, j = 0, k;



	for (i = 0; haystack[i] != 0; i++)

	{

		k = i;

		j = 0;

		for (; needle[j] != 0; )

		{

			if (haystack[k++] == needle[j++])

			{

				continue;

			}

			break;

		}

		if (needle[j] == '\0')

			return ((haystack + i));

	}

	return (NULL);

}

Footer

© 2022 GitHub, Inc.

Footer navigation

Terms

Privacy

Security

Status

Docs

Contact GitHub

Pricing

API

Training

Blog

About

alx-low_level_programming/5-strstr.c at master · BlackViking93/alx-low_level_programming · GitHub
