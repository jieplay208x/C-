#include <stdio.h>
int my_strlen(char* str)
{
        int c= 0;
            while(*str!='\0')
                {
                            c++; 
                                    str++;
                }
                    return c;
}
int main()
{
        char arr[]="love";
            printf("%d \n",my_strlen(arr));
                return 0;
}

}
                }
}