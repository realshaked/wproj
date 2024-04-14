#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

void modo_interativo();
void modo_batch(FILE *file);
char *removeSpaces(char *str);
void builtin(char *string, char *arg);

int main(int argc, char *argv[]) {
    if (argc == 1) {
        modo_interativo();
    } else if (argc == 2)
    {
        FILE *pasta_b = fopen(argv[1], "r");
        if (pasta_b == NULL){
           printf("não foi possível abrir a pasta");
           
       }
        modo_batch(pasta_b);	
    } 
 return 0;
}

void modo_interativo() {

int rc;
char *input;
size_t input_tam = 0;
while (1) {
    printf("wish> ");
    if (argv[0] = "cd")
    {
    		;
    }
    ssize_t bytes_lidos = getline(&input, &input_tam, stdin);
       if (bytes_lidos == -1 || strcmp(input, "exit\n") == 0){
       exit(0);
                                                             }
        
       if (input[bytes_lidos - 1] == '\n'){
           input[bytes_lidos - 1] = '\0';
                                           }
      builtin(input);
      char *token;
      
      //STRSEP DEPOIS DO TRIM
      
      
      
      int len = strlen(input);
      char **inputdois = &input;
      removeSpaces(input);
      
      for (i = 0; i <
     
           char path[255] = "/bin/", pathe[255] = "/usr/bin/";
          
           char *pathptr[255];
           pathptr[0] = path;
           pathptr[1] = pathe;
            strcat(path,input);
            strcat(pathe,input);
            int s = access(path, X_OK);
           int su = access(pathe, X_OK);
           if (s == 0 || su == 0)
      {
      	 
      	 rc = fork(); //cria uma cópia idêntica do processo e retorna aqui mesmo   
      		 if (rc == 0) 
      	 	{ // child (filho)
      	 	for(int i = 0; i <= 1; i++)
     	  {
      	         char *myargv[10];
        	       myargv[0] = strdup(pathptr[i]);     //MUDAR      
        	       myargv[1] = strdup("-l");
        	       myargv[2] = NULL;  // importante
       
      		       execv(myargv[0], myargv);
                      
          }
        	 }//if rc
         
       	  //for
      
      
     }//if access successful(possible)....
     
              else { //parent (pai)
        rc  = (int) wait(NULL); //BLOCKS PARENT (until child done)
        printf("wish> ");
             } 
        
                   
       } //while       
                      }//modo interativo
                      
       
       
      
      
void modo_batch(FILE *fp)
{
 
}
char *removeSpaces(char *str)
{
    int count = 0;
    
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
    return str;
}

void builtin(char *string, char *arg)
{
	if(strcmp(string,"cd"))
	{
	 chdir(arg);
	}
	
	if(strcmp(string,"exit"))
	{
	 exit(0);
	}
	
	if(strcmp(string,"path"))
	{
	 
	}



}
