/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for develoarrg your own functions.
 */

#include "kata.h"


void
add_prog_1(char *host)
{
	CLIENT *clnt;
	double  *result_1;
	intpair  dimension_1_arg;
	int  *result_2;
	intpair  ip_1_arg;
	intpair  *result_3;
	intpair  avg_1_arg;
	intpair  *result_4;
	intpair  ginomeno_1_arg;
	int i;

#ifndef	DEBUG
	clnt = clnt_create (host, ADD_PROG, ADD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    dimension_1_arg.r = 2;
    dimension_1_arg.xy.xy_len = 2;
    dimension_1_arg.xy.xy_val = (int *) malloc(2*sizeof(int));        

    dimension_1_arg.arr.arr_len = 2;
    dimension_1_arg.arr.arr_val = (double *) malloc(2*sizeof(double));         

    dimension_1_arg.x.x_len = 2;
    dimension_1_arg.x.x_val = (int *) malloc(2*sizeof(int)); 
    dimension_1_arg.x.x_val[0] = 4;
    dimension_1_arg.x.x_val[1] = 7;
        
    dimension_1_arg.y.y_len = 2;
    dimension_1_arg.y.y_val = (int *) malloc(2*sizeof(int)); 
    dimension_1_arg.y.y_val[0] = 4;
    dimension_1_arg.y.y_val[1] = 7;

	result_1 = dimension_1(&dimension_1_arg, clnt);
	if (result_1 == (double *) NULL) {
		clnt_perror (clnt, "call failed");
	}else {
		printf("Dimensio x = %lf \n" , *result_1);
	}
	result_2 = ip_1(&dimension_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else {
		printf("Eswteriko ginnomeno = %d \n" , *result_2);
	}
	result_3 = avg_1(&dimension_1_arg, clnt);
	if (result_3 == (intpair *) NULL) {
		clnt_perror (clnt, "call failed");
	}else {
        	printf("Mesh thmh x: %f \n", result_3->arr.arr_val[0] );
		printf("Mesh thmh y: %f \n", result_3->arr.arr_val[1] );
	}	
	result_4 = ginomeno_1(&dimension_1_arg, clnt);
	if (result_4 == (intpair *) NULL) {
		clnt_perror (clnt, "call failed");
	}else {  
		printf("Return: ");
        for(i = 0; i<result_4->xy.xy_len; i++)
        printf(" %d \n", result_4->xy.xy_val[i]);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	add_prog_1 (host);
exit (0);
}
