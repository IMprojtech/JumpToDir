
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <limits.h>

#define MaxLine 1024

FILE *PtrFile;
FILE *PtrFileTemp;
char FileName[1024];
char FileNameTemp[1024];

#include "Error.h"
#include "Help.h"
#include "FindLine.h"
#include "SaveDir.h"
#include "UndoDir.h"
#include "GoDir.h"
