#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int s;
ssize_t kor, kip;
char *buf;

if (!filename)
return (0);

s = open(filename, O_RDONLY);

if (s == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

kor = read(s, buf, letters);
kip = write(STDOUT_FILENO, buf, kor);

close(s);

free(buf);

return (kip);
}
