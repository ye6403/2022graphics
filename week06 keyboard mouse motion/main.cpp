#include <GL/glut.h>
#include <stdio.h>
float x=0, y=0, z=0,scale=1.0,angle=0.0,oldX, oldY;
int now=1;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef((x-150)/150.0,-(y-150)/150.0 , z );
        glRotatef(angle,0,0,1);
        glScalef(scale,scake,scale);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key,int mouseX, int mouseY)
{
    if(key=='w' || key=='W')now=1;
    if(key=='e' || key=='E')now=2;
    if(key=='r' || key=='R')now=3;
}
void mouse (int button,int state,int mouseX,int mouseY)
{
    oldX = mouseX; oldY = mouseY;
}
void motion(int mouseX,int mouseY)
{
    if(now==1){
    x += (mouseX-oldX);
    y += (mouseY-oldY);
    }else if(now==3){
    if(mouseX>oldX)scale = scale * 1.01;
    if(mouseX<oldX)scale = scale * 0.99;
    }
    oldX =mouseX; oldY = mouseY;
    display();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06 keyboard mouse motion");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
    return 0;
}
