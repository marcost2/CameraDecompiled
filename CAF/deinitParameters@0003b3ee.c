
/* qcamera::QCamera3HardwareInterface::deinitParameters() */

void __thiscall
qcamera::QCamera3HardwareInterface::deinitParameters(QCamera3HardwareInterface *this)

{
  __tree_node *extraout_r1;
  code *pcVar1;
  
  pcVar1 = *(code **)((*(undefined4 **)(this + 0x50))[1] + 0x14);
  (*pcVar1)(**(undefined4 **)(this + 0x50),1);
  QCamera3HeapMemory::deallocate(*(allocator **)(this + 0x148),extraout_r1,(uint)pcVar1);
  if (*(int **)(this + 0x148) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x148) + 0x20))();
  }
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  free(*(void **)(this + 0x150));
  *(undefined4 *)(this + 0x150) = 0;
  return;
}

