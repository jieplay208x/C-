include<stdio.h>

int main()
{
        int arr[]={1,2,3,4,5,6,7,8,9,10};
            int k=7;//要取的数值
                int sz=sizeof(arr)/sizeof(arr[0]);
                    int left=0;
                        int right=sz-1;
                            while(left<=right)
                                {
                                            int sum=(left+right)/2;
                                                    if(arr[sum]<k)
                                                            {
                                                                            left=sum+1;
                                                            }
                                                                    else if(arr[sum]>k)
                                                                            {
                                                                                            right=sum-1;
                                                                            }
                                                                                    else
                                                                                            {
                                                                                                            printf("找到了，下标是：%d\n ",sum);
                                                                                                                        break;
                                                                                            }
                                }
                                    if(left>right)
                                        {
                                                    printf("找不到了");
                                        }
                                            return 0;
}
                                        }
                                                                                            }
                                                                            }
                                                            }
                                }
}