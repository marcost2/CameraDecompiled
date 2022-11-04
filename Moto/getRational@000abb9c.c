
/* qcamera::getRational(rat_t*, int, int) */

undefined4 qcamera::getRational(rat_t *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  bVar4 = param_2 == 0;
  if (-1 < param_2) {
    bVar4 = param_3 == 0;
  }
  if (!bVar4 && (-1 < param_2 && -1 < param_3)) {
    if (param_1 != (rat_t *)0x0) {
      *(int *)param_1 = param_2;
      *(int *)(param_1 + 4) = param_3;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000abc08 + 0xabbd8) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9d3;
    iVar1 = DAT_000abc0c + 0xabbe8;
    iVar2 = DAT_000abc10 + 0xabbf0;
  }
  else {
    if (*(int *)(*(int *)(DAT_000abbfc + 0xabbae) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9cf;
    iVar1 = DAT_000abc00 + 0xabbbe;
    iVar2 = DAT_000abc04 + 0xabbc6;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffea;
}

