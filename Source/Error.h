
#define ErrorNameProg "invalid name"
#define ErrorCreationFile "file creation failed"
#define ErrorOpenFile "file opening failed"
#define ErrorArgument "argument error"
#define AllertPresentPath "path present"

void Error(char str1[], char str2[]) {
    fprintf(stderr, "[ERROR] %s %s \n", str1, str2);
    exit(EXIT_FAILURE);
}
