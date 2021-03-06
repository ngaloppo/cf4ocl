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
 * along with cf4ocl. If not, see <http://www.gnu.org/licenses/>.
 * */

/** 
 * @file
 * @brief Stubs for testing profiling framework.
 * 
 * @author Nuno Fachada
 * @date 2013
 * @copyright [GNU General Public License version 3 (GPLv3)](http://www.gnu.org/licenses/gpl.html)
 * */

#ifndef TEST_PROFILER_H
#define TEST_PROFILER_H

#include <stdlib.h>

/** @brief OpenCL success code. */
#define CL_SUCCESS 0

/** @brief OpenCL maximum unsigned long. */
#define CL_ULONG_MAX ((cl_ulong) 0xFFFFFFFFFFFFFFFFULL)

/** @brief Replaces OpenCL cl_int type. */ 
typedef int cl_int;

/** @brief Replaces OpenCL cl_command_queue type. */ 
typedef void* cl_command_queue;

/** @brief Replaces OpenCL cl_ulong type. */ 
typedef unsigned long cl_ulong;

/** @brief Stub for cl_event objects. */ 
typedef struct clEvent {
	cl_ulong start;
	cl_ulong end;
	cl_command_queue queue;
} cl_event;

/** @brief Stub for cl_profiling_info enum. */ 
typedef enum clProfilingInfo {
	CL_PROFILING_COMMAND_START,
	CL_PROFILING_COMMAND_END	
} cl_profiling_info;

/** @brief Stub for cl_event_info enum. */ 
typedef enum clEventInfo {
	CL_EVENT_COMMAND_QUEUE	
} cl_event_info;

/** @brief Stub for clGetEventProfilingInfo function. */ 
cl_int clGetEventProfilingInfo(cl_event event, cl_profiling_info param_name, size_t param_value_size, void* param_value, size_t* param_value_size_ret);

/** @brief Stub for clGetEventInfo function. */ 
cl_int clGetEventInfo(cl_event event, cl_event_info param_name, size_t param_value_size, void *param_value, size_t *param_value_size_ret);

#endif
