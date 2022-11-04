
/* qcamera::QCamera2Factory::QCamera2Factory() */

QCamera2Factory * __thiscall qcamera::QCamera2Factory::QCamera2Factory(QCamera2Factory *this)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint extraout_r1;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  char acStack208 [92];
  char acStack116 [92];
  int local_18;
  
  piVar8 = *(int **)(DAT_00039df8 + 0x39d10);
  local_18 = *piVar8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = *(int *)(DAT_00039dfc + 0x39d20) + 8;
  uVar2 = get_num_of_cameras();
  *(undefined4 *)(this + 4) = uVar2;
  pcVar6 = (char *)(DAT_00039e04 + 0x39d36);
  property_get();
  snprintf(acStack116,extraout_r1,pcVar6);
  property_get();
  iVar7 = *(int *)(DAT_00039e0c + 0x39d56);
  if (*(int *)(iVar7 + 0x44) != 0) {
    atoi(acStack208);
    mm_camera_debug_log();
  }
  if (*(uint *)(this + 4) - 1 < 5) {
    lVar1 = (ulonglong)*(uint *)(this + 4) * 8;
    uVar3 = (uint)lVar1;
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    if (iVar7 != 0) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      uVar3 = 0xffffffff;
    }
    pvVar4 = operator_new__(uVar3);
    *(void **)(this + 8) = pvVar4;
    if (0 < *(int *)(this + 4)) {
      iVar7 = 0;
      do {
        *(int *)(*(int *)(this + 8) + iVar7 * 8) = iVar7;
        iVar5 = is_yuv_sensor();
        uVar2 = 0x100;
        if (iVar5 == 0) {
          uVar2 = 0x300;
        }
        *(undefined4 *)(*(int *)(this + 8) + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 4));
    }
  }
  else if (*(int *)(iVar7 + 0x50) != 0) {
    mm_camera_debug_log();
  }
  if (*piVar8 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

