// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data_define.proto

#ifndef PROTOBUF_data_5fdefine_2eproto__INCLUDED
#define PROTOBUF_data_5fdefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_data_5fdefine_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMyDataImpl();
void InitDefaultsMyData();
void InitDefaultsProtoMap_DataMapEntry_DoNotUseImpl();
void InitDefaultsProtoMap_DataMapEntry_DoNotUse();
void InitDefaultsProtoMapImpl();
void InitDefaultsProtoMap();
void InitDefaultsProtoListImpl();
void InitDefaultsProtoList();
inline void InitDefaults() {
  InitDefaultsMyData();
  InitDefaultsProtoMap_DataMapEntry_DoNotUse();
  InitDefaultsProtoMap();
  InitDefaultsProtoList();
}
}  // namespace protobuf_data_5fdefine_2eproto
class MyData;
class MyDataDefaultTypeInternal;
extern MyDataDefaultTypeInternal _MyData_default_instance_;
class ProtoList;
class ProtoListDefaultTypeInternal;
extern ProtoListDefaultTypeInternal _ProtoList_default_instance_;
class ProtoMap;
class ProtoMapDefaultTypeInternal;
extern ProtoMapDefaultTypeInternal _ProtoMap_default_instance_;
class ProtoMap_DataMapEntry_DoNotUse;
class ProtoMap_DataMapEntry_DoNotUseDefaultTypeInternal;
extern ProtoMap_DataMapEntry_DoNotUseDefaultTypeInternal _ProtoMap_DataMapEntry_DoNotUse_default_instance_;

// ===================================================================

class MyData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MyData) */ {
 public:
  MyData();
  virtual ~MyData();

  MyData(const MyData& from);

  inline MyData& operator=(const MyData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MyData(MyData&& from) noexcept
    : MyData() {
    *this = ::std::move(from);
  }

  inline MyData& operator=(MyData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MyData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MyData* internal_default_instance() {
    return reinterpret_cast<const MyData*>(
               &_MyData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MyData* other);
  friend void swap(MyData& a, MyData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MyData* New() const PROTOBUF_FINAL { return New(NULL); }

  MyData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MyData& from);
  void MergeFrom(const MyData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MyData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MyData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int64 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_data_5fdefine_2eproto::TableStruct;
  friend void ::protobuf_data_5fdefine_2eproto::InitDefaultsMyDataImpl();
};
// -------------------------------------------------------------------

class ProtoMap_DataMapEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<ProtoMap_DataMapEntry_DoNotUse, 
    ::google::protobuf::int64, ::MyData,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<ProtoMap_DataMapEntry_DoNotUse, 
    ::google::protobuf::int64, ::MyData,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  ProtoMap_DataMapEntry_DoNotUse();
  ProtoMap_DataMapEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const ProtoMap_DataMapEntry_DoNotUse& other);
  static const ProtoMap_DataMapEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const ProtoMap_DataMapEntry_DoNotUse*>(&_ProtoMap_DataMapEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class ProtoMap : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoMap) */ {
 public:
  ProtoMap();
  virtual ~ProtoMap();

  ProtoMap(const ProtoMap& from);

  inline ProtoMap& operator=(const ProtoMap& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoMap(ProtoMap&& from) noexcept
    : ProtoMap() {
    *this = ::std::move(from);
  }

  inline ProtoMap& operator=(ProtoMap&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoMap& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoMap* internal_default_instance() {
    return reinterpret_cast<const ProtoMap*>(
               &_ProtoMap_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ProtoMap* other);
  friend void swap(ProtoMap& a, ProtoMap& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoMap* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoMap* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoMap& from);
  void MergeFrom(const ProtoMap& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoMap* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<int64, .MyData> data_map = 1;
  int data_map_size() const;
  void clear_data_map();
  static const int kDataMapFieldNumber = 1;
  const ::google::protobuf::Map< ::google::protobuf::int64, ::MyData >&
      data_map() const;
  ::google::protobuf::Map< ::google::protobuf::int64, ::MyData >*
      mutable_data_map();

  // @@protoc_insertion_point(class_scope:ProtoMap)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      ProtoMap_DataMapEntry_DoNotUse,
      ::google::protobuf::int64, ::MyData,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > data_map_;
  mutable int _cached_size_;
  friend struct ::protobuf_data_5fdefine_2eproto::TableStruct;
  friend void ::protobuf_data_5fdefine_2eproto::InitDefaultsProtoMapImpl();
};
// -------------------------------------------------------------------

class ProtoList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoList) */ {
 public:
  ProtoList();
  virtual ~ProtoList();

  ProtoList(const ProtoList& from);

  inline ProtoList& operator=(const ProtoList& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoList(ProtoList&& from) noexcept
    : ProtoList() {
    *this = ::std::move(from);
  }

  inline ProtoList& operator=(ProtoList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoList* internal_default_instance() {
    return reinterpret_cast<const ProtoList*>(
               &_ProtoList_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ProtoList* other);
  friend void swap(ProtoList& a, ProtoList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoList* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoList* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoList& from);
  void MergeFrom(const ProtoList& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .MyData data_vec = 1;
  int data_vec_size() const;
  void clear_data_vec();
  static const int kDataVecFieldNumber = 1;
  const ::MyData& data_vec(int index) const;
  ::MyData* mutable_data_vec(int index);
  ::MyData* add_data_vec();
  ::google::protobuf::RepeatedPtrField< ::MyData >*
      mutable_data_vec();
  const ::google::protobuf::RepeatedPtrField< ::MyData >&
      data_vec() const;

  // @@protoc_insertion_point(class_scope:ProtoList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::MyData > data_vec_;
  mutable int _cached_size_;
  friend struct ::protobuf_data_5fdefine_2eproto::TableStruct;
  friend void ::protobuf_data_5fdefine_2eproto::InitDefaultsProtoListImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MyData

// int64 id = 1;
inline void MyData::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MyData::id() const {
  // @@protoc_insertion_point(field_get:MyData.id)
  return id_;
}
inline void MyData::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:MyData.id)
}

// string name = 2;
inline void MyData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyData::name() const {
  // @@protoc_insertion_point(field_get:MyData.name)
  return name_.GetNoArena();
}
inline void MyData::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MyData.name)
}
#if LANG_CXX11
inline void MyData::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MyData.name)
}
#endif
inline void MyData::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MyData.name)
}
inline void MyData::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MyData.name)
}
inline ::std::string* MyData::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:MyData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyData::release_name() {
  // @@protoc_insertion_point(field_release:MyData.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:MyData.name)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// ProtoMap

// map<int64, .MyData> data_map = 1;
inline int ProtoMap::data_map_size() const {
  return data_map_.size();
}
inline void ProtoMap::clear_data_map() {
  data_map_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int64, ::MyData >&
ProtoMap::data_map() const {
  // @@protoc_insertion_point(field_map:ProtoMap.data_map)
  return data_map_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int64, ::MyData >*
ProtoMap::mutable_data_map() {
  // @@protoc_insertion_point(field_mutable_map:ProtoMap.data_map)
  return data_map_.MutableMap();
}

// -------------------------------------------------------------------

// ProtoList

// repeated .MyData data_vec = 1;
inline int ProtoList::data_vec_size() const {
  return data_vec_.size();
}
inline void ProtoList::clear_data_vec() {
  data_vec_.Clear();
}
inline const ::MyData& ProtoList::data_vec(int index) const {
  // @@protoc_insertion_point(field_get:ProtoList.data_vec)
  return data_vec_.Get(index);
}
inline ::MyData* ProtoList::mutable_data_vec(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoList.data_vec)
  return data_vec_.Mutable(index);
}
inline ::MyData* ProtoList::add_data_vec() {
  // @@protoc_insertion_point(field_add:ProtoList.data_vec)
  return data_vec_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::MyData >*
ProtoList::mutable_data_vec() {
  // @@protoc_insertion_point(field_mutable_list:ProtoList.data_vec)
  return &data_vec_;
}
inline const ::google::protobuf::RepeatedPtrField< ::MyData >&
ProtoList::data_vec() const {
  // @@protoc_insertion_point(field_list:ProtoList.data_vec)
  return data_vec_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_5fdefine_2eproto__INCLUDED