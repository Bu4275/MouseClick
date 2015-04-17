#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    printf("輸入[Enter]開始點擊\n"); 
    system("pause");
    
    char isContinue;
    do{
        printf("輸入[Enter]鍵暫停\n"); 
        while(isContinue!=27){ 
           mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
           Sleep(20); //留下時間給OS 的 CPU Time
           if(kbhit()){
                if (getch() == 13) break; //[Enter]暫停 
           }
        }
        
        printf("[Enter]繼續程式，輸入[Esc]離開\n"); 
        isContinue = getch();
    }while(isContinue!=27); //[Esc]離開 
    
}

