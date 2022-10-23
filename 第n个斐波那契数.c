#include <stdio.h>
int fbnqs(int x)
{
        if(x<=2)
            {
                        return 1;
            }
                else
                    {
                                return fbnqs(x-1)+fbnqs(x-2);
                    };
}
int main()
{
        int n=0;
            scanf("%d",&n);
                printf("%d",fbnqs(n));
                    return 0;
}

}
                    }
            }
}