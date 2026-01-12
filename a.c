// Online C compiler to run C program online
#include <stdio.h>
typedef struct {
    char nome ;
}user ;
typedef struct{
    char nome ;
}fun;
typedef struct {
    char nome[50];
    int status ;
}Livro;
void pegar_livro(Livro *p,int a ){
    if(p[a].status == 0 ){
        p[a].status = 1 ;
        printf("Qual nome do livro ?\n");
        scanf("%s",&p[a].nome);
       // printf("Qual nome do user ? \n ");
        // scanf("%s",&u[a].nome);
    }
    else{
        printf("Livro ocupado \n ");
    }
}
//status_livro(Livro *p,int a){
    
//}
int main() {
    int loop = 1 ;
    //
    fun Funcio[2];
    fun *f = &Funcio[0];
    //
    user User[3][3] = {0};
    user *u =&User[0][0];
    ///
    Livro livro[3][3] ={0} ;
    Livro *p = &livro[0][0];
    int a = 0 ;
    do{
        printf("Qual endereço do livro \n");
        scanf("%d",&a);
        pegar_livro(p,a);
        //status_livro(p,a,u);
        scanf("%d",&loop);
    }while(loop !=2);
    
    return 0;
}