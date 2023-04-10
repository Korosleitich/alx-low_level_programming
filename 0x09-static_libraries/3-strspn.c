
/**
 * _strspn - returns the length of the initial segment of s which consists
 * of only characters in accept
 * @s: the string to search
 * @accept: the target characters
 * Return: the number of bytes in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
		int number_i = 0, k;
			int values = 0;

			while (s[number_i] != '\0') /*iterate in string*/
			{

				for (k = 0; accept[k] != '\0'; k++) /*iterate through target*/
				{
					if (s[number_i] == accept[k]) /*record & break at first val*/
					{
						values++;
						break;
					}
					if (accept[k + 1] == '\0' && s[number_i] != accept[k])

						return (values);/*return if idx doesn't match*/
				}

				number_i++;
			}

			return (values); /* return val if all are correct till end */

}
