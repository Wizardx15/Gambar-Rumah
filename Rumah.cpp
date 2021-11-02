//Nama : Dana Eko Wahyu Pambudi
//NIM:19102137
//Kelas:S1IF-07-MM2


#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <windows.h>
#include <math.h>
//Fungsi yang ada di atas digunakan untuk menggunakan fungsi GLUT yang ada dalam Windows

void layar(void)
{
	glClearColor(1.0,1.0,1.0,0.0); // membuat latar belakang putih
	glColor3f(0.0f, 0.0f, 0.f); // membuat warna gambar hitam
	glPointSize(6.0); // ukuran titik 6 x 6 pixel
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0.0, 500.0, 0.0, 300.0);
}

void tampilanproyeksi(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
 
	// hapus layar
	glColor3f(0.5, 0.0, 0.0);
	
	//Tembok area depan (Polygon)
	glBegin(GL_POLYGON);
	glVertex2i(100, 100);
	glVertex2i(100, 200);
	glVertex2i(200, 200);
	glVertex2i(200, 100);
	glEnd();
	
 	//Tembok area gedung (polygon)
	glBegin(GL_POLYGON); 
	glVertex2i(200, 100);
	glVertex2i(200, 200);
	glVertex2i(400, 200);
	glVertex2i(400, 100);
	glEnd();
	
	//Pintu 
	glColor3f(1.0f,0.0f,0.5f);
	glBegin(GL_POLYGON); 
	glVertex2i(130, 100);
	glVertex2i(130, 150);
	glVertex2i(160, 150);
	glVertex2i(160, 100);
	glEnd();
	
	//Engsel pintu (Titik)
	glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POINTS); 
	glVertex2i(136, 120);
	 
	glEnd();
	 
	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
	
	//atap bagian depan
	glVertex2i(100, 200); 
	glVertex2i(150, 250);
	glVertex2i(200, 200);
	glEnd();
	glColor3f(1.0, 1.0, 0.5);
	
	//atap bagian gedung
	glBegin(GL_POLYGON); 
	 
	glVertex2i(200, 200);
	glVertex2i(150, 250);
	 
	glVertex2i(350, 250);
	glVertex2i(400, 200);
	glEnd();
	 
	glColor3f(0.5, 1.0, 1.0);
	glBegin(GL_POLYGON);
	
	//jendela bawah bagian kiri
	glVertex2i(275, 125); 
	glVertex2i(275, 150);
	glVertex2i(300, 150);
	glVertex2i(300, 125);
	glEnd();
	
	glColor3f(0.5, 1.0, 1.0);
	 
	glBegin(GL_POLYGON);
	
	//jendela atas bagian kiri
	glVertex2i(275, 150); 
	glVertex2i(275, 175);
	glVertex2i(300, 175);
	glVertex2i(300, 150);
	glEnd();
	 
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	
	//jendela bawah bagian kanan
	glVertex2i(300, 125); 
	glVertex2i(300, 150);
	glVertex2i(325, 150);
	glVertex2i(325, 125);
	glEnd();
	 
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	
	//jendela atas bagian kanan
	glVertex2i(300, 150); 
	glVertex2i(300, 175);
	glVertex2i(325, 175);
	glVertex2i(325, 150);
	glEnd();
	
	//atas polygon bawah garis
	 
	glColor3f(0.0f,0.0f,.0f);
	glBegin(GL_LINE_LOOP);
	
	//garis untuk tembok bagian depan
	glVertex2i(100, 100);
	glVertex2i(100, 200);
	glVertex2i(200, 200);
	glVertex2i(200, 100);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	
	//garis bagian pintu
	glVertex2i(130, 100); 
	glVertex2i(130, 150);
	glVertex2i(160, 150);
	glVertex2i(160, 100);
	glEnd();
	 
	glBegin(GL_LINE_LOOP);
	//garis bagian tembok belakang
	glVertex2i(200, 100); 
	glVertex2i(200, 200);
	glVertex2i(400, 200);
	glVertex2i(400, 100);
	glEnd();
	 
	glBegin(GL_LINE_LOOP);
	//garis bagian Atap depan
	glVertex2i(100, 200); 
	glVertex2i(150, 250);
	glVertex2i(200, 200);
	glEnd();
	 
	glBegin(GL_LINE_LOOP);
	//garis Bagian Atap Belakang
	glVertex2i(200, 200); 
	glVertex2i(150, 250);
	glVertex2i(350, 250);
	glVertex2i(400, 200);
	glEnd();
	 
	//garis jendela di bawah
	glColor3f(1.0f,1.0f,1.0f);
	 
	glBegin(GL_LINE_LOOP);
	//Jendela Bagian kiri bawah
	glVertex2i(275, 125); 
	glVertex2i(275, 150);
	glVertex2i(300, 150);
	glVertex2i(300, 125);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	//Jendela Bagian kiri atas
	glVertex2i(275, 150); 
	glVertex2i(275, 175);
	glVertex2i(300, 175);
	glVertex2i(300, 150);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	//Jendela Bagian kanan bawah
	glVertex2i(300, 125); 
	glVertex2i(300, 150);
	glVertex2i(325, 150);
	glVertex2i(325, 125);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	//Jendela bagian kanan atas
	glVertex2i(300, 150); 
	glVertex2i(300, 175);
	glVertex2i(325, 175);
	glVertex2i(325, 150);
	glEnd();
	glFlush(); // mengirim semua output ke layar
}
 

INT main(int argc, char** argv)
{
	glutInit(&argc, argv); // menginsialisasi toolkit
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // mengatur mode display
	glutInitWindowSize(600,300); // mengatur ukuran layar
	glutInitWindowPosition(100, 100); //mengatur posisi jendela dilayar
	 
	//acuan sudut kiri-atas
	glutCreateWindow("Rumah"); // digunakan untuk membuka layar di window
	glutDisplayFunc(tampilanproyeksi); // registrasi fungsi menggambar
	layar(); // pemanggilan fungsi layar
	glutMainLoop(); // bagian perulangan terus-menerus
}
