
/* qcamera::getExifExpTimeInfo(rat_t*, long long) */

undefined4 qcamera::getExifExpTimeInfo(rat_t *param_1,longlong param_2)

{
  int iVar1;
  uint in_r2;
  int iVar2;
  uint in_r3;
  undefined4 uVar3;
  
  if ((in_r2 | in_r3) == 0) {
    in_r2 = 0x3c;
  }
  if ((int)in_r2 < 1) {
    if (*(int *)(*(int *)(DAT_000abfa0 + 0xabf60) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9cf;
    iVar1 = DAT_000abfa4 + 0xabf70;
    iVar2 = DAT_000abfa8 + 0xabf78;
  }
  else {
    if (param_1 != (rat_t *)0x0) {
      *(undefined4 *)param_1 = 1;
      *(uint *)(param_1 + 4) = in_r2;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000abfac + 0xabf7e) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9d3;
    iVar1 = DAT_000abfb0 + 0xabf8e;
    iVar2 = DAT_000abfb4 + 0xabf96;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffea;
}

