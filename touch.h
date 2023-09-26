#if (defined(__APPLE__) && defined(__MACH__)) || defined __unix__
#include "linux.c"
#define LNE "\n"
#define LNS "/"
#define isdir dir_exists
#define makedir dir_create
#define isfile file_exists
#define makefile file_create
#define FIRST_SLASH 1
#elif defined(_WIN32) || defined(WIN32) 
#include "windows.c"
#define LNE "\r\n"
#define LNS "\\"
#define isdir dir_exists_w32
#define makedir dir_create_w32
#define isfile file_exists_w32
#define makefile file_create_w32
#define FIRST_SLASH 0
#endif

#define MAX_DIR_LEN 64
#define MAX_DIRS 16

// Declaration for unix
unsigned char dir_exists(char *dir_path);
void dir_create(char *dir_path);
unsigned char file_exists(char *file_path);
void file_create(char *file_path);

// Declaration for windows
unsigned char dir_exists_w32(char *dir_path);
void dir_create_w32(char *dir_path);
unsigned char file_exists_w32(char *file_path);
void file_create_w32(char *file_path);

