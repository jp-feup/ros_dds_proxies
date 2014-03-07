//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: QuaternionDcps.h
//  Source: QuaternionDcps.idl
//  Generated: Fri Jul 27 15:39:03 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _QUATERNIONDCPS_H_
#define _QUATERNIONDCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "Quaternion.h"
#include "dds_dcps_builtintopics.h"
#include "dds_builtinTopics.h"
#include "Time.h"
#include "dds_dcps_interfaces.h"
struct Time;
struct Quaternion;

class QuaternionTypeSupportInterface;

typedef QuaternionTypeSupportInterface * QuaternionTypeSupportInterface_ptr;
typedef DDS_DCPSInterface_var < QuaternionTypeSupportInterface> QuaternionTypeSupportInterface_var;
typedef DDS_DCPSInterface_out < QuaternionTypeSupportInterface> QuaternionTypeSupportInterface_out;


class QuaternionDataWriter;

typedef QuaternionDataWriter * QuaternionDataWriter_ptr;
typedef DDS_DCPSInterface_var < QuaternionDataWriter> QuaternionDataWriter_var;
typedef DDS_DCPSInterface_out < QuaternionDataWriter> QuaternionDataWriter_out;


class QuaternionDataReader;

typedef QuaternionDataReader * QuaternionDataReader_ptr;
typedef DDS_DCPSInterface_var < QuaternionDataReader> QuaternionDataReader_var;
typedef DDS_DCPSInterface_out < QuaternionDataReader> QuaternionDataReader_out;


class QuaternionDataReaderView;

typedef QuaternionDataReaderView * QuaternionDataReaderView_ptr;
typedef DDS_DCPSInterface_var < QuaternionDataReaderView> QuaternionDataReaderView_var;
typedef DDS_DCPSInterface_out < QuaternionDataReaderView> QuaternionDataReaderView_out;


struct QuaternionSeq_uniq_ {};
typedef DDS_DCPSUFLSeq < Quaternion, struct QuaternionSeq_uniq_> QuaternionSeq;
typedef DDS_DCPSSequence_var < QuaternionSeq> QuaternionSeq_var;
typedef DDS_DCPSSequence_out < QuaternionSeq> QuaternionSeq_out;
class QuaternionTypeSupportInterface
:
   virtual public DDS::TypeSupport
{ 
public:
   typedef QuaternionTypeSupportInterface_ptr _ptr_type;
   typedef QuaternionTypeSupportInterface_var _var_type;

   static QuaternionTypeSupportInterface_ptr _duplicate (QuaternionTypeSupportInterface_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static QuaternionTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
   static QuaternionTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static QuaternionTypeSupportInterface_ptr _nil () { return 0; }
   static const char * _local_id;
   QuaternionTypeSupportInterface_ptr _this () { return this; }


protected:
   QuaternionTypeSupportInterface () {};
   ~QuaternionTypeSupportInterface () {};
private:
   QuaternionTypeSupportInterface (const QuaternionTypeSupportInterface &);
   QuaternionTypeSupportInterface & operator = (const QuaternionTypeSupportInterface &);
};

class QuaternionDataWriter
:
   virtual public DDS::DataWriter
{ 
public:
   typedef QuaternionDataWriter_ptr _ptr_type;
   typedef QuaternionDataWriter_var _var_type;

   static QuaternionDataWriter_ptr _duplicate (QuaternionDataWriter_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static QuaternionDataWriter_ptr _narrow (DDS::Object_ptr obj);
   static QuaternionDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static QuaternionDataWriter_ptr _nil () { return 0; }
   static const char * _local_id;
   QuaternionDataWriter_ptr _this () { return this; }

   virtual DDS::InstanceHandle_t register_instance (const Quaternion& instance_data) = 0;
   virtual DDS::InstanceHandle_t register_instance_w_timestamp (const Quaternion& instance_data, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t unregister_instance (const Quaternion& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t unregister_instance_w_timestamp (const Quaternion& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t write (const Quaternion& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t write_w_timestamp (const Quaternion& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t dispose (const Quaternion& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t dispose_w_timestamp (const Quaternion& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t writedispose (const Quaternion& instance_data, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::ReturnCode_t writedispose_w_timestamp (const Quaternion& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::ReturnCode_t get_key_value (Quaternion& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Quaternion& instance_data) = 0;

protected:
   QuaternionDataWriter () {};
   ~QuaternionDataWriter () {};
private:
   QuaternionDataWriter (const QuaternionDataWriter &);
   QuaternionDataWriter & operator = (const QuaternionDataWriter &);
};

class QuaternionDataReader
:
   virtual public DDS::DataReader
{ 
public:
   typedef QuaternionDataReader_ptr _ptr_type;
   typedef QuaternionDataReader_var _var_type;

   static QuaternionDataReader_ptr _duplicate (QuaternionDataReader_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static QuaternionDataReader_ptr _narrow (DDS::Object_ptr obj);
   static QuaternionDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static QuaternionDataReader_ptr _nil () { return 0; }
   static const char * _local_id;
   QuaternionDataReader_ptr _this () { return this; }

   virtual DDS::ReturnCode_t read (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t read_next_sample (Quaternion& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t take_next_sample (Quaternion& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t read_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_next_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_next_instance_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t return_loan (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::ReturnCode_t get_key_value (Quaternion& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Quaternion& instance) = 0;

protected:
   QuaternionDataReader () {};
   ~QuaternionDataReader () {};
private:
   QuaternionDataReader (const QuaternionDataReader &);
   QuaternionDataReader & operator = (const QuaternionDataReader &);
};

class QuaternionDataReaderView
:
   virtual public DDS::DataReaderView
{ 
public:
   typedef QuaternionDataReaderView_ptr _ptr_type;
   typedef QuaternionDataReaderView_var _var_type;

   static QuaternionDataReaderView_ptr _duplicate (QuaternionDataReaderView_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static QuaternionDataReaderView_ptr _narrow (DDS::Object_ptr obj);
   static QuaternionDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static QuaternionDataReaderView_ptr _nil () { return 0; }
   static const char * _local_id;
   QuaternionDataReaderView_ptr _this () { return this; }

   virtual DDS::ReturnCode_t read (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t read_next_sample (Quaternion& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t take_next_sample (Quaternion& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::ReturnCode_t read_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t take_next_instance (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
   virtual DDS::ReturnCode_t read_next_instance_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t take_next_instance_w_condition (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::ReturnCode_t return_loan (QuaternionSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::ReturnCode_t get_key_value (Quaternion& key_holder, DDS::InstanceHandle_t handle) = 0;
   virtual DDS::InstanceHandle_t lookup_instance (const Quaternion& instance) = 0;

protected:
   QuaternionDataReaderView () {};
   ~QuaternionDataReaderView () {};
private:
   QuaternionDataReaderView (const QuaternionDataReaderView &);
   QuaternionDataReaderView & operator = (const QuaternionDataReaderView &);
};

template <>
DDS::BuiltinTopicKey_t_slice* DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::copy (DDS::BuiltinTopicKey_t_slice *to, const DDS::BuiltinTopicKey_t_slice* from);
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::free (DDS::BuiltinTopicKey_t_slice *ptr);




#endif 