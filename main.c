#include <stdio.h>
char arr[1024];
int index = 0;
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

          }
          if(code==4)
          {

          }
          if(code==5)
          {

          }
    }

    return 0;

}