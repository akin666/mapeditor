#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLWidget::initializeGL()
{
    glClearColor( 0.2f , 0.4f , 0.6f , 1.0f );
//    glEnable(GL_DEPTH_TEST);
}

void GLWidget::resizeGL(int w, int h)
{
    // setup viewport, projection etc.:
    glViewport(0, 0, (GLint)w, (GLint)h);
    glClearColor( 0.2f , 0.4f , 0.6f , 1.0f );
}

void GLWidget::paintGL()
{
    glClear( GL_COLOR_BUFFER_BIT );
}
