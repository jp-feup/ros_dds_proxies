//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Quaternion.h
//  Source: Quaternion.idl
//  Generated: Fri Jul 27 15:39:02 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _QUATERNION_H_
#define _QUATERNION_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Time.h"
struct Time;
struct Quaternion;


struct Quaternion
{
   DDS::Double x;
   DDS::Double y;
   DDS::Double z;
   DDS::Double w;
};

typedef DDS_DCPSStruct_var < Quaternion> Quaternion_var;
typedef Quaternion&Quaternion_out;




#endif 
