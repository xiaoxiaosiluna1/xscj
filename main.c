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
            for (int i = 0; i < index; i++)
            {

                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf("di%dgexuesheng%sdemeiyikedoubujige\n",i+1,arr[i].name);
                    char x;
                    scanf("%c",&x);
                    scanf("%c",&x);
                }
            }
            printf("shaixuanwancheng,dianjihuichejixu\n");

        }
        if(code==6){
            printf("zongfenzuigaodexueshengwei:\n");
            int max=0;
            int stuID=0;
            
            for(int i = 0; i < index; i++)
            {
                 int sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;
                 if(max<sum){
                     max=sum;
                     stuID=i;
                 }
            }
            printf("zongfenzuigaodexueshengxingmingwei%s,yuwen%d,shuxue%d,yingyu%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            printf("dianjihuichejixu\n");
             char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }

         if(code==7)
        {
            double aver;
            double pingjun = 0;
            int IDD = 0;

            for (int i = 0; i < index; i++)
            {
                  aver = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3;

                if (pingjun < aver)
                {
                    pingjun = aver;
                    IDD = i + 1;
                }
            }
            printf("di%dgexuesheng%sdepingjunchengjizuigao,zuigaowei%lf\n",IDD,arr[IDD - 1].name,pingjun);
            printf("shanxuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
         if(code==8)
        {
            
        }
    }
    return 0;

}