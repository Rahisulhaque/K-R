/* ***************************************************************************************** */
/*                                                                                           */
/*                                                                                           */
/*   ex1.c                                                           __    _            __   */
/*                                                       _________ _/ /_  (_)______  __/ /   */
/*   By: rahisul <rahisul@icloud.com>                   / ___/ __ `/ __ \/ / ___/ / / / /    */
/*                                                     / /  / /_/ / / / / (__  ) /_/ / /     */
/*   Created: 2018/04/02 14:47:13 by rahisul          /_/   \__,_/_/ /_/_/____/___,_/_/      */
/*   Updated: 2018/04/02 15:17:45 by rahisul                                                 */
/*                                                                                           */
/* ***************************************************************************************** */

#include <stdio.h>
#define MAXLINE 1000

int	ft_getline(char line[], int max);
int	strindex(char source[], char searchfor[]);

char	pattern[] = "ould";

int	main()
{
	char line[MAXLINE];
	int found;

	found = 0;
	while(ft_getline(line, MAXLINE) > 0)
		if(strindex(line, pattern) >= 0)
			{
				printf("%s", line);
				found++;
			}
	return found;
}

int	ft_getline(char line[], int max)
{
	int c;
	int i;

	i = 0;
	while( --max > 0 && (c = getchar()) != EOF && c != '\n')
	      	line[i++] = c;
	if (c == '\n')
		line[i++] = c;
	line[i] = '\0';
	return i;
}

int	strindex(char source[], char searchfor[])
{
	int i;
	int j;
	int k;

	for (i = 0; source[i] != '\0'; i++)
	{
		for( j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
			;
		if (k > 0 && searchfor[k] == '\0')
			return i;
	}

	return -1;
}
