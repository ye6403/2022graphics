#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///��ɫ��
    glutSolidTeapot( 0.3 );///����
    glPushMatrix();
        glTranslatef(0.3, 0, 0);///���������D�еĖ|�� "����" ĳ̎
        glRotatef( angle, 0,0,1 );///���D
        glTranslatef(0.2, 0, 0);///�������Ƅ�(�Ѱ����Ƶ�����)
        glColor3f(1,0,0);///�tɫ��
        glutSolidTeapot( 0.2 );///���
        glPushMatrix();
            glTranslatef(0.2, 0, 0);///���������D�еĖ|�� "����" ĳ̎
            glRotatef( angle, 0,0,1 );///���D
            glTranslatef(0.2, 0, 0);///�������Ƅ�(�Ѱ����Ƶ�����)
            glColor3f(1,0,0);///�tɫ��
            glutSolidTeapot( 0.2 );///���
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    angle+=0.03;
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week12_TRT");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
