#include <stdio.h>
int get_max(int x,int y)
{
        int z=0;
            if(x<y)
                {
                            z=y;
                }
                    else
                        {
                                    z=x;
                                            return z;
                        }
}
int main()
{
        int a = 10;
            int b = 20;
                int max= get_max(a,b);
                    printf("max=%d ",max);
                        return 0;
}

}
                        }
                }
}