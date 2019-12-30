#include <stdio.h>
/*
    1.新曾会员
    2.查看会员
    3.修改会员
    4.删除会员
    5.退出
*/
    //   定义一个构造器
   struct user  {
           char  name[100];
            int   age;
            char  sex[50];
            int   tel;
   };
//    定义一个数组,;来存储添加数据
   struct user users[20];
       int  x=0 ;    
   
    
    // 新增会员 
    int   add(){
        // 第一次添加
                printf("请输入你的姓名\n");
                scanf("%s",users[x].name);
                printf("请输入你的年龄\n");
                scanf("%d",&users[x].age);
                printf("请输入你的性别\n");
                scanf("%s",users[x].sex);
                printf("请输入你的电话号码\n");
                scanf("%d",&users[x].tel);
                x++;
                printf("-------------添加成功-----------\n");
            //    根据用户要求循环可添加多条
        int flag=1; 
         int t;
            while(flag){
                    printf("是否需要:\n1.继续添加按\n,2.退出按\n");
                    scanf("%d",&t);
                            switch(t){
                                case 1:
                                               printf("请输入你的姓名\n");
                                                scanf("%s",users[x].name);
                                                printf("请输入你的年龄\n");
                                                scanf("%d",&users[x].age);
                                                printf("请输入你的性别\n");
                                                scanf("%s",users[x].sex);
                                                printf("请输入你的电话号码\n");
                                                scanf("%d",&users[x].tel);
                                                   x++;
                                                     printf("-------------添加成功-----------\n");
                                        break;
                                    case 2:
                                            printf("返回上一级\n");
                                            flag = 0;
                                break;
                            }
                }
    }
    // 查看会员
    int i;
    int  see( ){
        // 查看所有会员
        int g;
           printf("1.查看全部会员\n2查看指定会员\n");
          scanf("%d",&i);
          switch(i){
              case 1:
                 for ( i = 0; i < x; i++){
                        printf("姓名:%s\n,年龄:%d\n,性别:%s\n,电话号码:%d\n",users[i].name,users[i].age,users[i].sex,users[i].tel);
                    }
            break;
            case 2:
                    printf("请输入需要查询的编号\n");
                    scanf("%d",&g);
                    if (g>0){
                            printf("姓名:%s\n,年龄:%d\n,性别:%s\n,电话号码:%d\n",users[g-1].name,users[g-1].age,users[g-1].sex,users[g-1].tel);
                    }else{
                            printf("请输入大于1的编号\n");
                    }
              break;
          }
}
     // 修改用户
    int  update(){
                 int a;
                 printf("请输入你要修改的编号\n");
                 scanf("%d",&a);
                printf("请输入你的姓名\n");
                scanf("%s",users[a-1].name);
                printf("请输入你的年龄\n");
                scanf("%d",&users[a-1].age);
                printf("请输入你的性别\n");
                scanf("%s",users[a-1].sex);
                printf("请输入你的电话\n");
                scanf("%d",&users[a-1].tel);
}
    //删除
 int  delete(){

              printf("输入你要删除第几个人的编号\n");
              int p;
              scanf("%d",&p);
             for (p;p<x;p++){
                   users[p]=users[p+1];
                   x --;
             }
             printf("-------------删除成功-----------\n");
}
// 入口,测试用的
int main (){
    int flag=1;
        while(flag){
           int im;
                printf("1.新增会员\n2.查询会员\n3.修改会员\n4.删除会员\n0退出\n");
                printf("请选择你的输入\n");
                scanf("%d",&im);
        switch(im)
			{
					case 1:
                            printf("新增会员\n");
                            add();
                            printf("添加成功\n");
						break;
					case 2:
                            printf("查看会员\n");
                            see();
						break;
					case 3:
                            printf("修改会员\n");
                            update();
						break;
					case 4:
                            printf("删除会员\n");
                            delete();
						break;
					case 0:
                    	    printf("退出成功\n");
                       return 0;
						break;
                default:
                        printf("请根据上面的提示做出选择\n");
                        printf("\n");
                    break;
		     }
        }
        return 1;
}