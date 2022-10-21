#include <stdio.h>
int erfen(int a[],int k,int s)
{
        int z=0;
            int right=s-1;
                while(z<=right)
                    {
                                int mus=(z+right)/2;
                                        if(a[mus]<k)
                                                {
                                                                z=mus+1;
                                                }
                                                        else if(a[mus]>k)
                                                                {
                                                                                right=mus-1;
                                                                }
                                                                        else
                                                                                {
                                                                                                return mus;
                                                                                }
                    }
                        return -1;
}
int main()
{
        int arr[]={
                1,2,3,4,5,6,7,8,9,10}
                    ;
                        int key=7;
                            int sf=sizeof(arr)/sizeof(arr[0]);
                                int ret=erfen(arr,key,sf);
                                    if(ret==-1)
                                        {
                                                    printf("没找到\n");
                                        }
                                            else
                                                {
                                                            printf("找到了，下标是:%d\n",ret);
                                                }
                                                    return 0;
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