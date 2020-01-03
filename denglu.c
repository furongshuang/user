#include <stdio.h>
#include <stdlib.h>
//首页
int main(){
       printf("Content-Type: text/html\n\n");
       char *header = "<!doctype html>"\
                                        "<html>"\
                                        "<head>"\
                                        "<meta name='viewport' centent='width=device-width'>"\
                                        "<meta charset='UTF-8'>"\
                                        "<title>登录</title>"\
                                        "</head>"\
                                        "<body>";
                            printf("%s\n",header);

                            printf("<div >"\
                                            "<form action='news.cgi' method='get' onSubmit='return check(this);'> <br/>"\
                                                    "  账户: <input type='text' name='username' />  <br/>"\
                                                    "  密码: <input type='text' name='password' /> <br/>"\
                                                        "<input type='submit' value='登录' /> <br/>"\
                                                "</form>"\
                                       " </div>"); 
                                       //判断登录和密码
                            printf(" <script>"
                                                "function check(form){"\
                                                            //检查姓名是否填写
                                                           " var username = form.username.value;"\
                                                            "if(username.length==0){"\
                                                           " alert('账户不能为空！');"\
                                                           "form.username.focus();"\
                                                            "return false;"\
                                                           "}"\
                                                            "var password = form.password.value;"\
                                                           "if(password.length==0){"\
                                                            "alert('密码不能为空！');"\
                                                            "form.password.focus();"\
                                                            "return false;"\
                                                            "}"\
                                             "}"\
                                                 "</script> ");

                printf("</body></html>");
}