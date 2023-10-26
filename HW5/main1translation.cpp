#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

float xTranslation = 2.0;  // Perubahan pada sumbu X
float yTranslation = 0.0;  // Tidak ada perubahan pada sumbu Y

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Matriks translasi
    glTranslatef(xTranslation, yTranslation, 0.0);

    // Atur lebar garis
    glLineWidth(1000.0);

    // Gambar garis koordinat (X dan Y)
    glBegin(GL_LINES);
    glVertex2f(-10.0, 0.0);  // Garis X
    glVertex2f(10.0, 0.0);
    glVertex2f(0.0, -10.0);  // Garis Y
    glVertex2f(0.0, 10.0);
    glEnd();

    // Atur ukuran titik
    glPointSize(1.0);

    // Gambar titik A(3,6)
    glBegin(GL_POINTS);
    glVertex2f(3.0, 6.0);  // Titik A
    glEnd();

    // Gambar titik B(8,9)
    glBegin(GL_POINTS);
    glVertex2f(8.0, 9.0);  // Titik B
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL Translasi");

    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
