/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _KATA_H_RPCGEN
#define _KATA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct intpair {
	struct {
		u_int x_len;
		int *x_val;
	} x;
	struct {
		u_int y_len;
		int *y_val;
	} y;
	int n;
	struct {
		u_int arr_len;
		double *arr_val;
	} arr;
	int r;
	struct {
		u_int xy_len;
		int *xy_val;
	} xy;
};
typedef struct intpair intpair;

#define ADD_PROG 0x23451111
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define dimension 1
extern  double * dimension_1(intpair *, CLIENT *);
extern  double * dimension_1_svc(intpair *, struct svc_req *);
#define ip 2
extern  int * ip_1(intpair *, CLIENT *);
extern  int * ip_1_svc(intpair *, struct svc_req *);
#define avg 3
extern  intpair * avg_1(intpair *, CLIENT *);
extern  intpair * avg_1_svc(intpair *, struct svc_req *);
#define ginomeno 4
extern  intpair * ginomeno_1(intpair *, CLIENT *);
extern  intpair * ginomeno_1_svc(intpair *, struct svc_req *);
extern int add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define dimension 1
extern  double * dimension_1();
extern  double * dimension_1_svc();
#define ip 2
extern  int * ip_1();
extern  int * ip_1_svc();
#define avg 3
extern  intpair * avg_1();
extern  intpair * avg_1_svc();
#define ginomeno 4
extern  intpair * ginomeno_1();
extern  intpair * ginomeno_1_svc();
extern int add_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_intpair (XDR *, intpair*);

#else /* K&R C */
extern bool_t xdr_intpair ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_KATA_H_RPCGEN */