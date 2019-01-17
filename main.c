#include <stdio.h>
char arr[1024];
int index = 0;
int ismingan(char x)
{
    int count =0;
    for(int i=0 ; i<index; i++)
    {
        if(x==arr[i])
        {
            count++;
        }
    }
    if (count==0)
    {
        return 0;
    }
    else{
        return 1;

    }
}
int main(){

    printf("jinruminganzifguxitomng");
    while(1)
    {
        printf("1---TIAN JIA\n");
        printf( "2---shan chu\n");
        printf("3--cha kan\n");
        printf("4---ti huuan\n");
        printf("5---tui chu\n");
        printf("qing shu ru xfiang yingde xu hao\n");
        int code;
          scanf("%d",&code);
          if(code==1)
          {
          printf("qingtianjiaminganzifu\n");
          char m;
          scanf("%c",&m);
          scanf("%c",&m);
            arr [index]=m;
            index++;
            printf("tianjiachenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
          }
          if(code==2)
          {
              printf("shanchumibganzifu\n");
              index--;
              printf("shanchuchenggong\n");
              char x;
              scanf("%c",&x);
              scanf("%c",&x);
          }
          if(code==3)
          {
             for (int i = 0; i < index; i++)
            {
            printf("di%dgeminganzifu:%c\n", i + 1, arr[i]);
            }
            printf("shanchuchenggong\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
          }
          if(code==4)
          {
            printf("shanchuchenggong\n");
            char neirong [1024];
            scanf("%c",&neirong);
            for(int i = 0;1;i++){
                if(neirong[i] == '\0')
            {
                    break;
            }
            if(ismingan(neirong[i]) == 1)
                {
                    neirong[i] = '*';
                }
            printf("%c",neirong[i]);

          }
          printf("\n");
          printf("tihuanchenggong\n");
          char x;
          scanf("%c",&x);
          scanf("%c",&x);
          }
                    if(code==5)
          {
            printf("tui chu\n");
           break;
          }
    }

    return 0;

}