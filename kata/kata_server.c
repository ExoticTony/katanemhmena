/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for develoarrg your own functions.
 */

#include "kata.h"

double *
dimension_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static double  result;

	int i;
	result=0;
	printf("parametroi: %d, %d, %d\n", argp->x.x_val[0], argp->x.x_val[1],   argp->x.x_len);

	for(i=0; i<argp->x.x_len; i++) {

	result += argp->x.x_val[i]*argp->x.x_val[i];
	}
	printf("returning: %lf \n", result);

	return &result;
}

int *
ip_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	int i;
	result=0;
	printf("parametroi: %d, %d, %d\n", argp->x.x_val[0], argp->x.x_val[1],   argp->x.x_len);

	for(i=0; i<argp->x.x_len; i++) {

	result += argp->x.x_val[i]*argp->y.y_val[i];
	}
	printf("returning: %d \n", result);

	return &result;
}

intpair *
avg_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static intpair  result;

	double mo;
    int i;
        
    result.arr.arr_len = 2;
    result.arr.arr_val = (double*) malloc(2*sizeof(double));
            
    mo = 0;       
 
	for(i = 0; i<argp->x.x_len; i++){ 
        mo += argp->x.x_val[i]; }

        result.arr.arr_val[0] = mo/argp->x.x_len;
        
        printf("Result x: %lf \n", result.arr.arr_val[0]);

        mo = 0;
        
	for(i = 0; i<argp->y.y_len; i++){ 
        mo += argp->y.y_val[i]; }
        
        result.arr.arr_val[1] = mo/argp->y.y_len;
        
        printf("Result y: %lf \n", result.arr.arr_val[1]);

	return &result;
}

intpair *
ginomeno_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static intpair  result;

	int i;

    result.xy.xy_len = 2;
    result.xy.xy_val = (int*) malloc(2*sizeof(int));
	
    for(i = 0; i<result.xy.xy_len; i++)
    result.xy.xy_val[i] =  (argp->x.x_val[i] + argp->y.y_val[i]) * argp->r;
        
    printf("Return is: ");
    for(i = 0; i<result.xy.xy_len; i++)
    printf(" %d \n", result.xy.xy_val[i]);

	return &result;
}
