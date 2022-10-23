#include <stdio.h>
int jc(int x)
{
        int num=0;
            if(x>1)
                {
                             num=x*jc(x-1);
                }
                   else if(x<=1)
                      {
                                 num=1;
                      }
                          return num;
}
int main()
{
        int n = 0;
            scanf("%d",&n);
                printf("%d",jc(n));
                    return 0;
}

}
                      }
                }
}