//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Point.h
//  Source: Point.idl
//  Generated: Wed Oct  2 09:48:22 2013
//  OpenSplice V6.2.0
//  
//******************************************************************
#ifndef _POINT_H_
#define _POINT_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Time.h"
struct Time;
struct Point;


struct Point
{
   DDS::Double x;
   DDS::Double y;
   DDS::Double z;
};

typedef DDS_DCPSStruct_var < Point> Point_var;
typedef Point&Point_out;




#endif 