
void dskip (int argc, char *argv[]){

    if ((PtrFile = fopen(FileName , "r")) == NULL) {
        Error(ErrorOpenFile,FileNameTemp);
    }
   
    if (argc > 3){ 
        Error(ErrorArgument,argv[3]);
    }
    
    char buf[MaxLine];    
    char *res;
    int line=0;

    while(1) { line++;
        res=fgets(buf, MaxLine, PtrFile);
        buf[strcspn(buf,"\n")] = '\0';
        
        if(res == NULL)
            break;
    
        if (argc == 2)
            printf("%d | %s \n",line,buf);
        
        else { 
            int x=atoi(argv[2]);

            if (line == x){
                printf("%s \n",buf);
            }
        }
    }
    fclose(PtrFile);
}
