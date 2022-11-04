
/* qcamera::FrameNumberRegistry::FrameNumberRegistry() */

FrameNumberRegistry * __thiscall
qcamera::FrameNumberRegistry::FrameNumberRegistry(FrameNumberRegistry *this)

{
  int iVar1;
  
  iVar1 = std::__1::
          map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
          ::map((map_unsigned_int_unsigned_int_std____1__less_unsigned_int__std____1__allocator_std____1__pair_unsigned_int_const_unsigned_int___
                 *)this);
  android::Mutex::Mutex((Mutex *)(iVar1 + 0x10));
  *(undefined4 *)(this + 0xc) = 800;
  return this;
}

