#include<windows.h>
#include<stdio.h>
int main()
{
    printf("現在在PlaySound()前\n");
    PlaySound("m_set_104.wav",NULL,SND_ASYNC);
    printf("現在在PlaySound()後\n");
    int N;
    scanf("%d",&N);
}
