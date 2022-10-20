#include <stdio.h>
int is_zhishu(int x)
{
        int j = 0;
            for(j=2;j<x-1;j++)
                {
                            if(x%j==0)
                                    {
                                                    return 0;
                                    }
                }
                    return 1;
}
int main()
{
        while(1)
            {
                        int i = 0;
                                scanf("%d",&i);
                                        if(is_zhishu(i)==1)
                                                {
                                                                printf("是质数\n");
                                                }
                                                        else
                                                                {
                                                                                printf("不是质数\n");
                                                                }
            }
}

                                                                }
                                                }
            }
}
                                    }
                }
}