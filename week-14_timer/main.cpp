#include <GL/glut.h>
#include <stdio.h>
void timer(int t){
    printf("�[�%d,������\n",t);

    printf("�O����һ���[�\n");
    glutTimerFunc(2000,timer,t+1);
    //printf("�O���[�,�ٻ�ȥ˯\n");
}
void display()
{

}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week14 timer");

    glutTimerFunc(3000,timer,0);
    glutDisplayFunc(display);
    glutMainLoop();
}
