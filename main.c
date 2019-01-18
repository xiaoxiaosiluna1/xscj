#include <stdio.h>
struct stru
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main(){
    
  
    int index=0;
    struct stru arr[100];
    printf("xueshengchengjiguanlixitong\n");
    while(1)
    {
        printf("1---tianjiaxueshengchengji:\n");
        printf("2---shanchuxueshengchengji:\n");
        printf("3---xianshhsuoyouxueshengchengji:\n");
        printf("4---yewu1:suoyouzongfenbujigedexuesheng(zongfenbuchaoguo180)\n");
        printf("5---yewu2:meiyikedoubujigedexuesheng\n");
        printf("6---yewu3:xianshizongfenzuigaodexuesheng(zhegeyewuyoubug,ruguoyouduogerenzongfenzuigao,namesuijixianshiyigejike)\n");
        printf("7---yewu4:xianshipingjunfenzuigao,qiemeiyoubujigekemudexuesheng\n");
        printf("8---tuichu\n");
        printf("qingshuru\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("qingshuruxueshengxingming:\n");
            scanf("%s",arr[index].name);
            printf("qingshuruxueshengyuwenchengji:\n");
            int yuwen;
            scanf("%d",&yuwen);
            arr[index].yuwen=yuwen;
            printf("qingshuruxueshengshuxuechengji:\n");
            int shuxue;
            scanf("%d",&shuxue);
            arr[index].shuxue=shuxue;
            printf("qingshuruxueshengyingyuchengji:\n");
            int yingyu;
            scanf("%d",&yingyu);
            arr[index].yingyu=yingyu;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==2)
        {
            printf("shanchuxueshengchengji\n");
            if(index>0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else{
                printf("shanchushibai,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }

        }

         if(code==3)
        {
          printf("suoyouxueshengchengjiruxia:\n");
          for(int i =0;i<index; i++)
          {
              printf("di%dgexueshengchengjiwei%d,%d,%d\n",i+1,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
          }
               printf("xianshichenggong,dianjihuichejixu\n");
              char x;
              scanf("%c",&x);
              scanf("%c",&x);
          

        }
         if(code==4)
        {
            for (int i = 0; i < index; i++)
            {
              int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;

                if (sum < 180)
                {
                   printf("di%dgexuesheng%schengjibuhege\n",i+1,arr[i].name); 
                }
            }
            printf("shanxuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
         if(code==5)
        {
            
        }
         if(code==6)
        {
            
        }
         if(code==7)
        {
            
        }
         if(code==8)
        {
            
        }
    }
    return 0;

}