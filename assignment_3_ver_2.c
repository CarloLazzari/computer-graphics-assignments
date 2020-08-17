//Draw a cube with a square hole in each face.

#include <GL/glut.h>
#define NFACES 4
#define NVERTICES 24

#define DRAW_ARRAYS

GLfloat vertexArray[NFACES*NVERTICES*3]={
	
	//FIRST FACE
	//1
	0.5,1.0,1.0,
	0.5,-1.0,1.0,
	1.0,-1.0,1.0,
	//2
	1.0,-1.0,1.0,
	1.0,1.0,1.0,
	0.5,1.0,1.0,
	//3
	1.0,1.0,1.0,
	-1.0,1.0,1.0,
	-1.0,0.5,1.0,
	//4
	-1.0,0.5,1.0,
	1.0,0.5,1.0,
	1.0,1.0,1.0,
	//5
	-1.0,1.0,1.0,
	-1.0,-1.0,1.0,
	-0.5,-1.0,1.0,
	//6
	-0.5,-1.0,1.0,
	-0.5,1.0,1.0,
	-1.0,1.0,1.0,
	//7
	1.0,-0.5,1.0,
	-1.0,-0.5,1.0,
	-1.0,-1.0,1.0,
	//8
	-1.0,-1.0,1.0,
	1.0,-1.0,1.0,
	1.0,-0.5,1.0,
	
	//SECOND FACE
	//1
	1.0,1.0,-0.5,
	1.0,-1.0,-0.5,
	1.0,-1.0,-1.0,
	//2
	1.0,-1.0,-1.0,
	1.0,1.0,-1.0,
	1.0,1.0,-0.5,
	//3
	1.0,1.0,-1.0,
	1.0,1.0,1.0,
	1.0,0.5,1.0,
	//4
	1.0,0.5,1.0,
	1.0,0.5,-1.0,
	1.0,1.0,-1.0,
	//5
	1.0,1.0,1.0,
	1.0,-1.0,1.0,
	1.0,-1.0,0.5,
	//6
	1.0,-1.0,0.5,
	1.0,1.0,0.5,
	1.0,1.0,1.0,
	//7
	1.0,-1.0,1.0,
	1.0,-1.0,-1.0,
	1.0,-0.5,-1.0,
	//8
	1.0,-0.5,-1.0,
	1.0,-0.5,1.0,
	1.0,-1.0,1.0,
	
	//THIRD FACE
	//1
	-1.0,1.0,-0.5,
	-1.0,-1.0,-0.5,
	-1.0,-1.0,-1.0,
	//2
	-1.0,-1.0,-1.0,
	-1.0,1.0,-1.0,
	-1.0,1.0,-0.5,
	//3
	-1.0,1.0,-1.0,
	-1.0,1.0,1.0,
	-1.0,0.5,1.0,
	//4
	-1.0,0.5,1.0,
	-1.0,0.5,-1.0,
	-1.0,1.0,-1.0,
	//5
	-1.0,1.0,1.0,
	-1.0,-1.0,1.0,
	-1.0,-1.0,0.5,
	//6
	-1.0,-1.0,0.5,
	-1.0,1.0,0.5,
	-1.0,1.0,1.0,
	//7
	-1.0,-1.0,1.0,
	-1.0,-1.0,-1.0,
	-1.0,-0.5,-1.0,
	//8
	-1.0,-0.5,-1.0,
	-1.0,-0.5,1.0,
	-1.0,-1.0,1.0,
	
	//FOURTH FACE
	//1
	0.5,1.0,-1.0,
	0.5,-1.0,-1.0,
	1.0,-1.0,-1.0,
	//2
	1.0,-1.0,-1.0,
	1.0,1.0,-1.0,
	0.5,1.0,-1.0,
	//3
	1.0,1.0,-1.0,
	-1.0,1.0,-1.0,
	-1.0,0.5,-1.0,
	//4
	-1.0,0.5,-1.0,
	1.0,0.5,-1.0,
	1.0,1.0,-1.0,
	//5
	-1.0,1.0,-1.0,
	-1.0,-1.0,-1.0,
	-0.5,-1.0,-1.0,
	//6
	-0.5,-1.0,-1.0,
	-0.5,1.0,-1.0,
	-1.0,1.0,-1.0,
	//7
	1.0,-0.5,-1.0,
	-1.0,-0.5,-1.0,
	-1.0,-1.0,-1.0,
	//8
	-1.0,-1.0,-1.0,
	1.0,-1.0,-1.0,
	1.0,-0.5,-1.0,	
};		

GLfloat colorArray[NFACES*NVERTICES*3*4]={
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    //////////////
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    0.0, 0.0, 1.0,
    //////////////
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 1.0, 0.0,
    //////////////
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    1.0, 0.0, 1.0,
    
    
};

/* 
glDraw Arrays(GL enum mode, GLint first, GLsizei count);
mode = ...
first = Specifies the starting index in the enabled arrays.
count= Specifies the number of indices to be rendered.
*/

void display(void){

	//GLshort i=0;
	GLshort indFace, indVertex;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();

	//glTranslatef(0.0,1.0,-1.5);
	glScalef(0.4,0.4,0.4);
	glTranslatef(0.0,-0.4,0.0);
	glRotatef(30.0,0.0,1.0,0.0);
	glRotatef(15.0,1.0,0.0,0.0);
	
	for(indFace=0; indFace<NFACES;indFace++){
		//glColor3f(colorArray[indFace],colorArray[indFace+i],colorArray[indFace+2*i]);
		glDrawArrays(GL_TRIANGLES,indFace*NVERTICES,24);
		//i+=4;
	};
	
	/*
	//Triangoli
	glBegin(GL_TRIANGLES);
	//FIRST FACE
	glColor3f(1.0,0.0,0.0); 
	//1
	glVertex3f(0.5,1.0,1.0);
	glVertex3f(0.5,-1.0,1.0);
	glVertex3f(1.0,-1.0,1.0);
	//2
	glVertex3f(1.0,-1.0,1.0);
	glVertex3f(1.0,1.0,1.0);
	glVertex3f(0.5,1.0,1.0);
	//3
	glVertex3f(1.0,1.0,1.0);
	glVertex3f(-1.0,1.0,1.0);
	glVertex3f(-1.0,0.5,1.0);
	//4
	glVertex3f(-1.0,0.5,1.0);
	glVertex3f(1.0,0.5,1.0);
	glVertex3f(1.0,1.0,1.0);
	//5
	glVertex3f(-1.0,1.0,1.0);
	glVertex3f(-1.0,-1.0,1.0);
	glVertex3f(-0.5,-1.0,1.0);
	//6
	glVertex3f(-0.5,-1.0,1.0);
	glVertex3f(-0.5,1.0,1.0);
	glVertex3f(-1.0,1.0,1.0);
	//7
	glVertex3f(1.0,-0.5,1.0);
	glVertex3f(-1.0,-0.5,1.0);
	glVertex3f(-1.0,-1.0,1.0);
	//8
	glVertex3f(-1.0,-1.0,1.0);
	glVertex3f(1.0,-1.0,1.0);
	glVertex3f(1.0,-0.5,1.0);
	
	//SECOND FACE
	//1
	glColor3f(0.0,1.0,0.0);
	glVertex3f(1.0,1.0,-0.5);
	glVertex3f(1.0,-1.0,-0.5);
	glVertex3f(1.0,-1.0,-1.0);
	//2
	glVertex3f(1.0,-1.0,-1.0);
	glVertex3f(1.0,1.0,-1.0);
	glVertex3f(1.0,1.0,-0.5);
	//3
	glVertex3f(1.0,1.0,-1.0);
	glVertex3f(1.0,1.0,1.0);
	glVertex3f(1.0,0.5,1.0);
	//4
	glVertex3f(1.0,0.5,1.0);
	glVertex3f(1.0,0.5,-1.0);
	glVertex3f(1.0,1.0,-1.0);
	//5
	glVertex3f(1.0,1.0,1.0);
	glVertex3f(1.0,-1.0,1.0);
	glVertex3f(1.0,-1.0,0.5);
	//6
	glVertex3f(1.0,-1.0,0.5);
	glVertex3f(1.0,1.0,0.5);
	glVertex3f(1.0,1.0,1.0);
	//7
	glVertex3f(1.0,-1.0,1.0);
	glVertex3f(1.0,-1.0,-1.0);
	glVertex3f(1.0,-0.5,-1.0);
	
	glVertex3f(1.0,-0.5,-1.0);
	glVertex3f(1.0,-0.5,1.0);
	glVertex3f(1.0,-1.0,1.0);
	
	//THIRD FACE
	glColor3f(0.8,0.5,0.0);
	//1
	glVertex3f(-1.0,1.0,-0.5);
	glVertex3f(-1.0,-1.0,-0.5);
	glVertex3f(-1.0,-1.0,-1.0);
	//2
	glVertex3f(-1.0,-1.0,-1.0);
	glVertex3f(-1.0,1.0,-1.0);
	glVertex3f(-1.0,1.0,-0.5);
	//3
	glVertex3f(-1.0,1.0,-1.0);
	glVertex3f(-1.0,1.0,1.0);
	glVertex3f(-1.0,0.5,1.0);
	//4
	glVertex3f(-1.0,0.5,1.0);
	glVertex3f(-1.0,0.5,-1.0);
	glVertex3f(-1.0,1.0,-1.0);
	//5
	glVertex3f(-1.0,1.0,1.0);
	glVertex3f(-1.0,-1.0,1.0);
	glVertex3f(-1.0,-1.0,0.5);
	//6
	glVertex3f(-1.0,-1.0,0.5);
	glVertex3f(-1.0,1.0,0.5);
	glVertex3f(-1.0,1.0,1.0);
	//7
	glVertex3f(-1.0,-1.0,1.0);
	glVertex3f(-1.0,-1.0,-1.0);
	glVertex3f(-1.0,-0.5,-1.0);
	
	glVertex3f(-1.0,-0.5,-1.0);
	glVertex3f(-1.0,-0.5,1.0);
	glVertex3f(-1.0,-1.0,1.0);
	
	//FOURTH FACE
	glColor3f(0.0,0.5,1.0); 
	//1
	glVertex3f(0.5,1.0,-1.0);
	glVertex3f(0.5,-1.0,-1.0);
	glVertex3f(1.0,-1.0,-1.0);
	//2
	glVertex3f(1.0,-1.0,-1.0);
	glVertex3f(1.0,1.0,-1.0);
	glVertex3f(0.5,1.0,-1.0);
	//3
	glVertex3f(1.0,1.0,-1.0);
	glVertex3f(-1.0,1.0,-1.0);
	glVertex3f(-1.0,0.5,-1.0);
	//4
	glVertex3f(-1.0,0.5,-1.0);
	glVertex3f(1.0,0.5,-1.0);
	glVertex3f(1.0,1.0,-1.0);
	//5
	glVertex3f(-1.0,1.0,-1.0);
	glVertex3f(-1.0,-1.0,-1.0);
	glVertex3f(-0.5,-1.0,-1.0);
	//6
	glVertex3f(-0.5,-1.0,-1.0);
	glVertex3f(-0.5,1.0,-1.0);
	glVertex3f(-1.0,1.0,-1.0);
	//7
	glVertex3f(1.0,-0.5,-1.0);
	glVertex3f(-1.0,-0.5,-1.0);
	glVertex3f(-1.0,-1.0,-1.0);
	//
	glVertex3f(-1.0,-1.0,-1.0);
	glVertex3f(1.0,-1.0,-1.0);
	glVertex3f(1.0,-0.5,-1.0);
	*/

	glPopMatrix();
	
	//Flush graphics objects
	glFlush();

}

void init(void){

	glClearColor(1.0,1.0,1.0,0.0);
	
	//Enable two vertex arrays
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	
	//Specify number of coordinates per vertex, type, stride, and pointer
	glVertexPointer(3, GL_FLOAT, 0, vertexArray);
	glColorPointer(3,GL_FLOAT,0,colorArray);
	
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();	
	glFrustum(-0.2,-0.2,-0.3,0.1,0.1,5.0);
	
	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glDepthFunc(GL_LESS);
	
	//glEnable(GL_CULL_FACE);

}

int main(int argc,char** argv){

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Cube with a hole in each face - DrawArrays");
	
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	
		
	return 0;
}