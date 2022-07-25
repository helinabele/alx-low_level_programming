#include <main.h>
#include <stdlib.h>
//open requires 3 header files
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
ssize_t lenr, lenw;
char *buffer;

/* write */
if(filename == null)
return 0;

fd = open(filename, R_CREAT | O_WRONLY, 0600);

if(fd == -1){
    return 0;
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL){
close(fd);
return (0);
}

/* read */
lenr = read(fd, buffer, letters);
close(fd);

if(fd == -1){
    free(buffer);
    return(0);
}
lenw = write(STDOUT_FILENO, buffer, lenr);
free(buffer);
if(lenr != lenw)
return (0);
return (lenw);
}
