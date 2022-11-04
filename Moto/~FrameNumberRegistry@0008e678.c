
/* qcamera::FrameNumberRegistry::~FrameNumberRegistry() */

FrameNumberRegistry * __thiscall
qcamera::FrameNumberRegistry::_FrameNumberRegistry(FrameNumberRegistry *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  std::__1::
  __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
             *)this,*(__tree_node **)(this + 4));
  return this;
}

