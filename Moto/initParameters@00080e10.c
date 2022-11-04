
/* qcamera::QCamera3HardwareInterface::initParameters() */

int __thiscall qcamera::QCamera3HardwareInterface::initParameters(QCamera3HardwareInterface *this)

{
  QCamera3HeapMemory *pQVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  pQVar1 = (QCamera3HeapMemory *)operator_new(0x610);
  pQVar1 = (QCamera3HeapMemory *)QCamera3HeapMemory::QCamera3HeapMemory(pQVar1,1);
  *(QCamera3HeapMemory **)(this + 0x1b0) = pQVar1;
  iVar2 = QCamera3HeapMemory::allocate(pQVar1,(uint)&PTR_bufDone_00117af8);
  if (iVar2 == 0) {
    uVar6 = **(undefined4 **)(this + 100);
    pcVar7 = *(code **)((*(undefined4 **)(this + 100))[1] + 0xc);
    uVar3 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x1b0),0);
    uVar4 = (**(code **)(**(int **)(this + 0x1b0) + 8))(*(int **)(this + 0x1b0),0);
    iVar2 = (*pcVar7)(uVar6,1,uVar3,&PTR_bufDone_00117af8,uVar4);
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_00080f18 + 0x80eca) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00080f20 + 0x80ee2,0x20b5,DAT_00080f1c + 0x80eda);
      }
      QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x1b0));
      if (*(int **)(this + 0x1b0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1b0) + 0x20))();
      }
      *(undefined4 *)(this + 0x1b0) = 0;
      iVar2 = -0x7ffffffe;
    }
    else {
      uVar3 = (**(code **)(**(int **)(this + 0x1b0) + 8))(*(int **)(this + 0x1b0),0);
      *(undefined4 *)(this + 0x1b4) = uVar3;
      pvVar5 = malloc((size_t)&PTR_bufDone_00117af8);
      *(void **)(this + 0x1b8) = pvVar5;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_00080f0c + 0x80e40) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00080f14 + 0x80e58,0x20a8,DAT_00080f10 + 0x80e50);
    }
    if (*(int **)(this + 0x1b0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b0) + 0x20))();
    }
    iVar2 = -0xc;
    *(undefined4 *)(this + 0x1b0) = 0;
  }
  return iVar2;
}

