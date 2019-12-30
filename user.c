#include<stdio.h>
typedef struct {
    char name[100];
    int age;
    int sex;
    int tel;
} User;
//添加用户
int add(int *q,User *u){
                printf("请输入姓名:\n");
                scanf("%s",u->name);
                printf("请输入年龄:\n");
                scanf("%d",&u->age);
                printf("请输入性别:\n");
                scanf("%d",&u->sex);
                printf("请输入电话:\n");
                scanf("%d",&u->tel);
    return 0;
}
//查看用户
int see(User*users){
                printf("姓名:%s\n",users->name);
                printf("年龄:%d\n",users->age);
                printf("性别:%d\n",users->sex);
                printf("电话:%d\n",users->tel);
    }
    //修改用户
int update(User*users){
                 printf("请输入姓名:\n");
                scanf("%s",users->name);
                printf("请输入年龄:\n");
                scanf("%d",&users->age);
                printf("请输入性别:\n");
                scanf("%d",&users->sex);
                printf("请输入电话:\n");
                scanf("%d",&users->tel);
}
//删除用户
int delete(User*u1,User*u2){
    *u1=*u2;
}
int main(){
    User users[10];
    int count=0;
    int i,q,f,z;
    int flag=1;
    while(flag)
    {
                printf("1.添加用户\n2.查看用户\n3.修改用户\n4.删除用户\n5.退出\n");
                scanf("%d",&i);
        switch(i){
            case 1:
            //添加用户
                    add(&count,&users[count]);
                    count++;
            break;
            case 2:
            //查看用户
                    printf("1.查看全部用户\n2查看某个用户\n");
                    scanf("%d",&i);
            switch(i){
                    case 1:
                    //查看全部用户
                    for(int a=0;a<count;a++){
                        see(&users[a]);
                    };
                     break;
                    case 2:
                    //查看某个用户
                            printf("请输入查询的编号:\n");
                            scanf("%d",&q);
                    if(q>0){
                        see(&users[q-1]);
                    } else{
                            printf("请输入大于1的编号\n"); 
                    };
        };
            break;
            case 3:
            //修改用户
                    printf("要修改第几个人:\n");
                    scanf("%d",&f);
                    update(&users[f-1]);
            break;
            case 4:
            //删除用户
                    printf("请输入要删除的编号:");
                    scanf("%d",&z);
            for(;z<count;z++){
					delete(&users[z],&users[z+1]);
				}
                    count--;
                printf("删除成功\n");
            break;
            case 5:
            //结束
               flag=0;
            break;
        }
    }
}