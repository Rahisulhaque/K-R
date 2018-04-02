/* ***************************************************************************************** */
/*                                                                                           */
/*                                                                                           */
/*   temperature.c                                                   __    _            __   */
/*                                                       _________ _/ /_  (_)______  __/ /   */
/*   By: rahisul <rahisul@icloud.com>                   / ___/ __ `/ __ \/ / ___/ / / / /    */
/*                                                     / /  / /_/ / / / / (__  ) /_/ / /     */
/*   Created: 2018/04/02 14:14:45 by rahisul          /_/   \__,_/_/ /_/_/____/___,_/_/      */
/*   Updated: 2018/04/02 14:20:08 by rahisul                                                 */
/*                                                                                           */
/* ***************************************************************************************** */

#include <stdio.h>

int	main()
{
	int fahr;
	int celcius;
	int upper;
	int lower;
	int step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	while( fahr <= upper)
	{
		celcius = 5 * (fahr - 32) / 9;
	       	printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}

	return (0);
}
