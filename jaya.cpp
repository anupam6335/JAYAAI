#include<bits/stdc++.h>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>
using namespace std;


int main() {
    cout << "\n\n";
    cout << "\t\t\t-||========================================================||-\n";
    cout << "\t\t\t-||================                        ================||-\n";
    cout << "\t\t\t-||================:: Welcome to Jaya AI ::================||-\n";
    cout << "\t\t\t-||================                        ================||-\n";
    cout << "\t\t\t-||========================================================||-\n";
    cout << "\n\n";

    PlaySound(TEXT("E:\\JAYAAI\\audio\\welcome.wav"),NULL,SND_SYNC);

    char ch[100];
    // input string from user and store it to ch


    while(1) {
        cout << " please tell me sir => ";
        gets(ch);
        if(strcmp(ch,"hi") == 0) {
            PlaySound(TEXT("E:\\JAYAAI\\audio\\helpyousir.wav"),NULL,SND_SYNC);
            cout << endl;
        } else if(strcmp(ch,"how are you jaya") == 0) {
            PlaySound(TEXT("E:\\JAYAAI\\audio\\fine.wav"),NULL,SND_SYNC);
             cout << endl;
        } else if(strcmp(ch,"who are you") == 0) {
             PlaySound(TEXT("E:\\JAYAAI\\audio\\intro.wav"),NULL,SND_SYNC);
             cout << endl;
        } else if(strcmp(ch,"Bye") == 0) {
            PlaySound(TEXT("E:\\JAYAAI\\audio\\bye.wav"),NULL,SND_SYNC);
            exit(0);
        } else {
            PlaySound(TEXT("E:\\JAYAAI\\audio\\wrong.wav"),NULL,SND_SYNC);
        }
    }
    return 0;
}
