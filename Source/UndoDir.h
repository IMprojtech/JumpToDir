
void dpop (int argc, char *argv[]){

    if ((PtrFile = fopen(FileName , "r+")) == NULL) {
        Error(ErrorOpenFile,FileNameTemp);
    }
    
    strcpy(FileNameTemp, FileName);
    strcat(FileNameTemp, ".temp");

    if ((PtrFileTemp = fopen(FileNameTemp , "w")) == NULL) {
        Error(ErrorCreationFile,FileName);
    }
    
    if (argc > 2){ 
        Error(ErrorArgument,argv[2]);
    }

    char path[PATH_MAX];
    char buf[MaxLine];    
    char *res;
    int line=0;
	int current_line=0;
    
    realpath(argv[0], path);

    char dir_path[PATH_MAX];
    strncpy(dir_path, path, sizeof(dir_path));
    dir_path[sizeof(dir_path) - 1] = '\0';

    char *directory = dirname(dir_path);

    line=FLine(directory);
       
 	rewind(PtrFile); 
	rewind(PtrFileTemp); 

    while(1) { current_line+=1;
        res=fgets(buf, MaxLine, PtrFile);
       
        if(res == NULL){
            break;}
                 
        if (current_line != line) {
			fputs(buf,PtrFileTemp);
	    }        
    }     
         
    fclose(PtrFileTemp);
    fclose(PtrFile);

    remove(FileName);
    rename(FileNameTemp,FileName);
}
