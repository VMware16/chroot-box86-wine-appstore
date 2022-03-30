#include <iostream>
#include <fstream>
int number_of_packages;
using namespace std;
void init()
{
    system("rm -rf /tmp/chroot-box86-wine");
    system("mkdir /tmp/chroot-box86-wine");
    system("clear");
}
void downloadrelease()
{
    system("cd /tmp/chroot-box86-wine/&&git clone https://gitee.com/vmware16/chroot-box86-wine-appstore 1>/dev/null 2>/dev/null");
}
void displayrelease_all()
{
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    int i=1;
    for(;;i++)
    {
        release>>a;
        if(release.eof()) break;
        
        while(a!='$'&&!release.eof()) 
        {
            release>>a;
        }
        if(release.eof()) break;
        cout<<endl<<i<<" . ";
//        cout";
        release>>a;
        while(a!='$'&&!release.eof())
        { 
            cout<<a;
            release>>a;
           
        }
        cout<<"\n        ";
        while(a!='#'&&!release.eof()) 
        {
            release>>a;
        }
//        cout<<"description=";
        release>>a;
        while(a!='#'&&!release.eof())
        { 
            cout<<a;
            release>>a;
        }
//        cout<<"\n    ";
        while(a!='~'&&!release.eof()) 
        {
            release>>a;
        }
//        cout<<"link=";
        release>>a;
        while(a!='~'&&!release.eof())
        { 
//            cout<<a;
            release>>a;
        }
//        cout<<"\n    ";
        while(a!='^'&&!release.eof()) 
        {
            release>>a;
        }
//        cout<<"file name=";
        release>>a;
        while(a!='^'&&!release.eof())
        { 
//            cout<<a;
            release>>a;      
        }
       cout<<"\n    ";
        while(a!='*'&&!release.eof()) 
        {
            release>>a;
        }
        cout<<"版本：";
        release>>a;
        while(a!='*'&&!release.eof())
        { 
            cout<<a;
            release>>a;
           
        }
        while(a!='&'&&!release.eof())
        { 
//            cout<<a;
            release>>a;
           
        }
        while(a!='&'&&!release.eof())
        { 
//            cout<<a;
            release>>a;
           
        }release>>a;
        release>>a;


       if(release.eof()) break;
    }
//    cout<<endl<<endl<<i-1<<" packages in all.";
    cout<<"\n\n目前一共发布了"<<i-1<<"个软件";
    number_of_packages=i-1;
    release.close();
}
void display_a_release(int n)
{
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    for(int i=1;i<=2*(n-1);i++)
    {
//        for(int j=1;j<=2;j++) 
//        {
            while(a!='*')
            {
                release>>a;
            }
            release>>a;
//        }
    }
        release>>a;
        cout<<endl<<n<<" . ";
        while(a!='$') 
        {
            release>>a;
        }
        release>>a;
        cout<<"";
        while(a!='$')
        { 
            cout<<a;
            release>>a;
           
        }
        cout<<"\n    ";
        while(a!='#') 
        {
            release>>a;
        }
//        cout<<"\n          ";
        release>>a;
        while(a!='#')
        { 
//            cout<<a;
            release>>a;
        }
//        cout<<"\n    ";
        while(a!='~') 
        {
            release>>a;
        }
//        cout<<"link=";
        release>>a;
        while(a!='~')
        { 
//            cout<<a;
            release>>a;
        }
        cout<<"\n    ";
        while(a!='^') 
        {
            release>>a;
        }
//        cout<<"file name=";
        release>>a;
        while(a!='^')
        { 
//            cout<<a;
            release>>a;      
        }
       cout<<"\n    ";
        while(a!='*') 
        {
            release>>a;
        }
//        cout<<"";
        release>>a;
        while(a!='*')
        { 
//            cout<<a;
            release>>a;
           
        }

}
void downlod_a_package(int n)
{
    char c[]="cd /tmp/chroot-box86-wine/&&aria2c -x 16                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ";
    //14
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    for(int i=1;i<=2*(n-1);i++)
    {
//        for(int j=1;j<=2;j++) 
//        {
            while(a!='*')
            {
                release>>a;
            }
            release>>a;
//        }
    }
    int i=41;
    while(a!='~')
    {
        release>>a;
    }
    release>>c[i];
    a=c[i];
    i++;
    while(a!='~')
    {
//        i++;
        release>>c[i];
        a=c[i];
         i++;
    }
    c[i-1]=' ';
    cout<<endl<<"运行"<<c<<endl;
    system(c);
    release.close();
}
/*
void display_a_release(int n)
{
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    for(int i=1;i<=2*(n-1);i++)
    {
//        for(int j=1;j<=2;j++) 
//        {
            while(a!='*')
            {
                release>>a;
            }
//        }
    }
        release>>a;
        cout<<endl<<n<<" . ";
        while(a!='$') 
        {
            release>>a;
        }
        release>>a;
        cout<<"package name=";
        while(a!='$')
        { 
            cout<<a;
            release>>a;
           
        }
        cout<<"\n    ";
        while(a!='#') 
        {
            release>>a;
        }
        cout<<"description=";
        release>>a;
        while(a!='#')
        { 
            cout<<a;
            release>>a;
        }
        cout<<"\n    ";
        while(a!='~') 
        {
            release>>a;
        }
        cout<<"link=";
        release>>a;
        while(a!='~')
        { 
            cout<<a;
            release>>a;
        }
        cout<<"\n    ";
        while(a!='^') 
        {
            release>>a;
        }
        cout<<"file name=";
        release>>a;
        while(a!='^')
        { 
            cout<<a;
            release>>a;      
        }
       cout<<"\n    ";
        while(a!='*') 
        {
            release>>a;
        }
        cout<<"version=";
        release>>a;
        while(a!='*')
        { 
            cout<<a;
            release>>a;
           
        }

}*/
void install_a_package(int n)
{
    char c[]="dpkg -i /tmp/chroot-box86-wine/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ";
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    for(int i=1;i<=2*(n-1);i++)
    {
//        for(int j=1;j<=2;j++) 
//        {
            while(a!='*')
            {
                release>>a;
            }
            release>>a;
//        }
    }
    int i=31;
    while(a!='^')
    {
        release>>a;
    }
    release>>c[i];
    a=c[i];
    i++;
    while(a!='^')
    {
//        i++;
        release>>c[i];
        a=c[i];
         i++;
    }
    c[i-1]=' ';
    cout<<endl<<"运行:"<<c<<endl;
    system(c);
    release.close();
}
void remove_a_package(int n)
{
    char c[]="dpkg -r                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ";
    ifstream release ("/tmp/chroot-box86-wine/chroot-box86-wine-appstore/release/Release");
    char a=' ';
    for(int i=1;i<=2*(n-1);i++)
    {
//        for(int j=1;j<=2;j++) 
//        {
            while(a!='&')
            {
//                cout<<a;
                release>>a;
            }
            release>>a;
//            cout<<"\n";
//        }
    }
    int i=8;
    while(a!='&')
    {
//        cout<<a;
        release>>a;
    }
    release>>c[i];
    a=c[i];
    i++;
    while(a!='&')
    {
//        i++;
        release>>c[i];
        a=c[i];
         i++;
    }
    c[i-1]=' ';
    cout<<endl<<"运行:"<<c<<endl;
    system(c);
    release.close();
}
int main()
{
    init();
    downloadrelease();
    displayrelease_all();
    int c;
    cout<<"\n\n请选择一个软件  : ";
    cin>>c;
    if(c>0&&c<=number_of_packages)
    {
            system("clear");
            cout<<"你选择了:\n";
            display_a_release(c);
            cout<<"\n你想要安装还是卸载\n 安装=1  卸载=2  退出=ctrl+c\n :";
            int a;
            cin>>a;
            if(a==1)
            {
                downlod_a_package(c);
                install_a_package(c);
            }
            if(a==2)
            {
                remove_a_package(c);
            }

            
            return 0;
    }
    cout<<"\n编号无效\n";
    return 0;
}
