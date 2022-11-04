
/* qcamera::QCameraMuxer::set_callBacks(camera_device*, void (*)(int, int, int, void*), void
   (*)(int, camera_memory const*, unsigned int, camera_frame_metadata*, void*), void (*)(long long,
   int, camera_memory const*, unsigned int, void*), camera_memory* (*)(int, unsigned int, unsigned
   int, void*), void*) */

void qcamera::QCameraMuxer::set_callBacks
               (camera_device *param_1,FuncDef92 *param_2,FuncDef93 *param_3,FuncDef94 *param_4,
               FuncDef95 *param_5,void *param_6)

{
  int iVar1;
  FuncDef89 *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  QCamera2HardwareInterface *this;
  uint uVar8;
  int iVar9;
  
  iVar6 = *(int *)(DAT_000c0dfc + 0xc0c4c);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c0e04 + 0xc0c64,0x1a9,DAT_000c0e00 + 0xc0c5c);
  }
  piVar5 = *(int **)(DAT_000c0e08 + 0xc0c6c);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar3 = 1;
    uVar4 = 0x1aa;
    iVar6 = DAT_000c0e0c + 0xc0d2c;
    iVar1 = DAT_000c0e10 + 0xc0d34;
    goto LAB_000c0dec;
  }
  if ((param_1 == (camera_device *)0x0) || (iVar9 = *(int *)(param_1 + 0x44), iVar9 == 0)) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar3 = 1;
    uVar4 = 0x1ae;
    iVar6 = DAT_000c0e20 + 0xc0d12;
    iVar1 = DAT_000c0e24 + 0xc0d1a;
    goto LAB_000c0dec;
  }
  if (*(int *)(iVar9 + 0x54) != 0) {
    uVar8 = 0;
    pFVar2 = *(FuncDef89 **)(DAT_000c0e14 + 0xc0c9e);
    do {
      pvVar7 = (void *)(*(int *)(iVar1 + 0x2c) + *(int *)(iVar9 + 0x5c + uVar8 * 4) * 0x38);
      if (pvVar7 == (void *)0x0) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          return;
        }
        uVar3 = 1;
        uVar4 = 0x1b3;
        iVar6 = DAT_000c0e18 + 0xc0d48;
        iVar1 = DAT_000c0e1c + 0xc0d50;
        goto LAB_000c0dec;
      }
      this = *(QCamera2HardwareInterface **)((int)pvVar7 + 0x30);
      if (this == (QCamera2HardwareInterface *)0x0) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          return;
        }
        uVar3 = 1;
        uVar4 = 0x1b6;
        iVar6 = DAT_000c0e28 + 0xc0de6;
        iVar1 = DAT_000c0e2c + 0xc0dee;
        goto LAB_000c0dec;
      }
      QCamera2HardwareInterface::set_CallBacks
                (*(camera_device **)((int)pvVar7 + 0x34),(FuncDef80 *)param_2,(FuncDef81 *)param_3,
                 (FuncDef82 *)param_4,(FuncDef83 *)param_5,param_6);
      QCamera2HardwareInterface::setJpegCallBacks(this,pFVar2,pvVar7);
      iVar1 = *piVar5;
      if (*(int *)((int)pvVar7 + 0x10) == 0) {
        *(void **)(iVar1 + 0xd0) = pvVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(iVar9 + 0x54));
  }
  if (param_3 == (FuncDef93 *)0x0) {
    if (*(int *)(iVar6 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c0e34 + 0xc0d6c,0x1cb,DAT_000c0e30 + 0xc0d64);
    }
    if (param_5 != (FuncDef95 *)0x0) goto LAB_000c0d72;
LAB_000c0d7a:
    if (*(int *)(iVar6 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c0e3c + 0xc0d94,0x1d0,DAT_000c0e38 + 0xc0d8c);
    }
    if (param_6 != (void *)0x0) goto LAB_000c0d9a;
LAB_000c0da2:
    if (*(int *)(iVar6 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c0e44 + 0xc0dba,0x1d6,DAT_000c0e40 + 0xc0db2);
    }
  }
  else {
    *(FuncDef93 **)(iVar1 + 0x24) = param_3;
    if (param_5 == (FuncDef95 *)0x0) goto LAB_000c0d7a;
LAB_000c0d72:
    *(FuncDef95 **)(*piVar5 + 0x28) = param_5;
    if (param_6 == (void *)0x0) goto LAB_000c0da2;
LAB_000c0d9a:
    *(void **)(*piVar5 + 0xcc) = param_6;
  }
  if (*(int *)(iVar6 + 0x28) == 0) {
    return;
  }
  uVar3 = 3;
  uVar4 = 0x1d9;
  iVar6 = DAT_000c0e48 + 0xc0dcc;
  iVar1 = DAT_000c0e4c + 0xc0dd4;
LAB_000c0dec:
  mm_camera_debug_log(1,uVar3,iVar1,uVar4,iVar6);
  return;
}

