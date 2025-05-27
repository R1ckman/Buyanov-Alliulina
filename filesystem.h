#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <stdio.h>

FILE* fs_open(const char* filename);
int fs_create_file(FILE* fs, const char* filename, const char* content);
int fs_delete_file(FILE** fs, const char* filename, const char* fs_filename);
int fs_modify_file(FILE** fs, const char* filename, const char* new_content, const char* fs_filename);
char* fs_view_file(FILE* fs, const char* filename);

#endif
