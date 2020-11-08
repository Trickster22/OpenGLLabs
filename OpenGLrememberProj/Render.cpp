#include "Render.h"

#include <sstream>
#include <iostream>

#include <windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

#include "MyOGL.h"

#include "Camera.h"
#include "Light.h"
#include "Primitives.h"

#include "GUItextRectangle.h"

GLuint texId;

double* normal(double *FirstP , double *SecP, double *ThirdP)
{
	double vx1 = FirstP[0] - SecP[0];
	double vy1 = FirstP[1] - SecP[1];
	double vz1 = FirstP[2] - SecP[2];
	double vx2 = SecP[0] - ThirdP[0];
	double vy2 = SecP[1] - ThirdP[1];
	double vz2 = SecP[2] - ThirdP[2];

	double normal[] = {0,0,0};

	normal[0] = vy1 * vz2 - vz1 * vy2;
	normal[1] = vz1 * vx2 - vx1 * vz2;
	normal[2] = vx1 * vy2 - vy1 * vx2;

	double wrki = sqrt(pow(vy1 * vz2 - vz1 * vy2, 2) + pow(vz1 * vx2 - vx1 * vz2, 2) + pow(vx1 * vy2 - vy1 * vx2, 2));

	normal[0] = normal[0] / wrki;
	normal[1] = normal[1] / wrki;
	normal[2] = normal[2] / wrki;
	
	return normal;

}

void figure()
{
#pragma region bot
	double A[] = { 9,0,0 };
	double B[] = { -5,-3,0 };
	double C[] = { -9,-1,0 };
	double D[] = { 0,3,0 };
	double E[] = { -3,7,0 };
	double F[] = { 6,11,0 };
	double G[] = { 1,1,0 };
	double H[] = { 7,4,0 };

	double I[] = { -0.78,2.17,0 };
	double J[] = { -1.83,1.28,0 };
	double K[] = { -2.68,0.7,0 };
	double L[] = { -4,0,0 };
	double M[] = { -5.2,-0.46,0 };
	double N[] = { -6.29,-0.75,0 };
	double O[] = { -7.68,-0.96,0 };

	double A1[] = { 5.78,11.4,0 };
	double B1[] = { 5.51,11.86,0 };
	double C1[] = { 5.16,12.3,0 };
	double D1[] = { 4.82,12.63,0 };
	double E1[] = { 4.46,12.94,0 };
	double F1[] = { 4.07,13.2,0 };
	double G1[] = { 3.66,13.43,0 };
	double H1[] = { 3.24,13.61,0 };
	double I1[] = { 2.81,13.75,0 };
	double J1[] = { 2.27,13.86,0 };
	double K1[] = { 1.99,13.9,0 };
	double L1[] = { 1.53,13.92,0 };
	double M1[] = { 0.98,13.9,0 };
	double N1[] = { 0.39,13.8,0 };
	double O1[] = { -0.14,13.64,0 };
	double P1[] = { -0.65,13.43,0 };
	double Q1[] = { -1.2,13.12,0 };
	double R1[] = { -1.74,12.71,0 };
	double S1[] = { -1.97,12.5,0 };
	double T1[] = { -2.17,12.28,0 };
	double U1[] = { -2.44,11.95,0 };
	double V1[] = { -2.66,11.63,0 };
	double W1[] = { -2.85,11.32,0 };
	double X1[] = { -3,11,0 };
	double Y1[] = { -3.16,10.6,0 };
	double Z1[] = { -3.27,10.22,0 };
	double A2[] = { -3.36,9.82,0 };
	double B2[] = { -3.4,9.48,0 };
	double C2[] = { -3.42,9.04,0 };
	double D2[] = { -3.41,8.59,0 };
	double E2[] = { -3.37,8.24,0 };
	double F2[] = { -3.3,7.91,0 };
	double G2[] = { -3.22,7.6,0 };
	double H2[] = { -3.12,7.28,0 };
	double CEN[] = { 1.5,9,0 };




	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(H);
	glVertex3dv(A);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(G);
	glVertex3dv(B);
	glVertex3dv(K);
	glVertex3dv(L);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(L);
	glVertex3dv(M);
	glVertex3dv(B);
	glVertex3dv(N);
	glVertex3dv(O);
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(B);
	glVertex3dv(O);
	glVertex3dv(C);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(K);
	glVertex3dv(J);
	glVertex3dv(G);
	glVertex3dv(I);
	glVertex3dv(D);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(G);
	glVertex3dv(D);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(F);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(CEN);
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(D);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(CEN);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(E);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glNormal3d(0, 0, -1);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(CEN);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(F);
	glVertex3dv(A1);
	glVertex3dv(B1);
	glVertex3dv(C1);
	glVertex3dv(D1);
	glVertex3dv(E1);
	glVertex3dv(F1);
	glVertex3dv(G1);
	glVertex3dv(H1);
	glVertex3dv(I1);
	glVertex3dv(J1);
	glVertex3dv(K1);
	glVertex3dv(L1);
	glVertex3dv(M1);
	glVertex3dv(N1);
	glVertex3dv(O1);
	glVertex3dv(P1);
	glVertex3dv(Q1);
	glVertex3dv(R1);
	glVertex3dv(S1);
	glVertex3dv(T1);
	glVertex3dv(U1);
	glVertex3dv(V1);
	glVertex3dv(W1);
	glVertex3dv(X1);
	glVertex3dv(Y1);
	glVertex3dv(Z1);
	glVertex3dv(A2);
	glVertex3dv(B2);
	glVertex3dv(C2);
	glVertex3dv(D2);
	glVertex3dv(E2);
	glVertex3dv(F2);
	glVertex3dv(G2);
	glVertex3dv(H2);
	glVertex3dv(E);
	glEnd();
#pragma endregion

#pragma region top
	double At[] = { 9,0,3 };
	double Bt[] = { -5,-3,3 };
	double Ct[] = { -9,-1,3 };
	double Dt[] = { 0,3,3 };
	double Et[] = { -3,7,3 };
	double Ft[] = { 6,11,3 };
	double Gt[] = { 1,1,3 };
	double Ht[] = { 7,4,3 };

	double It[] = { -0.78,2.17,3 };
	double Jt[] = { -1.83,1.28,3 };
	double Kt[] = { -2.68,0.7,3 };
	double Lt[] = { -4,0,3 };
	double Mt[] = { -5.2,-0.46,3 };
	double Nt[] = { -6.29,-0.75,3 };
	double Ot[] = { -7.68,-0.96,3 };

	double A1t[] = { 5.78,11.4,3 };
	double B1t[] = { 5.51,11.86,3 };
	double C1t[] = { 5.16,12.3,3 };
	double D1t[] = { 4.82,12.63,3 };
	double E1t[] = { 4.46,12.94,3 };
	double F1t[] = { 4.07,13.2,3 };
	double G1t[] = { 3.66,13.43,3 };
	double H1t[] = { 3.24,13.61,3 };
	double I1t[] = { 2.81,13.75,3 };
	double J1t[] = { 2.27,13.86,3 };
	double K1t[] = { 1.99,13.9,3 };
	double L1t[] = { 1.53,13.92,3 };
	double M1t[] = { 0.98,13.9,3 };
	double N1t[] = { 0.39,13.8,3 };
	double O1t[] = { -0.14,13.64,3 };
	double P1t[] = { -0.65,13.43,3 };
	double Q1t[] = { -1.2,13.12,3 };
	double R1t[] = { -1.74,12.71,3 };
	double S1t[] = { -1.97,12.5,3 };
	double T1t[] = { -2.17,12.28,3 };
	double U1t[] = { -2.44,11.95,3 };
	double V1t[] = { -2.66,11.63,3 };
	double W1t[] = { -2.85,11.32,3 };
	double X1t[] = { -3,11,3 };
	double Y1t[] = { -3.16,10.6,3 };
	double Z1t[] = { -3.27,10.22,3 };
	double A2t[] = { -3.36,9.82,3 };
	double B2t[] = { -3.4,9.48,3 };
	double C2t[] = { -3.42,9.04,3 };
	double D2t[] = { -3.41,8.59,3 };
	double E2t[] = { -3.37,8.24,3 };
	double F2t[] = { -3.3,7.91,3 };
	double G2t[] = { -3.22,7.6,3 };
	double H2t[] = { -3.12,7.28,3 };
	double CENt[] = { 1.5,9,3 };


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texId);

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(Ht[0], Ht[1]);
	glVertex3dv(Ht);
	glTexCoord2d(At[0], At[1]);
	glVertex3dv(At);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Gt[0], Gt[1]);
	glVertex3dv(Gt);
	glTexCoord2d(Bt[0], Bt[1]);
	glVertex3dv(Bt);
	glTexCoord2d(Kt[0], Kt[1]);
	glVertex3dv(Kt);
	glTexCoord2d(Lt[0], Lt[1]);
	glVertex3dv(Lt);
	glEnd();
	

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Lt[0], Lt[1]);
	glVertex3dv(Lt);
	glTexCoord2d(Mt[0], Mt[1]);
	glVertex3dv(Mt);
	glTexCoord2d(Bt[0], Bt[1]);
	glVertex3dv(Bt);
	glTexCoord2d(Nt[0], Nt[1]);
	glVertex3dv(Nt);
	glTexCoord2d(Ot[0], Ot[1]);
	glVertex3dv(Ot);
	glEnd();
	

	glBegin(GL_TRIANGLES);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Bt[0], Bt[1]);
	glVertex3dv(Bt);
	glTexCoord2d(Ot[0], Ot[1]);
	glVertex3dv(Ot);
	glTexCoord2d(Ct[0], Ct[1]);
	glVertex3dv(Ct);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Kt[0], Kt[1]);
	glVertex3dv(Kt);
	glTexCoord2d(Jt[0], Jt[1]);
	glVertex3dv(Jt);
	glTexCoord2d(Gt[0], Gt[1]);
	glVertex3dv(Gt);
	glTexCoord2d(It[0], It[1]);
	glVertex3dv(It);
	glTexCoord2d(Dt[0], Dt[1]);
	glVertex3dv(Dt);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Gt[0], Gt[1]);
	glVertex3dv(Gt);
	glTexCoord2d(Dt[0], Dt[1]);
	glVertex3dv(Dt);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(Ft[0], Ft[1]);
	glVertex3dv(Ft);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(CENt[0], CENt[1]);
	glVertex3dv(CENt);
	glEnd();

	glBegin(GL_TRIANGLES);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(Dt[0], Dt[1]);
	glVertex3dv(Dt);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(CENt[0], CENt[1]);
	glVertex3dv(CENt);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(Et[0], Et[1]);
	glVertex3dv(Et);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glNormal3d(0, 0, 1);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(CENt[0], CENt[1]);
	glVertex3dv(CENt);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(Ft[0], Ft[1]);
	glVertex3dv(Ft);
	glTexCoord2d(A1t[0], A1t[1]);
	glVertex3dv(A1t);
	glTexCoord2d(B1t[0], B1t[1]);
	glVertex3dv(B1t);
	glTexCoord2d(C1t[0], C1t[1]);
	glVertex3dv(C1t);
	glTexCoord2d(D1t[0], D1t[1]);
	glVertex3dv(D1t);
	glTexCoord2d(E1t[0], E1t[1]);
	glVertex3dv(E1t);
	glTexCoord2d(F1t[0], F1t[1]);
	glVertex3dv(F1t);
	glTexCoord2d(G1t[0], G1t[1]);
	glVertex3dv(G1t);
	glTexCoord2d(H1t[0], H1t[1]);
	glVertex3dv(H1t);
	glTexCoord2d(I1t[0], I1t[1]);
	glVertex3dv(I1t);
	glTexCoord2d(J1t[0], J1t[1]);
	glVertex3dv(J1t);
	glTexCoord2d(K1t[0], K1t[1]);
	glVertex3dv(K1t);
	glTexCoord2d(L1t[0], L1t[1]);
	glVertex3dv(L1t);
	glTexCoord2d(M1t[0], M1t[1]);
	glVertex3dv(M1t);
	glTexCoord2d(N1t[0], N1t[1]);
	glVertex3dv(N1t);
	glTexCoord2d(O1t[0], O1t[1]);
	glVertex3dv(O1t);
	glTexCoord2d(P1t[0], P1t[1]);
	glVertex3dv(P1t);
	glTexCoord2d(Q1t[0], Q1t[1]);
	glVertex3dv(Q1t);
	glTexCoord2d(R1t[0], R1t[1]);
	glVertex3dv(R1t);
	glTexCoord2d(S1t[0], S1t[1]);
	glVertex3dv(S1t);
	glTexCoord2d(T1t[0], T1t[1]);
	glVertex3dv(T1t);
	glTexCoord2d(U1t[0], U1t[1]);
	glVertex3dv(U1t);
	glTexCoord2d(V1t[0], V1t[1]);
	glVertex3dv(V1t);
	glTexCoord2d(W1t[0], W1t[1]);
	glVertex3dv(W1t);
	glTexCoord2d(X1t[0], X1t[1]);
	glVertex3dv(X1t);
	glTexCoord2d(Y1t[0], Y1t[1]);
	glVertex3dv(Y1t);
	glTexCoord2d(Z1t[0], Z1t[1]);
	glVertex3dv(Z1t);
	glTexCoord2d(A2t[0], A2t[1]);
	glVertex3dv(A2t);
	glTexCoord2d(B2t[0], B2t[1]);
	glVertex3dv(B2t);
	glTexCoord2d(C2t[0], C2t[1]);
	glVertex3dv(C2t);
	glTexCoord2d(D2t[0], D2t[1]);
	glVertex3dv(D2t);
	glTexCoord2d(E2t[0], E2t[1]);
	glVertex3dv(E2t);
	glTexCoord2d(F2t[0], F2t[1]);
	glVertex3dv(F2t);
	glTexCoord2d(G2t[0], G2t[1]);
	glVertex3dv(G2t);
	glTexCoord2d(H2t[0], H2t[1]);
	glVertex3dv(H2t);
	glTexCoord2d(Et[0], Et[1]);
	glVertex3dv(Et);
	glEnd();
	
#pragma endregion

#pragma region walls
	double* Nor1;

	glBegin(GL_QUAD_STRIP);
	glNormal3dv((Nor1 = normal(A, At, Bt)));
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(At[0], At[1]);
	glVertex3dv(At);
	glColor3d(0.06, 0.83, 0.38);
	glTexCoord2d(A[0], A[1]);
	glVertex3dv(A);
	glTexCoord2d(Bt[0], Bt[1]);
	glVertex3dv(Bt);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(B[0], B[1]);
	glVertex3dv(B);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(B, Ct, C)));
	glTexCoord2d(Ct[0], Ct[1]);
	glVertex3dv(Ct);
	glColor3d(0.06, 0.57, 0.83);
	glTexCoord2d(C[0], C[1]);
	glVertex3dv(C);

	
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(Ct,Ot, O)));         //непонятно что с нормалью здесь
	glVertex3dv(Ot);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(O);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(O, Nt, N)));
	glVertex3dv(Nt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(N);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(N, Mt, M)));
	glVertex3dv(Mt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(M);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(M, Lt, L)));
	glVertex3dv(Lt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(L);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(L, Kt, K)));
	glVertex3dv(Kt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(K);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(K, Jt, J)));
	glVertex3dv(Jt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(J);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(J, It, I)));
	glVertex3dv(It);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(I);
	glColor3d(0.06, 0.83, 0.38);
	glNormal3dv((Nor1 = normal(I, Dt, D)));
	glVertex3dv(Dt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(D);

	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(D, Et, E)));
	glVertex3dv(Et);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(E);

	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(E, H2t, H2)));
	glVertex3dv(H2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(H2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(H2, G2t, G2)));
	glVertex3dv(G2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(G2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(G2, F2t, F2)));
	glVertex3dv(F2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(F2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(F2, E2t, E2)));
	glVertex3dv(E2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(E2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(E2, D2t, D2)));
	glVertex3dv(D2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(D2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(D2, C2t, C2)));
	glVertex3dv(C2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(C2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(C2, B2t, B2)));
	glVertex3dv(B2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(B2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(B2, A2t, A2)));
	glVertex3dv(A2t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(A2);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(A2, Z1t, Z1)));
	glVertex3dv(Z1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(Z1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(Z1, Y1t, Y1)));
	glVertex3dv(Y1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(Y1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(Y1, X1t, X1)));
	glVertex3dv(X1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(X1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(X1, W1t, W1)));
	glVertex3dv(W1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(W1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(W1, V1t, V1)));
	glVertex3dv(V1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(V1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(V1, U1t, U1)));
	glVertex3dv(U1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(U1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(U1, T1t, T1)));
	glVertex3dv(T1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(T1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(T1, S1t, S1)));
	glVertex3dv(S1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(S1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(S1, R1t, R1)));
	glVertex3dv(R1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(R1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(R1, Q1t, Q1)));
	glVertex3dv(Q1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(Q1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(Q1, P1t, P1)));
	glVertex3dv(P1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(P1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(P1, O1t, O1)));
	glVertex3dv(O1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(O1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(O1, N1t, N1)));
	glVertex3dv(N1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(N1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(N1, M1t, M1)));
	glVertex3dv(M1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(M1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(M1, L1t, L1)));
	glVertex3dv(L1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(L1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(L1, K1t, K1)));
	glVertex3dv(K1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(K1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(K1, J1t, J1)));
	glVertex3dv(J1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(J1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(J1, I1t, I1)));
	glVertex3dv(I1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(I1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(I1, H1t, H1)));
	glVertex3dv(H1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(H1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(H1, G1t, G1)));
	glVertex3dv(G1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(G1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(G1, F1t, F1)));
	glVertex3dv(F1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(F1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(F1, E1t, E1)));
	glVertex3dv(E1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(E1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(E1, D1t, D1)));
	glVertex3dv(D1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(D1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(D1, C1t, C1)));
	glVertex3dv(C1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(C1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(C1, B1t, B1)));
	glVertex3dv(B1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(B1);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(B1, A1t, A1)));
	glVertex3dv(A1t);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(A1);

	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(A1, Ft, F)));
	glVertex3dv(Ft);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(F);
	glNormal3dv((Nor1 = normal(F, Gt, G)));
	glVertex3dv(Gt);
	glColor3d(0.06, 0.57, 0.83);
	glVertex3dv(G);
	glColor3d(0.06, 0.57, 0.83);
	glNormal3dv((Nor1 = normal(G, Ht, H)));
	glVertex3dv(Ht);
	glColor3d(0.06, 0.83, 0.38);
	glVertex3dv(H);
	glNormal3dv((Nor1 = normal(H, At, A)));
	glVertex3dv(At);
	glVertex3dv(A);

	glEnd();
	glDisable(GL_TEXTURE_2D);
#pragma endregion
}


bool textureMode = true;
bool lightMode = true;

//класс для настройки камеры
class CustomCamera : public Camera
{
public:
	//дистанция камеры
	double camDist;
	//углы поворота камеры
	double fi1, fi2;

	
	//значния масеры по умолчанию
	CustomCamera()
	{
		camDist = 15;
		fi1 = 1;
		fi2 = 1;
	}

	
	//считает позицию камеры, исходя из углов поворота, вызывается движком
	void SetUpCamera()
	{
		//отвечает за поворот камеры мышкой
		lookPoint.setCoords(0, 0, 0);

		pos.setCoords(camDist*cos(fi2)*cos(fi1),
			camDist*cos(fi2)*sin(fi1),
			camDist*sin(fi2));

		if (cos(fi2) <= 0)
			normal.setCoords(0, 0, -1);
		else
			normal.setCoords(0, 0, 1);

		LookAt();
	}

	void CustomCamera::LookAt()
	{
		//функция настройки камеры
		gluLookAt(pos.X(), pos.Y(), pos.Z(), lookPoint.X(), lookPoint.Y(), lookPoint.Z(), normal.X(), normal.Y(), normal.Z());
	}



}  camera;   //создаем объект камеры


//Класс для настройки света
class CustomLight : public Light
{
public:
	CustomLight()
	{
		//начальная позиция света
		pos = Vector3(1, 1, 3);
	}

	
	//рисует сферу и линии под источником света, вызывается движком
	void  DrawLightGhismo()
	{
		glDisable(GL_LIGHTING);

		
		glColor3d(0.9, 0.8, 0);
		Sphere s;
		s.pos = pos;
		s.scale = s.scale*0.08;
		s.Show();
		
		if (OpenGL::isKeyPressed('G'))
		{
			glColor3d(0, 0, 0);
			//линия от источника света до окружности
			glBegin(GL_LINES);
			glVertex3d(pos.X(), pos.Y(), pos.Z());
			glVertex3d(pos.X(), pos.Y(), 0);
			glEnd();

			//рисуем окруность
			Circle c;
			c.pos.setCoords(pos.X(), pos.Y(), 0);
			c.scale = c.scale*1.5;
			c.Show();
		}

	}

	void SetUpLight()
	{
		GLfloat amb[] = { 0.2, 0.2, 0.2, 0 };
		GLfloat dif[] = { 1.0, 1.0, 1.0, 0 };
		GLfloat spec[] = { .7, .7, .7, 0 };
		GLfloat position[] = { pos.X(), pos.Y(), pos.Z(), 1. };

		// параметры источника света
		glLightfv(GL_LIGHT0, GL_POSITION, position);
		// характеристики излучаемого света
		// фоновое освещение (рассеянный свет)
		glLightfv(GL_LIGHT0, GL_AMBIENT, amb);
		// диффузная составляющая света
		glLightfv(GL_LIGHT0, GL_DIFFUSE, dif);
		// зеркально отражаемая составляющая света
		glLightfv(GL_LIGHT0, GL_SPECULAR, spec);

		glEnable(GL_LIGHT0);
	}


} light;  //создаем источник света




//старые координаты мыши
int mouseX = 0, mouseY = 0;

void mouseEvent(OpenGL *ogl, int mX, int mY)
{
	int dx = mouseX - mX;
	int dy = mouseY - mY;
	mouseX = mX;
	mouseY = mY;

	//меняем углы камеры при нажатой левой кнопке мыши
	if (OpenGL::isKeyPressed(VK_RBUTTON))
	{
		camera.fi1 += 0.01*dx;
		camera.fi2 += -0.01*dy;
	}

	
	//двигаем свет по плоскости, в точку где мышь
	if (OpenGL::isKeyPressed('G') && !OpenGL::isKeyPressed(VK_LBUTTON))
	{
		LPPOINT POINT = new tagPOINT();
		GetCursorPos(POINT);
		ScreenToClient(ogl->getHwnd(), POINT);
		POINT->y = ogl->getHeight() - POINT->y;

		Ray r = camera.getLookRay(POINT->x, POINT->y);

		double z = light.pos.Z();

		double k = 0, x = 0, y = 0;
		if (r.direction.Z() == 0)
			k = 0;
		else
			k = (z - r.origin.Z()) / r.direction.Z();

		x = k*r.direction.X() + r.origin.X();
		y = k*r.direction.Y() + r.origin.Y();

		light.pos = Vector3(x, y, z);
	}

	if (OpenGL::isKeyPressed('G') && OpenGL::isKeyPressed(VK_LBUTTON))
	{
		light.pos = light.pos + Vector3(0, 0, 0.02*dy);
	}

	
}

void mouseWheelEvent(OpenGL *ogl, int delta)
{

	if (delta < 0 && camera.camDist <= 1)
		return;
	if (delta > 0 && camera.camDist >= 100)
		return;

	camera.camDist += 0.01*delta;

}

void keyDownEvent(OpenGL *ogl, int key)
{
	if (key == 'L')
	{
		lightMode = !lightMode;
	}

	if (key == 'T')
	{
		textureMode = !textureMode;
	}

	if (key == 'R')
	{
		camera.fi1 = 1;
		camera.fi2 = 1;
		camera.camDist = 15;

		light.pos = Vector3(1, 1, 3);
	}

	if (key == 'F')
	{
		light.pos = camera.pos;
	}
}

void keyUpEvent(OpenGL *ogl, int key)
{
	
}





//выполняется перед первым рендером
void initRender(OpenGL *ogl)
{
	//настройка текстур

	//4 байта на хранение пикселя
	glPixelStorei(GL_UNPACK_ALIGNMENT, 4);

	//настройка режима наложения текстур
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

	//включаем текстуры
	glEnable(GL_TEXTURE_2D);
	

	//массив трехбайтных элементов  (R G B)
	RGBTRIPLE *texarray;

	//массив символов, (высота*ширина*4      4, потомучто   выше, мы указали использовать по 4 байта на пиксель текстуры - R G B A)
	char *texCharArray;
	int texW, texH;
	OpenGL::LoadBMP("texture.bmp", &texW, &texH, &texarray);
	OpenGL::RGBtoChar(texarray, texW, texH, &texCharArray);

	
	
	//генерируем ИД для текстуры
	glGenTextures(1, &texId);
	//биндим айдишник, все что будет происходить с текстурой, будте происходить по этому ИД
	glBindTexture(GL_TEXTURE_2D, texId);

	//загружаем текстуру в видеопямять, в оперативке нам больше  она не нужна
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texW, texH, 0, GL_RGBA, GL_UNSIGNED_BYTE, texCharArray);

	//отчистка памяти
	free(texCharArray);
	free(texarray);

	//наводим шмон
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);


	//камеру и свет привязываем к "движку"
	ogl->mainCamera = &camera;
	ogl->mainLight = &light;

	// нормализация нормалей : их длины будет равна 1
	glEnable(GL_NORMALIZE);

	// устранение ступенчатости для линий
	glEnable(GL_LINE_SMOOTH); 


	//   задать параметры освещения
	//  параметр GL_LIGHT_MODEL_TWO_SIDE - 
	//                0 -  лицевые и изнаночные рисуются одинаково(по умолчанию), 
	//                1 - лицевые и изнаночные обрабатываются разными режимами       
	//                соответственно лицевым и изнаночным свойствам материалов.    
	//  параметр GL_LIGHT_MODEL_AMBIENT - задать фоновое освещение, 
	//                не зависящее от сточников
	// по умолчанию (0.2, 0.2, 0.2, 1.0)

	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, 0);

	camera.fi1 = -1.3;
	camera.fi2 = 0.8;
}





void Render(OpenGL *ogl)
{



	glDisable(GL_TEXTURE_2D);
	glDisable(GL_LIGHTING);

	glEnable(GL_DEPTH_TEST);
	if (textureMode)
		glEnable(GL_TEXTURE_2D);

	if (lightMode)
		glEnable(GL_LIGHTING);


	//альфаналожение
	//glEnable(GL_BLEND);
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


	//настройка материала
	GLfloat amb[] = { 0.2, 0.2, 0.1, 1. };
	GLfloat dif[] = { 0.4, 0.65, 0.5, 1. };
	GLfloat spec[] = { 0.9, 0.8, 0.3, 1. };
	GLfloat sh = 0.1f * 256;


	//фоновая
	glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
	//дифузная
	glMaterialfv(GL_FRONT, GL_DIFFUSE, dif);
	//зеркальная
	glMaterialfv(GL_FRONT, GL_SPECULAR, spec); \
		//размер блика
		glMaterialf(GL_FRONT, GL_SHININESS, sh);

	//чтоб было красиво, без квадратиков (сглаживание освещения)
	glShadeModel(GL_SMOOTH);
	//===================================
	//Прогать тут  

	figure();

	//Начало рисования квадратика станкина
	//double A[2] = { -4, -4 };
	//double B[2] = { 4, -4 };
	//double C[2] = { 4, 4 };
	//double D[2] = { -4, 4 };
	//
	//glBindTexture(GL_TEXTURE_2D, texId);
	//
	//glColor3d(0.6, 0.6, 0.6);
	//glBegin(GL_QUADS);
	//
	//glNormal3d(0, 0, 1);
	//glTexCoord2d(0, 0);
	//glVertex2dv(A);
	//glTexCoord2d(1, 0);
	//glVertex2dv(B);
	//glTexCoord2d(1, 1);
	//glVertex2dv(C);
	//glTexCoord2d(0, 1);
	//glVertex2dv(D);
	//
	//glEnd();
	//конец рисования квадратика станкина


   //Сообщение вверху экрана

	
	glMatrixMode(GL_PROJECTION);	//Делаем активной матрицу проекций. 
	                                //(всек матричные операции, будут ее видоизменять.)
	glPushMatrix();   //сохраняем текущую матрицу проецирования (которая описывает перспективную проекцию) в стек 				    
	glLoadIdentity();	  //Загружаем единичную матрицу
	glOrtho(0, ogl->getWidth(), 0, ogl->getHeight(), 0, 1);	 //врубаем режим ортогональной проекции

	glMatrixMode(GL_MODELVIEW);		//переключаемся на модел-вью матрицу
	glPushMatrix();			  //сохраняем текущую матрицу в стек (положение камеры, фактически)
	glLoadIdentity();		  //сбрасываем ее в дефолт

	glDisable(GL_LIGHTING);



	GuiTextRectangle rec;		   //классик моего авторства для удобной работы с рендером текста.
	rec.setSize(300, 150);
	rec.setPosition(10, ogl->getHeight() - 150 - 10);


	std::stringstream ss;
	ss << "T - вкл/выкл текстур" << std::endl;
	ss << "L - вкл/выкл освещение" << std::endl;
	ss << "F - Свет из камеры" << std::endl;
	ss << "G - двигать свет по горизонтали" << std::endl;
	ss << "G+ЛКМ двигать свет по вертекали" << std::endl;
	ss << "Коорд. света: (" << light.pos.X() << ", " << light.pos.Y() << ", " << light.pos.Z() << ")" << std::endl;
	ss << "Коорд. камеры: (" << camera.pos.X() << ", " << camera.pos.Y() << ", " << camera.pos.Z() << ")" << std::endl;
	ss << "Параметры камеры: R="  << camera.camDist << ", fi1=" << camera.fi1 << ", fi2=" << camera.fi2 << std::endl;
	
	rec.setText(ss.str().c_str());
	rec.Draw();

	glMatrixMode(GL_PROJECTION);	  //восстанавливаем матрицы проекции и модел-вью обратьно из стека.
	glPopMatrix();


	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

}