
/* qcamera::QCamera2Factory::QCamera2Factory() */

QCamera2Factory * __thiscall qcamera::QCamera2Factory::QCamera2Factory(QCamera2Factory *this)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  QCameraMuxer *pQVar5;
  void *pvVar6;
  uint uVar7;
  QCameraMuxer **ppQVar8;
  int iVar9;
  int *piVar10;
  int local_dc;
  char acStack216 [92];
  camera_info acStack124 [92];
  int local_20;
  
  piVar10 = *(int **)(DAT_0007e278 + 0x7e0d0);
  local_20 = *piVar10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = *(int *)(DAT_0007e27c + 0x7e0e2) + 8;
  uVar2 = get_num_of_cameras();
  *(undefined4 *)(this + 4) = uVar2;
  property_get(DAT_0007e280 + 0x7e0f8,acStack216,DAT_0007e284 + 0x7e0fa);
  iVar3 = atoi(acStack216);
  local_dc = 1;
  iVar4 = *(int *)(this + 4);
  if (0 < iVar4) {
    uVar7 = 0;
    do {
      if (iVar3 == 0) {
        QCamera2HardwareInterface::getCapabilities(uVar7,acStack124,(cam_sync_type_t *)&local_dc);
        if (local_dc == 2) {
          if (*(int *)(*(int *)(DAT_0007e288 + 0x7e250) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_0007e290 + 0x7e26a,0x2b8,DAT_0007e28c + 0x7e262);
          }
          break;
        }
        iVar4 = *(int *)(this + 4);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
  FUN_0007e2c4(acStack124);
  property_get(DAT_0007e294 + 0x7e14a,acStack216,acStack124);
  iVar4 = atoi(acStack216);
  iVar9 = *(int *)(DAT_0007e298 + 0x7e15a);
  if (*(int *)(iVar9 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_0007e2a0 + 0x7e172,0x7c,DAT_0007e29c + 0x7e168,iVar4);
  }
  if (iVar4 == 0) {
LAB_0007e1be:
    pQVar5 = **(QCameraMuxer ***)(DAT_0007e2b8 + 0x7e1c4);
LAB_0007e1c6:
    if ((pQVar5 == (QCameraMuxer *)0x0) && (*(uint *)(this + 4) - 1 < 5)) {
      lVar1 = (ulonglong)*(uint *)(this + 4) * 8;
      uVar7 = (uint)lVar1;
      iVar4 = (int)((ulonglong)lVar1 >> 0x20);
      if (iVar4 != 0) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        uVar7 = 0xffffffff;
      }
      pvVar6 = operator_new__(uVar7);
      iVar4 = 0;
      *(void **)(this + 8) = pvVar6;
      while( true ) {
        *(int *)((int)pvVar6 + iVar4 * 8) = iVar4;
        if ((iVar3 == 0) || (iVar9 = is_yuv_sensor(iVar4), iVar9 != 0)) {
          uVar2 = 0x100;
        }
        else {
          uVar2 = 0x300;
        }
        iVar9 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)(this + 8) + iVar9 + 4) = uVar2;
        if (*(int *)(this + 4) <= iVar4) break;
        pvVar6 = *(void **)(this + 8);
      }
      goto LAB_0007e238;
    }
  }
  else {
    if (*(int *)(iVar9 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0007e2a8 + 0x7e18c,0x82,DAT_0007e2a4 + 0x7e184);
    }
    ppQVar8 = *(QCameraMuxer ***)(DAT_0007e2ac + 0x7e194);
    if (*ppQVar8 == (QCameraMuxer *)0x0) {
      QCameraMuxer::getCameraMuxer(ppQVar8,*(uint *)(this + 4));
      pQVar5 = *ppQVar8;
      if ((pQVar5 == (QCameraMuxer *)0x0) && (*(int *)(iVar9 + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_0007e2b4 + 0x7e1bc,0x87,DAT_0007e2b0 + 0x7e1b4);
        goto LAB_0007e1be;
      }
      goto LAB_0007e1c6;
    }
  }
  if (*(int *)(iVar9 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_0007e2c0 + 0x7e236,0xa4,DAT_0007e2bc + 0x7e22a,
                        *(undefined4 *)(this + 4));
  }
LAB_0007e238:
  if (*piVar10 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

