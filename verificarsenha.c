#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char senha[N] = {"Spfc1909"};
	char senha_user[N];
	int ok;
	
	while(1){
		printf("digite a sua senha: \n");
		gets(senha_user);
	
		ok = strcmp(senha, senha_user);
		if(ok == 0){
			printf("senha correta, seja bem vindo!! \n");
			break;
		}else
			printf("senha incorreta, digite novamente: \n");
			
		
	}
}