//第一种
#include<stdio.h>

int main()
{
        int a=1;
            int c,b=0;
                int i=0;
                    for(i=1;i<=10;i++)
                        {
                                    a=1;
                                        for(b=1;b<=i;b++)
                                            {
                                                        a*=b;
                                                                
                                            }
                                                    c+=a;
                                                        
                                                            
                        }
                            printf("%d",c);
                                return 0;
}
                                            }
                        }
}
//第二种
#include<stdio.h>

int main()
{
        int a=1;
            int c,b=0;
                for(b=1;b<=10;b++)
                    {
                                a*=b;
                                        c+=a;
                                            
                    }
                        printf("%d",c);
                            return 0;
}
                    }
}