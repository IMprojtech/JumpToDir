
void dpush (int argc, char *argv[]) {

    if ((PtrFile = fopen(FileName , "r+")) == NULL) {
        if ((PtrFile = fopen(FileName , "w")) == NULL){
            Error(ErrorCreationFile,FileName);
        }
    }
   
    if (argc > 2){ 
        Error(ErrorArgument,argv[2]);
    }
   
    char path[PATH_MAX];
    int line;

    realpath(argv[0], path);

    char dir_path[PATH_MAX];
    strncpy(dir_path, path, sizeof(dir_path));
    dir_path[sizeof(dir_path) - 1] = '\0';

    char *directory = dirname(dir_path);

    line=FLine(directory);
    
    if (line == 0){
        fseek(PtrFile, 0, SEEK_END);
        fprintf(PtrFile, "%s\n", directory);
    } 
    else 
        Error(AllertPresentPath,"");
    
    fclose(PtrFile);
}
