
/* qcamera::getExifAltitude(rat_t*, char*, double) */

void __thiscall qcamera::getExifAltitude(qcamera *this,rat_t *param_1,char *param_2,double param_3)

{
  char *__nptr;
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  int *piVar4;
  double dVar5;
  char local_32 [30];
  int local_14;
  
  piVar4 = *(int **)(DAT_000ac1d8 + 0xac11e);
  local_14 = *piVar4;
  FUN_000ac068(local_32);
  if (local_32[0] != '\0') {
    __nptr = local_32;
    atof(__nptr);
    dVar5 = (double)CONCAT44(extraout_r1,__nptr);
    *param_1 = (rat_t)0x0;
    if ((int)((uint)(dVar5 < 0.0) << 0x1f) < 0) {
      dVar5 = 0.0 - dVar5;
      *param_1 = (rat_t)0x1;
    }
    iVar2 = SUB84(ROUND(dVar5 * DAT_000ac1d0),0);
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_000ac1dc + 0xac182) + 0x20) != 0) {
        uVar1 = 0x9cf;
        iVar2 = DAT_000ac1e0 + 0xac192;
        iVar3 = DAT_000ac1e4 + 0xac19a;
LAB_000ac1b6:
        mm_camera_debug_log(1,1,iVar3,uVar1,iVar2);
      }
    }
    else {
      if (this != (qcamera *)0x0) {
        *(int *)this = iVar2;
        *(undefined4 *)(this + 4) = 1000;
        uVar1 = 0;
        goto LAB_000ac1be;
      }
      if (*(int *)(*(int *)(DAT_000ac1e8 + 0xac1a0) + 0x20) != 0) {
        uVar1 = 0x9d3;
        iVar2 = DAT_000ac1ec + 0xac1b0;
        iVar3 = DAT_000ac1f0 + 0xac1b8;
        goto LAB_000ac1b6;
      }
    }
  }
  uVar1 = 0xffffffea;
LAB_000ac1be:
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

