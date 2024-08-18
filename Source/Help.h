
void Print_Help() {
    printf("NAME\n");
    printf("    jtd - JumpToDir\n\n");
    printf("SYNOPSIS\n");
    printf("    jtd [command] [option]\n\n");
    printf("DESCRIPTION\n");
    printf("    JumptoDir alias \"jtd\" is a simple utility to\n");
    printf("    quickly save, restore, and navigate between frequently used directories.\n\n");
    printf("COMMAND LIST\n");
    printf("    save    Save the current directory to the list of frequently used directories.\n");
    printf("            Usage: jtd save\n");

    printf("    go      Go to a directory from the list of saved directories.\n");
    printf("            Usage: jtd go [number] or jtd go\n");
    printf("            - Without arguments: Lists all saved directories.\n");
    printf("            - With a number: Navigates to the directory at the specified position in the list.\n");

    printf("    undo    Remove the current directory from the list of saved directories.\n");
    printf("            Usage: jtd undo\n");

    printf("EXAMPLE:\n");
    printf("    jtd save  ->  Save your current directory\n");
    printf("    jtd go  ->  List all saved directories\n");
    printf("    jtd go 2  ->  Go to the second saved directory\n");
    printf("    jtd undo  ->  Remove the current directory from the saved list\n\n");

    printf("NOTES:\n");
    printf("    The tool uses a file in your home directory (e.g., ~/.dirlist) to store the list of saved directories.\n");
    printf("    This allows you to quickly switch between directories in different terminal sessions, improving your workflow efficiency.\n");

    printf("ALIASES:\n");
    printf("    You can create aliases to quickly switch directories. Add the following to your ~/.bashrc or ~/.zshrc:\n\n");
    printf("    alias sd='jtd save'\n");
    printf("    alias ud='jtd undo'\n\n");
    printf("    #Function to change the path on the shell\n");
    printf("    gd() {\n");
    printf("        if [ \"$#\" -eq 1 ]; then\n");
    printf("            cd $(jtd go \"$1\")\n");
    printf("        else\n");
    printf("            jtd go\n");
    printf("        fi\n");
    printf("    }\n\n");

    printf("AUTHOR\n");
    printf("    Written by  Catoni Mirko (IMprojtech)\n\n");
    printf("VERSION\n");
    printf("    1.0\n\n");
}
