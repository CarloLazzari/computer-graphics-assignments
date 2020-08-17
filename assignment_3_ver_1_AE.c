//Draw a cube with a square hole in each face.
//Carlo Lazzari 141007

//Programma che include la funzione glArray Elements
//Ho pensato a un cubo con 4 facce laterali con un buco dentro come l'unione di 8 triangoli diversi
//-come quindi l'unione di 4 parallelepipedi/rettangoli
//https://imgur.com/a/9QZJL5X

#include <GL/glut.h>
#define NFACES 4
#define NVERTICES 24

GLfloat vertexArray[NFACES*NVERTICES][3]={
	
	//FIRST FACE
	//1
	{0.5,1.0,1.0},
	{0.5,-1.0,1.0},
	{1.0,-1.0,1.0},
	//2
	{1.0,-1.0,1.0},
	{1.0,1.0,1.0},
	{0.5,1.0,1.0},
	//3
	{1.0,1.0,1.0},
	{-1.0,1.0,1.0},
	{-1.0,0.5,1.0},
	//4
	{-1.0,0.5,1.0},
	{1.0,0.5,1.0},
	{1.0,1.0,1.0},
	//5
	{-1.0,1.0,1.0},
	{-1.0,-1.0,1.0},
	{-0.5,-1.0,1.0},
	//6
	{-0.5,-1.0,1.0},
	{-0.5,1.0,1.0},
	{-1.0,1.0,1.0},
	//7
	{1.0,-0.5,1.0},
	{-1.0,-0.5,1.0},
	{-1.0,-1.0,1.0},
	//8
	{-1.0,-1.0,1.0},
	{1.0,-1.0,1.0},
	{1.0,-0.5,1.0},
	
	//SECOND FACE
	//1
	{1.0,1.0,-0.5},
	{1.0,-1.0,-0.5},
	{1.0,-1.0,-1.0},
	//2
	{1.0,-1.0,-1.0},
	{1.0,1.0,-1.0},
	{1.0,1.0,-0.5},
	//3
	{1.0,1.0,-1.0},
	{1.0,1.0,1.0},
	{1.0,0.5,1.0},
	//4
	{1.0,0.5,1.0},
	{1.0,0.5,-1.0},
	{1.0,1.0,-1.0},
	//5
	{1.0,1.0,1.0},
	{1.0,-1.0,1.0},
	{1.0,-1.0,0.5},
	//6
	{1.0,-1.0,0.5},
	{1.0,1.0,0.5},
	{1.0,1.0,1.0},
	//7
	{1.0,-1.0,1.0},
	{1.0,-1.0,-1.0},
	{1.0,-0.5,-1.0},
	//8
	{1.0,-0.5,-1.0},
	{1.0,-0.5,1.0},
	{1.0,-1.0,1.0},
	
	//THIRD FACE
	//1
	{-1.0,1.0,-0.5},
	{-1.0,-1.0,-0.5},
	{-1.0,-1.0,-1.0},
	//2
	{-1.0,-1.0,-1.0},
	{-1.0,1.0,-1.0},
	{-1.0,1.0,-0.5},
	//3
	{-1.0,1.0,-1.0},
	{-1.0,1.0,1.0},
	{-1.0,0.5,1.0},
	//4
	{-1.0,0.5,1.0},
	{-1.0,0.5,-1.0},
	{-1.0,1.0,-1.0},
	//5
	{-1.0,1.0,1.0},
	{-1.0,-1.0,1.0},
	{-1.0,-1.0,0.5},
	//6
	{-1.0,-1.0,0.5},
	{-1.0,1.0,0.5},
	{-1.0,1.0,1.0},
	//7
	{-1.0,-1.0,1.0},
	{-1.0,-1.0,-1.0},
	{-1.0,-0.5,-1.0},
	//8
	{-1.0,-0.5,-1.0},
	{-1.0,-0.5,1.0},
	{-1.0,-1.0,1.0},
	
	//FOURTH FACE
	//1
	{0.5,1.0,-1.0},
	{0.5,-1.0,-1.0},
	{1.0,-1.0,-1.0},
	//2
	{1.0,-1.0,-1.0},
	{1.0,1.0,-1.0},
	{0.5,1.0,-1.0},
	//3
	{1.0,1.0,-1.0},
	{-1.0,1.0,-1.0},
	{-1.0,0.5,-1.0},
	//4
	{-1.0,0.5,-1.0},
	{1.0,0.5,-1.0},
	{1.0,1.0,-1.0},
	//5
	{-1.0,1.0,-1.0},
	{-1.0,-1.0,-1.0},
	{-0.5,-1.0,-1.0},
	//6
	{-0.5,-1.0,-1.0},
	{-0.5,1.0,-1.0},
	{-1.0,1.0,-1.0},
	//7
	{1.0,-0.5,-1.0},
	{-1.0,-0.5,-1.0},
	{-1.0,-1.0,-1.0},
	//8
	{-1.0,-1.0,-1.0},
	{1.0,-1.0,-1.0},
	{1.0,-0.5,-1.0},	
};		

GLfloat colorArray[NFACES*NVERTICES*4][3]={
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    {1.0, 0.0, 0.0},
    //////////////
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    {0.0, 0.0, 1.0},
    //////////////
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    {0.0, 1.0, 0.0},
    //////////////
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    {1.0, 0.0, 1.0},
    
    
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
		glBegin(GL_TRIANGLES);
		for(indVertex=0;indVertex<NVERTICES;indVertex++){
			//draw Vertex and color
			glColor3fv(colorArray[indFace*NVERTICES + indVertex]);
			glVertex3fv(vertexArray[indFace*NVERTICES + indVertex]);
		};
		glEnd();
		
	};
	
	
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