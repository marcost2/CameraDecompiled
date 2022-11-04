
/* qcamera::QCamera3StreamMem::clear() */

void __thiscall qcamera::QCamera3StreamMem::clear(QCamera3StreamMem *this)

{
  __tree_node *extraout_r1;
  uint in_r2;
  
  unregisterBuffers(this);
  __ThumbV7PILongThunk__ZN7qcamera17QCamera3StreamMem10deallocateEv
            ((allocator *)this,extraout_r1,in_r2);
  return;
}

