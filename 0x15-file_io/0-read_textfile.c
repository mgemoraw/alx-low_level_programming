#include "main.h"

/**
*read_textfile - read text files
*@filename: file name to be read
*@letters: size of chars in filename
*Return: retruns ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *f_out;
    char *str;

    fout = fopen(filename, "r");

    if (f_out == NULL || filename == NULL)
        return (0);

    


}
