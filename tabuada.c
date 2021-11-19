#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
    int num;
    char tab;
    	
    do{
    	printf("Digite a operação da tabuada (+, -, *, /): \n\t\t\t\n>>> ");
    	scanf("%s", &tab);
	
    	switch(tab){
    		int i;
    		
    		case '+':
    			printf("Digite o número: \n\t\t\t\n>>>");
    			scanf("%d", &num);
			    for(i=1; i<=10; ++i){
			        printf("%d+%d = %d\n", num, i, num + i);
			    }
		    	printf("\n");
		    break;
		    	
	    	case '-':
	    		printf("Digite o número: \n\t\t\t\n>>>");
    			scanf("%d", &num);
			    for(i=1; i<=10; ++i){
			        printf("%d-%d = %d\n", num, i, num - i);
			    }
	    		printf("\n");
	    	break;
	    	
			case '*':
				printf("Digite o número: \n\t\t\t\n>>>");
    			scanf("%d", &num);
			    for(i=1; i<=10; ++i){
			        printf("%dx%d = %d\n", num, i, num * i);
			    }
			    printf("\n");
			break;
			
			case '/':
				printf("Digite o número: \n\t\t\t\n>>>");
    			scanf("%d", &num);
			    for(i=1; i<=10; ++i){
			        printf("%d/%d = %d\n", num, i, num / i);
			    }
			break;
			
			default:
				printf("\t Operador incorreto \n");
		}
	}while(tab);
		

    return 0;
}

