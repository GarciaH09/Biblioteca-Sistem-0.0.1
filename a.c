    #include <stdio.h>
    #include <string.h>
    #define Nu 50 
    #define Nl 50 
    typedef struct
    // tem erro pra krl 
    // pra ficar esperto :
    //  strcpy(p_b[a].nome, l); na hr de colocar nome no Livro
    {
        int id ;
        char nome[50];
        int status ;
        char nome_emprestado[50]; 
    }Livro;
    typedef struct
    {
        int id ;
        char nome[50];
        int status ; 
    }Usuario;
    /*int cadastro_b(int n ,){

    } */
    void  cadastro_livro(Livro *p_b){
        int a = 0 ;
        char nome[90];
        while (p_b[a].id != 0)
                        {
                        a++;
                        }
                        p_b[a].id = a;
            printf("Qual Nome do Livro \n");
            scanf("%s",nome);
                    strcpy(p_b[a].nome ,nome);
        printf("Livro Cadastrado\n");
        
    }  
    void cadastro_user(Usuario *p_u){
        int a = 0 ;
        char nome[50];
        while (p_u[a].id != 0)
                        {
                        a++;
                        }
                        p_u[a].id = a;
                        printf("Qual Nome do User \n");
            scanf("%s",nome);
                    strcpy(p_u[a].nome ,nome);
        printf("Usuario Cadastrado \n");
    }
    void verificacao_l(int n,Livro *p_b){
        printf("Nome do Livro  :%s \n",p_b[n].nome ) ;
        printf("Emprestado :%s \n", p_b[n].status ) ;
        printf("Para : %s \n", p_b[n].nome_emprestado ) ;
    }
    void verificacao_u(int n, Usuario *p_u)
    {
        
    }
    void emprestar(int id_livro , int id_user , Usuario *p_u , Livro *p_b){
        p_u[id_user].status = 1 ; 
        p_b[id_livro].nome_emprestado == p_u[id_user].nome ;
        p_b[id_livro].status = 1 ;
        if (p_u[id_user].status == 1  &&  p_b[id_livro].status == 1 )
        {
            printf("Sucesso \n");
        }
        
    }
    int main() {
        int escolha_menu_1 = 0; 
        int escolha_menu_2 = 0; ""
        Livro biblioteca[Nl];
        Livro *p_b = biblioteca ;
        Usuario User[Nu];
        Usuario *p_u=  User;
        int id_livro , id_user ; 
        /// 
        p_b[0].nome == "batata";
        p_u[0].nome == "batata";
        ///
        while (escolha_menu_1 !=4)
        {

            printf("Menu : \n 1- Cadastro \n 2- Verificar 3- Emprestar \n");
            scanf("%d",&escolha_menu_1);
            ///
            switch (escolha_menu_1)
            {
            case 1:
                printf("Menu de Cadastro : \n 1- Livro \n 2- Usuario \n");
                scanf("%d",&escolha_menu_2);
                /// 
                switch (escolha_menu_2){
                    case 1:{
                        cadastro_livro(p_b);
                        break;
                        }
                    case 2:{
                        cadastro_user(p_u);
                        break;
                        }
                        break;
                    }
                break;
            case 2:
                    printf("Menu de Verificação  : \n 1- Livro \n 2- Usuario \n");
                            scanf("%d",&escolha_menu_2);
                    switch (escolha_menu_2){
                        case 1:{
                            int n = 0 ;
                            printf("Qual id do livro \n");
                            scanf("%d",&n);
                            verificacao_l(n,p_b);
                        }break;
                            case 2:{
                                int n = 0 ;
                                    printf("Qual id do User \n");
                                    scanf("%d",&n);
                                    verificacao_u(n,p_u);
                            }
                        break;
                    }
                break;
                ///int id_livro , int id_user , Usuario *p_u , Livro *p_b
            case 3:
            printf("Qual o id do livro ?\n") ;
            scanf("%d",&id_livro) ;
            printf("Qual o id do Usuario?\n") ;
            scanf("%d",&id_user) ;
            emprestar(id_livro,id_user,p_u,p_b);
            break;
            default:
                printf("Sistem Desligando");
                break;
            }
        }
        return 0;
    }
