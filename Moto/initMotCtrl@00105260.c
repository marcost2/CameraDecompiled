
/* qcamera::MotCtrlHal1::initMotCtrl(mm_camera_vtbl_t*) */

int __thiscall qcamera::MotCtrlHal1::initMotCtrl(MotCtrlHal1 *this,mm_camera_vtbl_t *param_1)

{
  QCameraHeapMemory *this_00;
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  bool bVar10;
  
  puVar7 = *(uint **)(DAT_001053b4 + 0x105270);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_001053b8 + 0x10527c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_001053bc + 0x10528c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_001053c0 + 0x1053a2);
    }
  }
  *(mm_camera_vtbl_t **)(this + 0xc) = param_1;
  this_00 = (QCameraHeapMemory *)operator_new(0x718);
  piVar1 = (int *)QCameraHeapMemory::QCameraHeapMemory(this_00,true);
  *(int **)(this + 0x14) = piVar1;
  iVar2 = (**(code **)(*piVar1 + 8))(piVar1,1,0x10008,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(this + 0xc);
    bVar10 = iVar2 != 0;
    if (bVar10) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if ((bVar10 && iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      pvVar3 = (void *)(**(code **)(**(int **)(this + 0x14) + 0x24))(*(int **)(this + 0x14),0);
      __aeabi_memclr8(pvVar3,0x10008);
      uVar8 = **(undefined4 **)(this + 0xc);
      pcVar9 = *(code **)((*(undefined4 **)(this + 0xc))[1] + 0xc);
      uVar4 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x14),0);
      uVar5 = (**(code **)(**(int **)(this + 0x14) + 0x24))(*(int **)(this + 0x14),0);
      iVar2 = (*pcVar9)(uVar8,9,uVar4,0x10008,uVar5);
      if (-1 < iVar2) {
        uVar4 = (**(code **)(**(int **)(this + 0x14) + 0x24))(*(int **)(this + 0x14),0);
        *(undefined4 *)(this + 4) = uVar4;
        goto LAB_0010530e;
      }
      iVar2 = DAT_001053dc + 0x105394;
      iVar6 = DAT_001053e0 + 0x105396;
    }
    else {
      iVar2 = DAT_001053d0 + 0x1052e8;
      iVar6 = DAT_001053d4 + 0x1052ea;
    }
    __android_log_print(6,iVar2,iVar6,DAT_001053d8 + 0x1052f0);
    (**(code **)(**(int **)(this + 0x14) + 0xc))();
    iVar2 = -0x7ffffffe;
  }
  else {
    __android_log_print(6,DAT_001053c4 + 0x1052c6,DAT_001053c8 + 0x1052c8,DAT_001053cc + 0x1052ca);
    iVar2 = -0xc;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 0x2c))();
  }
  *(undefined4 *)(this + 0x14) = 0;
LAB_0010530e:
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_001053e4 + 0x10531a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_001053e8 + 0x105328) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar2;
}

