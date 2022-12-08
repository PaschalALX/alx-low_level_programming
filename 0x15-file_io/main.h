#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
<<<<<<< HEAD

/**
 * ELF header functions
*/
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void pri_version(unsigned char *e_identnt);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(uint16_t e_type);

=======
>>>>>>> parent of c4dd5c7... Updated Main.h
#endif /* MAIN_H */
