/* -*- mode: C; mode: folding; fill-column: 70; -*- */
/* Copyright 2010, , Georgia Institute of Technology, USA. */
/* See COPYING for license. */
#if !defined(RMAT_HEADER_)
#define RMAT_HEADER_

/** Fill IJ with a randomly permuted R-MAT generated edge list. */
void rmat_edgelist (int64_t *IJ, int64_t nedge, int SCALE,
		    double A, double B, double C);

#endif /* RMAT_HEADER_ */
