#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    printf("��J[Enter]�}�l�I��\n"); 
    system("pause");
    
    char isContinue;
    do{
        printf("��J[Enter]��Ȱ�\n"); 
        while(isContinue!=27){ 
           mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
           Sleep(20); //�d�U�ɶ���OS �� CPU Time
           if(kbhit()){
                if (getch() == 13) break; //[Enter]�Ȱ� 
           }
        }
        
        printf("[Enter]�~��{���A��J[Esc]���}\n"); 
        isContinue = getch();
    }while(isContinue!=27); //[Esc]���} 
    
}

