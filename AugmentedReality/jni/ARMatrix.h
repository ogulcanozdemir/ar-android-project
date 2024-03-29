/*
 * ARMatrix.h
 *
 *  Created on: May 26, 2013
 *      Author: oulcan
 */

#ifndef ARMATRIX_H_
#define ARMATRIX_H_

#include <math.h>

#define MYPI 3.14159265358979323846

void translate_matrix(float tx, float ty, float tz, float *M);
void scale_matrix(float xs, float ys, float zs, float *M);
void rotate_matrix(float angle, float x, float y, float z, float *M);
void perspective_matrix(float fovy, float aspect, float znear, float zfar, float *M);
void multiply_matrix(float *A, float *B, float *M);

#endif /* ARMATRIX_H_ */
