
/* qcamera::QCamera3HardwareInterface::initParameters() */

int __thiscall qcamera::QCamera3HardwareInterface::initParameters(QCamera3HardwareInterface *this)

{
  QCamera3HeapMemory *this_00;
  allocator *paVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  __tree_node *extraout_r1;
  __tree_node *p_Var6;
  undefined4 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  this_00 = (QCamera3HeapMemory *)operator_new(0x610);
  paVar1 = (allocator *)QCamera3HeapMemory::QCamera3HeapMemory(this_00,1);
  *(allocator **)(this + 0x148) = paVar1;
  iVar2 = QCamera3HeapMemory::allocate(paVar1,0x1174b8);
  if (iVar2 == 0) {
    uVar7 = **(undefined4 **)(this + 0x50);
    pcVar8 = *(code **)((*(undefined4 **)(this + 0x50))[1] + 0xc);
    uVar3 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x148),0);
    uVar4 = (**(code **)(**(int **)(this + 0x148) + 8))(*(int **)(this + 0x148),0);
    uVar9 = (*pcVar8)(uVar7,1,uVar3,0x1174b8,uVar4);
    p_Var6 = (__tree_node *)((ulonglong)uVar9 >> 0x20);
    iVar2 = (int)uVar9;
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_0003c144 + 0x3c0f6) + 0x20) != 0) {
        uVar3 = DAT_0003c14c + 0x3c106;
        mm_camera_debug_log();
        p_Var6 = extraout_r1;
      }
      QCamera3HeapMemory::deallocate(*(allocator **)(this + 0x148),p_Var6,uVar3);
      if (*(int **)(this + 0x148) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x148) + 0x20))();
      }
      *(undefined4 *)(this + 0x148) = 0;
      iVar2 = -0x7ffffffe;
    }
    else {
      uVar4 = (**(code **)(**(int **)(this + 0x148) + 8))(*(int **)(this + 0x148),0);
      *(undefined4 *)(this + 0x14c) = uVar4;
      pvVar5 = malloc(0x1174b8);
      *(void **)(this + 0x150) = pvVar5;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0003c138 + 0x3c06c) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    if (*(int **)(this + 0x148) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x148) + 0x20))();
    }
    *(undefined4 *)(this + 0x148) = 0;
    iVar2 = -0xc;
  }
  return iVar2;
}

