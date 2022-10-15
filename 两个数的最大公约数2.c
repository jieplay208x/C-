#include <stdio.h>
int main()
{
        int a,b=0;
            scanf("%d%d",&a,&b);
                if(a<b)
                    {
                                int c=a;
                                        a=b;
                                                b=c;
                    }
                        for( int i=b; b>0;i--) {
                                    if(a%i==0&&b%i==0)
                                            {
                                                            printf("最大公约数是：%d\n",i);
                                            }
                                                    else
                                                            {
                                                                            printf("没有最大公约数!");
                                                            };
                                                                    break;
                        }
                            return 0;
}

                                                            }
                                            }
                        }
                    }
}