
/* qcamera::MotCtrl::initMotCtrl(mm_camera_vtbl_t*) */

int __thiscall qcamera::MotCtrl::initMotCtrl(MotCtrl *this,mm_camera_vtbl_t *param_1)

{
  QCamera3HeapMemory *pQVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  bool bVar9;
  
  *(mm_camera_vtbl_t **)(this + 0xc) = param_1;
  pQVar1 = (QCamera3HeapMemory *)operator_new(0x610);
  pQVar1 = (QCamera3HeapMemory *)QCamera3HeapMemory::QCamera3HeapMemory(pQVar1,1);
  *(QCamera3HeapMemory **)(this + 0x10) = pQVar1;
  iVar2 = QCamera3HeapMemory::allocate(pQVar1,0x10008);
  if (iVar2 == 0) {
    iVar2 = *(int *)(this + 0xc);
    bVar9 = iVar2 != 0;
    if (bVar9) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if ((bVar9 && iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      pvVar3 = (void *)(**(code **)(**(int **)(this + 0x10) + 8))(*(int **)(this + 0x10),0);
      __aeabi_memclr8(pvVar3,0x10008);
      uVar7 = **(undefined4 **)(this + 0xc);
      pcVar8 = *(code **)((*(undefined4 **)(this + 0xc))[1] + 0xc);
      uVar4 = QCamera3Memory::getFd(*(QCamera3Memory **)(this + 0x10),0);
      uVar5 = (**(code **)(**(int **)(this + 0x10) + 8))(*(int **)(this + 0x10),0);
      iVar2 = (*pcVar8)(uVar7,9,uVar4,0x10008,uVar5);
      if (-1 < iVar2) {
        uVar4 = (**(code **)(**(int **)(this + 0x10) + 8))(*(int **)(this + 0x10),0);
        *(undefined4 *)(this + 4) = uVar4;
        return iVar2;
      }
      iVar2 = DAT_00104fdc + 0x104fc0;
      puVar6 = &UNK_00104fc2 + DAT_00104fe0;
    }
    else {
      iVar2 = DAT_00104fd0 + 0x104f36;
      puVar6 = (undefined *)(DAT_00104fd4 + 0x104f38);
    }
    __android_log_print(6,iVar2,puVar6,DAT_00104fd8 + 0x104f3e);
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x10));
    iVar2 = -0x7ffffffe;
  }
  else {
    __android_log_print(6,DAT_00104fc4 + 0x104f14,DAT_00104fc8 + 0x104f16,DAT_00104fcc + 0x104f18);
    iVar2 = -0xc;
  }
  if (*(int **)(this + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10) + 0x20))();
  }
  *(undefined4 *)(this + 0x10) = 0;
  return iVar2;
}

