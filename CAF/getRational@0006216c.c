
/* qcamera::getRational(rat_t*, int, int) */

undefined4 qcamera::getRational(rat_t *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_2 == 0;
  if (-1 < param_2) {
    bVar2 = param_3 == 0;
  }
  if (!bVar2 && (-1 < param_2 && -1 < param_3)) {
    if (param_1 != (rat_t *)0x0) {
      *(int *)param_1 = param_2;
      *(int *)(param_1 + 4) = param_3;
      return 0;
    }
    iVar1 = *(int *)(*(int *)(DAT_000621d8 + 0x621a8) + 0x20);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_000621cc + 0x6217e) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

