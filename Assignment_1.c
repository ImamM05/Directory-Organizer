#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/type.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define EXT_BUFF 100
#define BTR 4
#define CHAR_LENGTH 100

int main(int argc, char* argv[]) {
    char buf[EXT_BUFF];
    ssize_t byteRead;
    char** extenList;

    if (argc < 2) {
        printf("Error: Missing filepath and txt file, ex: %s <filepath> <filename>\n", argv[0]);
        return -1;
    }

    int fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return -1;
    }
    if (buf == NULL) {
        perror("Memory allocation failed.");
        return -1;
    }

    extenList = malloc(20 * sizeof(*extenList));
    while ((byteRead = read(fd, buf, BTR)) > 0) {
        for (unsigned int i = 0; i < byteRead; i++) {
            if 
        }
    }
    if (byteRead == -1) {
        perror("Error reading file.")
    }

   


    free(extenList);
    close(fd);
    return 0;
    
}

void addToList(const char** const list, const char* extension) {

}
