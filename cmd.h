char * call_getcwd();
char ** parse( char * in, char * del);
void execute (char * str);
void feed(char * in);
void sigintHandler(int sig_num);
void printSajictorPrompt ();
int has_out(char * line);
int has_in (char * line);
int has_pipe (char * line);
void exepipe(char * line);
void exeout (char * line);
void exein (char * line);
