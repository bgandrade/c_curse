#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int isValidIp(const char *ipString){
    char ip[250];
    char delimiter[] = ".";
    char *token, *endPtr;
    int tokenCount = 0;

    //faz uma copia da string
    strncpy(ip, ipString, 250);

    token = strtok(ip, delimiter);

    while (token != NULL)
    {
        int ret = strtol(token, &endPtr, 10);
        if (!(*endPtr == '\0' && ret >= 0 && ret <= 255)){
            return false;
        }
        tokenCount++;
        token = strtok(NULL, delimiter);
        
    }
    if (tokenCount != 4) return false; // Precisa ter exatamente 4 octetos
    
    return true; //passou por todas as validações, IP válido
}

int main()
{
	char ip[] = "127.0.1..250";

    if (isValidIp(ip)){
        printf("%s is a valid IP address\n", ip);
    }
    else {
        printf("%s is not a valid IP address\n", ip);
    }

	return 0;
}
