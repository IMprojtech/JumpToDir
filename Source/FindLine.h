
int FLine (char *str){
   
    char buf[MaxLine];    
    char *res;
    int line=0;

    while(1) { line+=1;
        res=fgets(buf, MaxLine, PtrFile);
        buf[strcspn(buf,"\n")] = '\0';
       
        if(res == NULL){
            line=0;
            break;
        }

        if (strcmp (buf , str) == 0){
            break;            
        }
    }

    return line;
}
