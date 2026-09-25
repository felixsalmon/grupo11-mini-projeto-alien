#include <stdio.h>
 
int main(){
    char str[10000+1];
    int n, cl, cv, cc, i;
 
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", str);
        cl = cv = cc = 0;    
        i = 0;
        
        while(str[i] != '\0'){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                cl++;
                
                if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
                   str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                    cv++;
                }
            } 
            i++; 
        }
        
        cc = cl - cv;
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", cl, cv, cc);
    }
    return 0;
}