/*   
 * This file is part of cf4ocl (C Framework for OpenCL).
 * 
 * cf4ocl is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * cf4ocl is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with cf4ocl.  If not, see <http://www.gnu.org/licenses/>.
 * */
 
/** 
 * @file
 * @brief Matrix multiplication examples: common headers and definitions.
 * 
 * @author Nuno Fachada
 * @date 2013
 * @copyright [GNU General Public License version 3 (GPLv3)](http://www.gnu.org/licenses/gpl.html)
 * */

#ifndef MATMULT_H
#define MATMULT_H
 
#include <omp.h>
#include "exp_common.h"

/**
 * @brief Check if the multiplication is @f$C=AA^T@f$ (matrix A and its 
 * transpose).
 * 
 * @param kid Kernel ID.
 * @return Logical true if multiplication is @f$C=AA^T@f$, or logical
 * false if multiplication is @f$C=AB@f$.
 * */
#define IS_AAT(kid) ((kid > 2 && kid < 5)) 

/** @brief Create a new matrix with random values. */
int* matmult_matrix_new(int cols, int rows, int* matrix_range, GRand* rng);

/** @brief Free's a matrix created with matmult_matrix_new(). */
void matmult_matrix_free(int* matrix);

/** @brief Parse and verify command line arguments. */
int matmult_args_parse(int argc, char* argv[], GError** err);

#endif
