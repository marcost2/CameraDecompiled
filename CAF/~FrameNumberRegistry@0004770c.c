
/* qcamera::FrameNumberRegistry::~FrameNumberRegistry() */

void __thiscall qcamera::FrameNumberRegistry::_FrameNumberRegistry(FrameNumberRegistry *this)

{
  android::Mutex::_Mutex((Mutex *)(this + 0x10));
  std::__1::
  map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
  ::_map((map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
          *)this);
  return;
}

