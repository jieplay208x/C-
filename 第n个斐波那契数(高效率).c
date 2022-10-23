#include <stdio.h>
int fbnq(int x)
{
        int a=1;
            int b=1;
                int c=1;
                    while(x>2)
                        {
                                    c=a+b;
                                            a=b;
                                                    b=c;
                                                            x--;
                        }
                            return c;
}
int main()
{
        int n=0;
            scanf("%d",&n);
                printf("%d",fbnq(n));
                    return 0;
}

}
                        }
}