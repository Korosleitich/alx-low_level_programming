#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int s;
int alp;
int a;

if (!filename)
return (-1);

s = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (s == -1)
return (-1);

if (!text_content)
text_content = "";

for (alp = 0; text_content[alp]; alp++)
;

a = write(s, text_content, alp);

if (a == -1)
return (-1);

close(s);

return (1);
}
