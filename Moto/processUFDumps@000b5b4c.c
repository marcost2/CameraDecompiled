
/* qcamera::QCamera2HardwareInterface::processUFDumps(qcamera::qcamera_jpeg_evt_payload_t*) */

uint __thiscall
qcamera::QCamera2HardwareInterface::processUFDumps
          (QCamera2HardwareInterface *this,qcamera_jpeg_evt_payload_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void *__ptr;
  FILE *__s;
  void **ppvVar5;
  void *__n;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  char acStack8232 [4096];
  undefined auStack4136 [4100];
  
  piVar11 = *(int **)(DAT_000b5d4c + 0xb5b68);
  iVar1 = *piVar11;
  iVar2 = QCameraParametersIntf::isUbiRefocus((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar2 == 0) {
    uVar9 = 1;
    goto LAB_000b5bba;
  }
  iVar12 = *(int *)(this + 0x1dbc);
  iVar2 = QCameraParametersIntf::getRefocusOutputCount((QCameraParametersIntf *)(this + 0x4ac));
  iVar3 = waitDeferredWork(this,(uint *)(this + 0x1db0));
  if (iVar3 == 0) {
    ppvVar4 = (void **)(param_1 + 8);
    if (this[0x81a] == (QCamera2HardwareInterface)0x0) {
      ppvVar5 = (void **)(param_1 + 0x10);
LAB_000b5bf2:
      __n = *ppvVar5;
      __ptr = *ppvVar4;
      iVar2 = iVar2 + -1;
      iVar3 = iVar12 - iVar2;
      if (iVar3 == 0) {
        FUN_000b5dbc(auStack4136,__n,iVar2,DAT_000b5d74 + 0xb5c0c);
        iVar12 = -1;
LAB_000b5c42:
        puVar6 = auStack4136;
        iVar2 = DAT_000b5d80 + 0xb5c50;
        iVar8 = DAT_000b5d84 + 0xb5c5c;
        iVar13 = DAT_000b5d7c + 0xb5c52;
      }
      else {
        FUN_000b5dbc(auStack4136,__n,iVar2,DAT_000b5d78 + 0xb5c24);
        if (iVar12 < 0) goto LAB_000b5c42;
        puVar6 = (undefined *)(DAT_000b5db4 + 0xb5c34);
        iVar8 = DAT_000b5db8 + 0xb5c42;
        iVar13 = iVar12;
      }
      FUN_000b5dbc(acStack8232,puVar6,iVar2,iVar8);
      uVar9 = count_leading_zeroes(iVar3);
      piVar10 = (int *)(this + 0x1dbc);
      __s = fopen(acStack8232,(char *)(DAT_000b5d88 + 0xb5c70));
      if (__s == (FILE *)0x0) {
        if (*(int *)(*(int *)(DAT_000b5d98 + 0xb5cd6) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b5da0 + 0xb5cf0,0x1393,DAT_000b5d9c + 0xb5ce6,acStack8232,
                              iVar13);
        }
      }
      else {
        fwrite(__ptr,1,(size_t)__n,__s);
        if (*(int *)(*(int *)(DAT_000b5d8c + 0xb5c8a) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b5d94 + 0xb5ca4,0x1393,DAT_000b5d90 + 0xb5c9a,__n,iVar13);
        }
        fclose(__s);
      }
      uVar9 = uVar9 >> 5;
      if (*(int *)(*(int *)(DAT_000b5da4 + 0xb5cfc) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000b5dac + 0xb5d1c,0x1395,DAT_000b5da8 + 0xb5d0c,*piVar10,iVar12
                            ,uVar9);
      }
      *piVar10 = *piVar10 + 1;
      goto LAB_000b5bba;
    }
    if (*ppvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000b5d5c + 0xb5cb4) + 0x20) != 0) {
        uVar7 = 0x1380;
        iVar2 = DAT_000b5d60 + 0xb5cc8;
        iVar3 = DAT_000b5d64 + 0xb5cd0;
LAB_000b5bb0:
        mm_camera_debug_log(1,1,iVar3,uVar7,iVar2);
      }
    }
    else {
      ppvVar4 = *(void ***)((int)*ppvVar4 + 4);
      if (ppvVar4 != (void **)0x0) {
        ppvVar5 = ppvVar4 + 1;
        goto LAB_000b5bf2;
      }
      if (*(int *)(*(int *)(DAT_000b5d68 + 0xb5d2c) + 0x20) != 0) {
        uVar7 = 0x1385;
        iVar2 = DAT_000b5d6c + 0xb5d40;
        iVar3 = DAT_000b5d70 + 0xb5d48;
        goto LAB_000b5bb0;
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000b5d50 + 0xb5b9a) + 0x20) != 0) {
    uVar7 = 0x1377;
    iVar2 = DAT_000b5d54 + 0xb5baa;
    iVar3 = DAT_000b5d58 + 0xb5bb2;
    goto LAB_000b5bb0;
  }
  uVar9 = 0;
LAB_000b5bba:
  if (*piVar11 == iVar1) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

