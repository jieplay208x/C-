#include <stdio.h>
int main()
{
        int m,n=0;
            int t=0;
                scanf("%d%d",&m,&n);
                    while(t=m%n)
                        {
                                    m=n;
                                            n=t;
                        }
                            printf("最大公约数是：%d",n);
                                return 0;
}

                        }
}