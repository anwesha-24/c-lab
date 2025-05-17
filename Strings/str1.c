#include<stdio.h>
void main(){
    /*char s[]="Computer Programming Lab";
    printf("%s\n",s);
    printf("%.8s\n",s);
    printf("%c\n","hello"[1]);
    char s1[]={'A','N','U'};
    for(int i=0;i<3;i++){
        printf("%c",s1[i]);
    }
    char N[10]="Rich";
    N[2]='\0';
    printf("\n%10s",N);
    char name[30];
    printf("Enter name: ");
    fgets(name,40,stdin);
    puts(name);
    char s2[]="Hello, World";
    printf(">>%-20.4s<<\n",s2);
    printf(">>%20.4s<<\n",s2);
}*/
/*void print(char a[]);
    char fname[]="Anwesha";
    char lname[]="Roy";
    print(fname);
    print(lname);
}
void print(char a[]){
    for(int i=0;i!='\0';i++){
        printf("%c",a[i]);
    }
    printf("\n");
}*/
    /*char str[50];   
    printf("Enter a string : ");
//Option 1 to read and print string
    scanf("%[^\n]s",str);
    printf("You entered: %s", str);
}*/
    char string1[20];
    char string2[20];
    strcpy(string1,"Welcome");
    strcpy(string2,"ToPCclass");
    printf("Returned String : %s\n", strcat( string1, string2 ));
    printf("Concatenated String : %s\n", string1 );
}