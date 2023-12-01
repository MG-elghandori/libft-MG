#include "libft.h" 
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
//======================ft_isalpha
//int main() {
   // int c = 'H';
    //if (ft_isalpha(c)) {
    //    printf("%c est une lettre \n", c);
   // } else {
    //    printf("%c n'est pas une lettre \n", c);
   // }
 //   return 0;
//}

//=======================ft_isdigit
//int main() {
    //char d = '2';
    //if (ft_isdigit(d)){
        //printf("%c est une digit \n", d);
    //} else {
        //printf("%c n'est pas une digit \n", d);
    //}
    //return 0;
//}

//=======================ft_isalnum
//int main() {
   // char c = '+';
    //if (ft_isalnum(c)){
       // printf("%c est une alphanumeric \n", c);
   // } else {
       // printf("%c n'est pas une alphanumeric \n", c);
   // }
    //return 0;
//}

//=======================ft_isascii

/*
int main() {
    char c = '\177';
    if (ft_isascii(c)){
        printf("%c est une ascii \n", c);
    } else {
        printf("%c n'est pas une ascii \n", c);
    }
    return 0;
}
*/

//=======================ft_strlen
/*int main() {
  char c[] = "5gfgt";
  printf("%zu",ft_strlen(c));
    return 0;
} */

//=======================ft_memset

//----exemple 1:
/*
int main()
{
    int a =0;
    ft_memset(&a,2,1);
    printf("%d",a);
    return (0);
}
*/
//(output: 2)

//-----OR:
/*
int main()
{
    int a =0;
    ft_memset(&a,2,2);
    printf("%d",a);
    return (0);
}*/
//------OR:
/*
int main()
{
    char a[] ={5,4};
    ft_memset(&a,2,4);
    printf("%d",a[1]);
    return (0);
}*/
//(output: 2)

//----exemple 2:

/*
int main() {
    int b;
    ft_memset(&b,4,4);
    printf("%d\n", b);
    return 0;
    //dans console avec desimal : 67372036
   //dans memoire avec binaire: 100000001000000010000000100
} 
*/

/*
int main() {
    char b[]={12};
    ft_memset(&b,4,4);
    printf("%d\n", b[0]);
    return 0;

}*/

//----exemple 3:(overflow)
/*
int main()
{
    int a = 0;
    //ft_memset(&a,256,1);//(output: 0)
    //ft_memset(&a,257,1);//(output: 1)
    ft_memset(&a,258,1);//(output: 2)
    printf("%d",a);
    return (0);
}
*/

//----exemple 4:(overflow)
// cette exemple dans 4 byte
/*
int main() {
   int a = 0;
   ft_memset(&a,258,4);
   printf("%d\n", a);
} */
//dans console avec desimal : 33686018
//dans memoire avec binaire:10000000100000001000000010

//------exemple5 : int  = 4byte

/*
int main()
{
    int a = 0;
    ft_memset(&a,4,3);
    ft_memset(&a,2,1);
    printf("%d",a);
    return (0);
}
*/
//dans console avec desimal : 263170
//dans memoire avec binaire:1000000010000000010
//                           4    4    4     2

//----------------13

/*
int main()
{
    int a = 0;
    ft_memset(&a,57,1);
    ft_memset((char *)&a+1,5,1);
    printf("%d",a);
    return (0);
}
*/

//----------------2002
/*
int main()
{
    int t= 0;
    ft_memset(&t,210,1);
    ft_memset((char *)&t+1,7,1);
    printf("%d",t);
    return (0);
}
*/
///////////////////////////////
/*
int main() {
    int a=1;
   ft_memset(&a,257,4);
    printf("%d\n", a);

    int b;
    ft_memset(&b,2,4);
    printf("%d\n", b);

    return 0;
} 
*/

//--------------------------expliquqtion:

// memset(&b, 2, 4)
 
//  0000010 0000010  0000010  0000010

// 1 0000000
// 100000001

//----------------------------------infos
//(RapidTables)=>site de convestion
//8 bits = l'équivalent d'un 1 octet
//et 1 octet est égal à 1 byte, et 8 octets équivalent à 8 bytes. 

//--------------------1111
/*
int main() {
    int b;
    ft_memset(&b,1,5);
    printf("%d\n", b);
    return 0;
} */
//output:16843009 (int = 4 byte)

//--------------SIMO:
/*
int main()
{
	char a [5];
	ft_memset((char*)&a,83,1);
	ft_memset((char*)&a+1,73,1);
	ft_memset((char*)&a+2,77,1);
	ft_memset((char*)&a+3,79,1);

	printf("%s",a);
}*/
//=======================ft_bzero

// int main() {
//     int a;
//     ft_bzero(&a,4);
//     //cas:
//     // ft_bzero(&a,0);
//     printf("%d\n", a);
//     return 0;
// } 

//-------------------test
/*
int main() {
    char  a[] ="123456789";
    ft_bzero((int *)a+2,1);
    printf("%s\n",a);
    return 0;
}
*/
//output(1234567800)

//=======================ft_memcpy
/*
int main() {
    char src[5]="abcde";
    char d[5];
    ft_memcpy(d, src, 5); 
    printf("d est :%s\n",d);
    return 0;
} 
*/
//---------exemple2 pour add:
/*
#include <string.h> 

int main() {
    char src[4]="aa";
    char d[4]="bcde";
   ft_memcpy(d, src, 2); 
    printf("d est :%s\n",d);
    return 0;
} 
*/
//output:aade

//--------cas speciale:
/*
int main() {
    char *src="hi";
    
    ft_memcpy(src, src, 2); 
    printf("d est :%s\n",src);
    return 0;
} */
//---------exemple overflow
/*int main() {
    char src[5]="abc";
    char d[3];
    ft_memcpy(&d, &src, 5); 
    printf("d est :%s\n",d);
    printf("src est :%s\n",src);
    return 0;
} */ 

//---------overlap exemple:
/*int main() {
char d[] = "lasalle";
    ft_memcpy(d+2,d,2);
    printf("%s\n", d);
    return 0;
}*/
//+++++++++++++++
//./a.out
//sssst


//====================ft_memmove
//probleme overlap

/*
int main() {
char d[]="co\0mments";
    // ft_memmove(d+2,d,1);
    // printf("%s\n", d); 
    // memcpy(d+3,d,4);
    ft_memmove(d,d,4);
    char p[] = "co\0mments";
    memmove(p,p,4);
    printf("%s\n", d+4); 
    printf("%s\n", p+4); 
    return 0;
}
*/
//------cas2:
/*
int main() {
	 char *s = "test";
	 printf ("%s", (char *)ft_memmove(s,s,6));

}*/
//====================ft_strlcpy
/*
int main() {
    char src[] = "Worlddd";
    char des[5];
    unsigned int copied_len = ft_strlcpy(des, src, 5);
    printf("Copied: %s\n", des);
    printf("Length: %u\n", copied_len);
    return 0;
}
*/

//---------

/*
int main() {
    char src[] = "Worlddd";
    char des[5];
    unsigned int copied_len = ft_strlcpy(NULL, src, 0);
    printf("Copied: %s\n", des);
    printf("Length: %u\n", copied_len);
    return 0;
}*/

//====================ft_strlcat

/*
int main() {
    char src[] = "cv";
    char des[5]="salut";
    unsigned int copied_len = ft_strlcat(des,src,2);
    printf("Copied: %s\n", des);
    printf("Length: %u\n", copied_len);
    return 0;
}

*/
//-------------cas lenght de src
/*
int main()
{
    char *dst = NULL;
    const char src[] = "Hello, world!";
    size_t dstsize = 0;
    size_t result = ft_strlcat(dst, src, dstsize);
    printf("Résultat : %zu\n", result);
    return 0;
}
*/
//====================ft_toupper
/*
int main() {
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}
*/
//====================ft_tolower

/*
int main()
{
    char c, result;

    c = 'M';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'm';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}
*/

//====================ft_strrchr

/*
int main()
{
   const char str[] = "www.tu.com";
   const char ch = '.';
   char *ret;
   char *ret2;

   ret = ft_strrchr(str,ch); 
   ret2 = strrchr(str,ch); 
   printf("String after is: %s\n",ret);
   printf("String after is: %s\n",ret2);
}*/
//------------
/*
int main()
{
	printf ("%s", ft_strrchr(NULL,'c'));
} */
//====================ft_strchr

/*
int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("%s", ret);
   
   return(0);
}*/

//output(.tutorialspoint.com)

//----------------------------
/*
int main ()  
{  
    const char str[] = "\0";  
    const char ch = '\0'; 
    char *ptr; 
    ptr = ft_strchr(str, ch);  
    ptr = strchr(str, ch);  
    printf ("rslt:%s\n", ptr);  
    printf ("rslt:%s", ptr);  
    return 0;  
}  */
//---------cas de si entrez \0
/*int main ()  
{  
    const char str[] = "Use \0strchr() function in C.";  
    const char ch = '\0'; 
    char *ptr; 
    char *ptr2;
    ptr = ft_strchr(str, ch);  
    ptr2 = strchr(str, ch);  
    printf (" rslt:'%s\n' ", ptr + 1);  
    printf (" rslt:'%s\n' ", ptr2 + 1);  
    return 0;  
}  */
//------------
/*
int main()
{
	printf("%s\n",ft_strchr("abcd\0gtr", '\0') + 1);
}*/
//====================ft_strncmp
/*
int main() {
    printf("%d",ft_strncmp("hi","ha"));
}
*/

/*
int main() {
    const char *s1 = "Hella";
    const char *s2 = "Hello";
    size_t n = 5;

    int result = ft_strncmp(s1, s2, n);

    if (result < 0) {
        printf("s1 is less than s2\n");
    } else if (result > 0) {
        printf("s1 is greater than s2\n");
    } else {
        printf("s1 is equal to s2\n");
    }
    return 0;
}
*/


/*
int main() {
    const char *s1 = "abcdef";
    const char *s2 = "abc\375xx";
    size_t n = 5;

    int result = strncmp(s1, s2, n);

    // if (result < 0) {
    //     printf("0");
    // } else if (result > 0) {
    //     printf("1");
    // } else {
    //     printf("-1");
    // }
    printf("%d",result);
     return 0;

}
*/

//====================ft_memchr
/*
int main () {
   const char str[] = "www.tutorial";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch,ft_strlen(str));

   printf("String %s", ret);

   return(0);
} */
//-----exemple:
/*
int main () {
   const char str[] = "www.tutorial";
   const char ch = '.';
   char *ret;
   
   ret = ft_memchr(str, ch,2);

   printf("String %s", ret);

   return(0);
}
//null
*/

//====================ft_memcmp
/*
int main()
{
   const char str1[] = "Hello";
    const char str2[] = "Hello";
    size_t n = 5; 

    int result = ft_memcmp(str1, str2, n);

    if (result < 0) {
        printf("la première est plus petite.\n");
    } else if (result > 0) {
        printf("la première est plus grande.\n");
    } else {
        printf("Les zones de mémoire sont identiques.\n");
    }
    return 0;
} */

//------cas special:
//si depase 200 le programe lire avec decemal donc 200 = 128 avec  decemal et avec char donne error si unsigned char pas probleme
/*
int main()
{
   const char str1[] = "\200";
    const char str2[] = "\0";
    size_t n = 5; 

    int result = memcmp(str1, str2, n);

    if (result < 0) {
        printf("la première est plus petite.\n");
    } else if (result > 0) {
        printf("la première est plus grande.\n");
    } else {
        printf("Les zones de mémoire sont identiques.\n");
    }
    return 0;
} */

//-----------cas
/*
int main()
{
   const char str1[] = "\0";
    const char str2[] = "\0";
    size_t n = 5; 

    int result = ft_memcmp(str1, str2, n);
    int result = memcmp(str1, str2, n);

   printf("%d",result);
    return 0;
}
*/
//output:-37

//-----------cas
/*
int main()
{
    printf("%d",ft_memcmp(NULL,NULL,0));
    return(0);
}
*/
//segmentation fault;

//====================ft_strnstr
/*
hello
	lo 
	4
*/

/*
int    main(void)
{
    char source[] = "bonjour cv bien";
    char target[] = "jou";

    // char source[] = "bonjour cv bien";
    // char target[] = "jox"; (donnr null)

    char *result = strnstr(source, target,6);
        printf("rslt:%s",result);
    return (0);
}*/
//-------cas 2:
// int main()
// {
// 	printf("%s",ft_strnstr(NULL,"yy",0));//null
//  printf("%s",ft_strnstr(NULL,NULL,0));//segmentation
// }
//=================ft_atoi 
/*
int main() {
    const char *str = "-123";

    int result = ft_atoi(str);
    int result2 = atoi(str); 

    printf("Résultat  : %d\n", result);
    printf("Résultat2  : %d\n", result2);

    return 0;
}*/

//exemple overflow de min_nombre
/*
int main() {
    const char *str = "-92233720368547758080";
    const char *str2 = "-92233720368547758080";

    int result = ft_atoi(str); //0
    int result2 = atoi(str2); //0

    printf("Résultat  : %d\n", result);
    printf("Résultat2  : %d\n", result2);

    return 0;
}*/

//exemple overflow de max_nombre:
/*
int main() {
    const char *str = "92233720368547758080";
    const char *str2 = "92233720368547758080";

    int result = ft_atoi(str); //-1
    int result2 = atoi(str2); //-1

    printf("Résultat  : %d\n", result);
    printf("Résultat2  : %d\n", result2);

    return 0;
} */

//------------------
/*
int main() {
    const char *str = "92233720368547758080";
    const char *str2 = "92233720368547758080";

    int result = ft_atoi(str); //-1
    int result2 = atoi(str2); //-1

    printf("Résultat  : %d\n", result);
    printf("Résultat2  : %d\n", result2);

    return 0;
}
*/
//==============ft_calloc
/*
int main()
{
    int *p;
    p=ft_calloc(2,sizeof(int));
    printf("%d\n",p[0]);
    printf("%d",p[1]);
    return 0;
}
*/
//--------------cas segfault:
/*

int main()
{
    int *p;
    int *t=ft_calloc(SIZE_MAX,SIZE_MAX);
    printf("%d",t[0]);
    return 0;
}
*/
//----------cas 2
/*
int main() {
    int *p = ft_calloc(0, 0); 
    printf("%d\n", *p);
    free(p);
    return 0;
}
*/

//==============ft_strdup

//=======================================
//=================partie2===============
//=======================================

/*
int main()
{ 
    //char *rslt = ft_substr(NULL, 6, 20);//(output:NULL)
    //char *rslt = ft_substr("", 6, 20);//(output:"\0")
    //char *rslt = ft_substr("hola", 6, 20);//(output:"\0")
    //char *rslt = ft_substr("hola", 0, 20);//hola
    // char *rslt = ft_substr("hola", 0, 0);//(output:"\0")
    //char *rslt = ft_substr("", 0, 0);//(output:rien)

    //char *rslt = ft_substr("hola", 12, 5);//(output:"\0")
    printf("Résultat : %s\n", rslt);
    return 0;
}
*/


//==============ft_substr
/*
int main()
{
char d[] = "salut";
    char *rslt = substr(d, 2, 3);
    printf("%s",rslt);
    return 0;
}
*/
//---------cas1;

/*
int main()
{
char d[] = "salut";
    char *rslt = ft_substr(d, 8, 3);
    printf("%s",rslt);
    return 0;
}
*/
//-------cas2:
/*
int main()
{
char d[] = "salut";
    char *rslt = ft_substr(d, 4, 3);
    printf("%s",rslt);
    return 0;
}

*/
//-----------cas3:

/*
int main()
{
    char d[] = "salut";
    char *rslt = ft_substr(d, 2, 4);
    printf("Résultat : %s\n", rslt);
    return 0;
}
*/

//============ft_strjoin

/*
int main()
{
   char *p1="sal";
   char *p2="ut";
    char *rslt = ft_strjoin(p1, p2);
    printf("%s",rslt);
    return(0);
}
*/

//---------------------
/*
 	char *s1 = "my favorite animal is ";
 	char *s2 = s1 + 20;
 	char *res = ft_strjoin(s2, s1);

 	if (!strcmp(res, "s my favorite animal is "))
 		exit(TEST_SUCCESS);
 	exit(TEST_FAILED);
*/

//============ft_strtrim
//exemple: 
// char * test ="**test**" ;
// et dans ft_strtrim(test,"*t") //output: es

//------------------
/*
int main()
{
    char r[] = "**test**";
    char *trimmed = ft_strtrim(r, "*t");

    printf("%s\n", trimmed);

    free(trimmed);

    return 0;
}
*/
//-----------------
/*
int main()
{
	printf("%s",ft_strtrim("ayoub",NULL));
}*/
///----------------
/*
int main()
{
    const char *s1 = "   Bonjour, monde!   ";
    const char *set = " ";
    char *trimmed = ft_strtrim(s1, set);
    printf("Chaîne coupée : '%s'\n", trimmed);
    free(trimmed);
    return 0;
} */
//output: Bonjour, monde! 

//-------------test2:
// int main()
// {
// char *s1 = "  \t \t \n   \n\n\n\t";
//  	char *s2 = "";
//  	char *ret = ft_strtrim(s1, " \n\t");
//     printf("%s\n", ret);
//     return(0);
// }
//output('\0')
//----------------test3:
// int main()
// {
//     char s1[] = "****";
//     if (!(strtrim = ft_strtrim(s1, "*")))
//         ft_print_result("NULL");
//     else
//         ft_print_result(strtrim);
//     if (strtrim == s1)
//         ft_print_result("\nA new string was not returned");
//     return(0);
// }
//output('\0')
//-------------test4:
/*
int main()
{
    const char *s1 = "lorem \n ipsum \t dolor";
    const char *set = " ";
    char *ret = ft_strtrim(s1, set);
    printf("%s\n", ret);
    free(ret);
    return 0;
}
*/
//output(lorem \n ipsum \t dolor)

//-----------test5:
/*
int main()
{
    const char *s1 = "Mohammed";
    const char *set = "ed";
    char *ret = ft_strtrim(s1, set);
    printf("%s\n", ret);
    free(ret);
    return 0;
} */
//output(Mohamm)

//---------test6:

/*
int main()
{
    const char *s1 = "Mohammed";
    const char *set = "edM";
    char *ret = ft_strtrim(s1, set);
    printf("%s\n", ret);
    free(ret);
    return 0;
}
*/
//++++++++or:
/*
int main()
{
    const char *s1 = "Mohammed";
    const char *set = "Med";
    char *ret = ft_strtrim(s1, set);
    printf("%s\n", ret);
    free(ret);
    return 0;
}
*/
//output(ohamm)

//---------tests7:
// ft_strtrim("", "")     //('\0')
// ft_strtrim("abcd", "") //(abcd)
// ft_strtrim("", "cdef") //('\0')

//===========ft_split :

/*
int main()
{
    char *src ="salut,cv";
    char op = ',';
    char **rs =ft_split(src,op);

    printf("%s",*rs);
    return (0);
}
*/

//---------------
/*
int main() {
    char *src ="salut,cv,bien,frero";
    char op = ',';
    char **rs =ft_split(src,op);
    int i = 0;

    while (rs[i])
    {
        printf("%s\n", rs[i]);
        i++;
    }
    free(rs);

    return 0;
} 
*/

//----------------
/*
int main() {
    char *src ="zfzfzgggz";
    char op = 'z';
    char **rs =ft_split(src,op);
    int i = 0;

    while (rs[i])
    {
        printf("%s\n", rs[i]);
        i++;
    }
    free(rs);

    return 0;
} 
*/
//------------------

/*
int main()
{
  char **rs=ft_split("lor ips, el. Su",' ');
  printf("%s",rs[0]);
  return 0;
}
*/

//--------------------

/*
int main()
{
    char**t= ft_split("  hello world ", ' ');
    int i = 0;
    while (i < 5)
        printf("%s\n", t[i++]);
}
*/

//------------------Probleme test de cas de free les seconder sans principal
//soution
// int main()
// {
// 	char *str = "hello this is the split test";
// 	char **word = ft_split(str, ' ');
// 	if (word == NULL)
// 		printf("NULL");
// 	for (int i = 0; word[i] != NULL; i++)
// 	{
// 		printf("%s\n", word[i]);
// 		free(word[i]);
// 	}
// 	free(word);
// 	system("leaks a.out");
// }

//===========ft_itoa :

/*
int main()
{
    // int n =-12345; //tst1(output:-12345)
    int n =12345; //tst1(output:12345)
    //int n = 0;
    //int n = -2147483648LL;
    char *s=ft_itoa(n);
    printf("%s",s);
    free(s);
    return(0);
}
*/


//==============ft_strmapi :

/*

char my_func(unsigned int i, char c)
{
    return c;
}

int main()
{
    char *tst;
    tst = ft_strmapi("Hello", my_func);
    printf("%s\n", tst);
    free(tst);
    return 0;
}

*/

//----------------------------
 
/*
char my_func(unsigned int i, char c)
{
    return c;
}

int main()
{
    char *tst;
    tst = ft_strmapi(0, 0);
    printf("%s\n", tst);
    free(tst);
    return 0;
}
*/

//==============ft_striteri :

/*
void my_func2(unsigned int i, char *p)
{
    *p = *p;
}

int main()
{
    char str[] = "Mohammed";
    ft_striteri(str, my_func2);
    printf("%s\n", str);
    return 0;
}
*/

//==============ft_putchar_fd :
//exemple:

/*
#include <ctype.h>

int main(void)
{
    char c;
    c = 'k';

    int fd;
    if (isupper(c))
    {
      fd = 3;
    }
    if(fd == 3)
    {
        printf("ERROR");
    }else{
        ft_putchar_fd(c,1);
    }

    return (0);
}
*/
//------exemple2:

/*
int main(void)
{
    int fd;

    fd = open("abcd.txt", O_WRONLY | O_CREAT,700);
    // if (fd == -1)
    //     return (1);

    ft_putchar_fd('A', fd);
    // close(fd);
    return (0);
}
*/

//---------exmpe3:
/*
int main(void)
{
char a='c';
FILE *fd=fopen("hi.txt","w");
ft_putchar_fd('x',fileno(fd));
fclose(fd);
    return (0);
}*/
//==============ft_putstr_fd :

/*
int main()
{
    char *tbl="salut";
    ft_putstr_fd(tbl,1);
    return (0);
}
*/
//-------
/*
int main(void)
{
	ft_putstr_fd(NULL,1);
}
*/
//================ft_putendl_fd :

// int main ()
// {

//     return (0);
// }

//==============linking_list==========:


//--------------ft_lstnew:

/*
int main()
{
    int data = 10;
    t_list *new_element = ft_lstnew(&data);
    int data2 = 11;
    t_list *new_element2 = ft_lstnew(&data2);

    printf("%d\n",*(int *)new_element->content);
  
    free(new_element);
    free(new_element2);
    return(0);
}
*/

//------------ft_lstadd_front:

/*
int main()
{
    int a=1;
    t_list *element1 = malloc(sizeof(t_list));
    element1->content = &a;
    element1->next = NULL;
    int b=2;
    t_list *element2 = malloc(sizeof(t_list));
    element2->content = &b;
    element2->next = NULL;


    while (element1)
    {
        printf("%d\n", *(int*)(element1->content));
        element1 = element1->next;
    } 
    ft_lstadd_front(&element1, element2);
    printf("apres\n");
    while (element1)
    {
        printf("%d ", *(int*)(element1->content));
        element1 = element1->next;
    }
    free(element2);
    free(element1);
    return 0;
}
*/

//--------------ma main:

/*
int main()
{
    int data1 = 132;
    t_list *element1 = ft_lstnew(&data1);

    int data2 = 44;
    t_list *element2 = ft_lstnew(&data2);

    
    ft_lstadd_front(&element2, element1);

    t_list *ptr = element1;
    while(ptr)
    {
        printf("%d\n",*(int*)ptr->content);
        ptr = ptr->next;
    }
    return 0;
}
*/

//------------ft_lstsize:

/*
int main()
{
    int data1 = 10;
    t_list *element1 = ft_lstnew(&data1);

    int data2 = 44;
    t_list *element2 = ft_lstnew(&data2);

    int data3 = 4;
    t_list *element3 = ft_lstnew(&data3);

    element1->next = element2;
    element2->next = element3;

    printf("La taille : %d\n", ft_lstsize(element1));
    return(0);
}
*/

//------------ft_lstlast:

/*
int main()
{
    int a =1;
    t_list *first = ft_lstnew(&a);
    first->next=NULL;

    int b =2;
    t_list *second = ft_lstnew(&b);
    first->next=second;

    int c = 3;
    t_list *last = ft_lstnew(&c);
    second->next = last; 

    t_list *tst = ft_lstlast(first); 
    printf("%d", *((int*)tst->content)); 

    free(last);
    free(second);
    free(first);
    return 0;
}
*/

//------------ft_lstadd_back:
/*
int main()
{
    int a =1;
    t_list *first=ft_lstnew(&a);
    int b =2;
    t_list *second=ft_lstnew(&b);

    ft_lstadd_back(&first,second);
    while (first)
    {
        printf("%d\n", *(int*)(first->content));
        first = first->next;
    }
    return(0);
}
*/
//---exemple2:
/*
void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    t_list *head;

    head = ft_lstnew(1);
    ft_lstadd_back(&head, ft_lstnew(2));
    ft_lstadd_back(&head, ft_lstnew(3));
    print_list(head);
    return (0);
}
 */
//------------ft_lstdelone:

/*
void del(void* v)
{
   v=NULL;
}

int main()
{
    int a =1;
    t_list *first=ft_lstnew(&a);
    int b =2; 
    t_list *second=ft_lstnew(&b);

    ft_lstdelone(first,del);
    printf("%d",*(int*)first->content);
}
*/

//------------ft_lstclear:
/*
void del(void* v)
{
   v=NULL;
}

int main()
{
    int a =1;
    t_list *first=ft_lstnew(&a);
    int b =2; 
    t_list *second=ft_lstnew(&b);

    ft_lstclear(&first,del);
    printf("%d",*(int*)first->content);
}
*/

//--------------ft_lstiter:

/*
void add(void* v)
{
   *(int*)v=257;
}

int main()
{
    int a =1;
    t_list *first=ft_lstnew(&a);
    int b =2; 
    t_list *second=ft_lstnew(&b);

    ft_lstiter(first,add);
    printf("%d\n",*(char *)first->content);
}
*/

//-------------------ft_lstmap:

/*
void del(void *content)
{
    content = NULL;
}
void *f(void *c)
{
    *(int *)c = 14;
    return c;
}
int main()
{
    int a =12;
    t_list *head = ft_lstnew(&a);
    ft_lstmap(head, f, del);
    
    printf("%d\n", *(int*)head->content);
    
    return 0;
}
*/

//===============



/*
void *ft(void *n)
{
    *(int*)n=11;
    return n;
}

void dd(void * d)
{
    d = NULL;
}

int main()
{
    int a=12;
    t_list *head=ft_lstnew(&a);
    ft_lstmap(head,ft,d);
    return 0;
}
*/

///


// void *ff(void *c)
// {
// 	*(int*)c +=2;
// 	return c;
// }

// void dd(void *d)
// {
// 	d=NULL;
// }


// int main()
// {
// 	int a =21;
// 	int b =22;
// 	int c =23;
// 	t_list *f1=ft_lstnew(&a);
// 	t_list *f2=ft_lstnew(&b);
// 	t_list *f3=ft_lstnew(&c);
// 	t_list *tmp;
//     ft_lstadd_front(&f2,f1);
// 	ft_lstadd_back(&f1,f3);

// 	ft_lstmap(f1,ff,dd);
// 	tmp = f1;
// 	while(tmp)
// 	{
// 		printf("%d\n",*(int*)tmp->content);
// 		tmp=tmp->next;
// 	}
// 	if (f1)
// 		printf("%d\n",*(int*)f1->content);
	
// }

///////////
/*
void *ff(void *c)
{
	*(char*)c=ft_toupper(*(char*)c);
	return c;
}
void dl(void *d)
{
	d = NULL;
}
int main()
{
	// first second third FIRST SECOND 
	// char r1[]="s1";
	t_list * f1=ft_lstnew("first");
	t_list * f2=ft_lstnew("second");
	t_list * f3=ft_lstnew("third");

	ft_lstadd_front(&f2,f1);
	ft_lstadd_back(&f2,f3);

	ft_lstmap(f1,ff,dl);

	while(f1)
	{
		printf("%s\n",(char*)f1->content);
		f1=f1->next;
	}
}
*/