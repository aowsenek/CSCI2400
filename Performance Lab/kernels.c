/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

/*
 * Please fill in the following student struct:
 */
const team_t team = {
    "anow6879@colorado.edu", //Replace this with your email address.
    ""                   //Replace this with your partner's email address. Leave blank if working alone.
};

/***************
 * FLIP KERNEL
 ***************/

/******************************************************
 * Your different versions of the flip kernel go here
 ******************************************************/
 
/* 
 * naive_flip - The naive baseline version of flip 
 */
char naive_flip_descr[] = "naive_flip: Naive baseline implementation";
void naive_flip(int dim, pixel *src, pixel *dst) 
{
    int i,j;
    for (i = 0; i < dim; i++){
        for (j = 0; j < dim; j++){
            dst[RIDX_F(i, j, dim)].red   = src[RIDX(i, j, dim)].red;
            dst[RIDX_F(i, j, dim)].green = src[RIDX(i, j, dim)].green;
            dst[RIDX_F(i, j, dim)].blue  = src[RIDX(i, j, dim)].blue;
        }
    }
}

/* 
 * flip - Your current working version of flip
 * IMPORTANT: This is the version you will be graded on
 */
//#define RIDX_Flip(i,j,n) ((n)-(i),(n)-(j))

char flip_descr[] = "rewrite ridx_f";
inline void flip(int dim, pixel *src, pixel *dst)
{              
    int i,j;
    for (i = 0; i < dim; i++){
        for (j = 0; j < dim; j++){
	    int ridxf = RIDX_F(i, j, dim);
	    int ridx = RIDX(i, j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
}}}
#pragma GCC push_options
#pragma GCC optimize("-O3")
char flip_ridx_descr[] = "unrolled ridx";
inline void flip_r(int dim, pixel *src, pixel *dst)
{              
    int i,j,ridxf,ridx;
    for (i = 0; i < dim; i++){
        for (j = 0; j < dim; j++){
	    ridxf = RIDX_F(i, j, dim);
	    ridx = RIDX(i, j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
	    j++;
	    ridxf = RIDX_F(i,j,dim);
	    ridx = RIDX(i ,j, dim);
            dst[ridxf].red   = src[ridx].red;
            dst[ridxf].green = src[ridx].green;
            dst[ridxf].blue  = src[ridx].blue;
        }
    }
}
#pragma GCC pop_options

/*********************************************************************
 * register_flip_functions - Register all of your different versions
 *     of the flip kernel with the driver by calling the
 *     add_flip_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 *********************************************************************/

void register_flip_functions() 
{
    add_flip_function(&flip, flip_descr);   
    //add_flip_function(&naive_flip, naive_flip_descr);   
    
//add_flip_function(&flip_r, flip_ridx_descr);   
    /* ... Register additional test functions here */
}


/***************
 * CONVOLVE KERNEL
 **************/
 
/***************************************************************
 * Various typedefs and helper functions for the convolve function
 * You may modify these any way you like.
 **************************************************************/

/* A struct used to compute a pixel value */
typedef struct {
    float red;
    float green;
    float blue;
    float weight;
} pixel_sum;

/******************************************************
 * Your different versions of the convolve kernel go here
 ******************************************************/

/*
 * naive_convolve - The naive baseline version of convolve 
 */
char naive_convolve_descr[] = "naive_convolve: Naive baseline implementation";
void naive_convolve(int dim, pixel *src, pixel *dst) 
{
    int i, j, ii, jj, curI, curJ;
    pixel_sum ps;
    
    for (j = 0; j < dim; j++){
        for (i = 0; i < dim; i++){
	    ps.red    = 0.0;
	    ps.green  = 0.0;
	    ps.blue   = 0.0;
	    ps.weight = 0.0;
            for (jj = -2; jj <= 2; jj++){
                    curJ = j+jj;
                    if(curJ<0 || curJ>=dim){
                        continue;
                    }
                for (ii = -2; ii <= 2; ii++){
                    curI = i+ii;
                    if(curI<0 || curI>=dim){
                        continue;
                    }
                    ps.red   += src[RIDX(curI, curJ, dim)].red *   kernel[ii+2][jj+2];
                    ps.green += src[RIDX(curI, curJ, dim)].green * kernel[ii+2][jj+2];
                    ps.blue  += src[RIDX(curI, curJ, dim)].blue *  kernel[ii+2][jj+2];
                    ps.weight += kernel[ii+2][jj+2];
                }
            }
            dst[RIDX(i,j,dim)].red   = (unsigned short)(ps.red/ps.weight);
            dst[RIDX(i,j,dim)].green = (unsigned short)(ps.green/ps.weight);
            dst[RIDX(i,j,dim)].blue  = (unsigned short)(ps.blue/ps.weight);
        }
    }
}

/*
 * convolve - Your current working version of convolve. 
 * IMPORTANT: This is the version you will be graded on
 */
char convolve_descr[] = "convolve: Current working version";
inline void convolve(int dim, pixel *src, pixel *dst) 
{
    static int i, j, ii, jj, curI, curJ, ridx, ridxc;
    static pixel_sum ps;
    
    for (j = 0; j < dim; j++){
        for (i = 0; i < dim; i++){
	    ps.red    = 0.0;
	    ps.green  = 0.0;
	    ps.blue   = 0.0;
	    ps.weight = 0.0;
            //for (jj = -2; jj <= 2; jj++)
	    for(jj = 0; jj <= 4 ; jj++){
                //for (ii = -2; ii <= 2; ii++)
		for (ii = 0; ii <= 4; ii++){
                    //curJ = j+jj;
		    curJ = j + jj - 2;
                    if(curJ<0 || curJ>=dim){
                        continue;
                    }
                    //curI = i+ii;
		    curI = i + ii - 2;
                    if(curI<0 || curI>=dim){
                        continue;
                    }
		    ridxc = RIDX(curI, curJ, dim);
                    ps.red   += src[ridxc].red *   kernel[ii][jj]; //all used to be jj+2, ii+2
                    ps.green += src[ridxc].green * kernel[ii][jj];
                    ps.blue  += src[ridxc].blue *  kernel[ii][jj];
                    ps.weight += kernel[ii][jj];
                }
            }
	    ridx = RIDX(i,j,dim);
            dst[ridx].red   = (unsigned short)(ps.red/ps.weight);
            dst[ridx].green = (unsigned short)(ps.green/ps.weight);
            dst[ridx].blue  = (unsigned short)(ps.blue/ps.weight);
        }
    }
}

/********************************************************************* 
 * register_convolve_functions - Register all of your different versions
 *     of the convolve kernel with the driver by calling the
 *     add_convolve_function() for each test function.  When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 *********************************************************************/

void register_convolve_functions() {
    add_convolve_function(&convolve, convolve_descr);
    //add_convolve_function(&naive_convolve, naive_convolve_descr);
    /* ... Register additional test functions here */
}

