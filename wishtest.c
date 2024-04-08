#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

void modo_interativo();
void modo_batch(FILE *file);

#define MAX_ARGS 10
#define MAX_ARG_LEN 50

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
char *input = NULL;
size_t input_tam = 0;

while (1) {
    printf("wish> ");
    ssize_t bytes_lidos = getline(&input, &input_tam, stdin);
       if (bytes_lidos == -1 || strcmp(input, "exit\n") == 0){
       exit(0);
                                                             }
        
       if (input[bytes_lidos - 1] == '\n'){
           input[bytes_lidos - 1] = '\0';
                                          }
      char *token;
      int len = strlen(input);
      for(int i = 0; i < len; i++)
      {
                
		if(&input[i] == " ")
		{
		 token = strsep(&input," ");	
		}
      }
   
           char *path = "/bin", *pathe = "/usr/bin";
           int s = access(path, X_OK);
           int su = access(pathe, X_OK);
           if (s == 0 || su == 0)
      {
       rc = fork(); //cria uma cópia idêntica do processo e retorna aqui mesmo   
       if (rc == 0) 
       { // child (filho)
               char *myargv[10];
               myargv[0] = strdup("/bin/");           
               myargv[1] = strdup("-l");
               myargv[3] = NULL;  // importante
       
               execv(myargv[0], myargv);
                      
       }//if rc
     }//if access successful(possible)....
              else { //parent (pai)
        rc  = (int) wait(NULL); //BLOCKS PARENT (until child done)
             } 
        
                   
       } //while       
                      }//modo interativo
                      
       
       
      
      
void modo_batch(FILE *fp)
{
 
}
