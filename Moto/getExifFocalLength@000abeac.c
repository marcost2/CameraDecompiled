
/* qcamera::getExifFocalLength(rat_t*, float) */

undefined4 qcamera::getExifFocalLength(rat_t *param_1,float param_2)

{
  int iVar1;
  float in_r1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)ROUND(in_r1 * DAT_000abf20) < 0) {
    if (*(int *)(*(int *)(DAT_000abf24 + 0xabee0) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9cf;
    iVar1 = DAT_000abf28 + 0xabef0;
    iVar2 = DAT_000abf2c + 0xabef8;
  }
  else {
    if (param_1 != (rat_t *)0x0) {
      *(float *)param_1 = ROUND(in_r1 * DAT_000abf20);
      *(undefined4 *)(param_1 + 4) = 1000;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000abf30 + 0xabefe) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x9d3;
    iVar1 = DAT_000abf34 + 0xabf0e;
    iVar2 = DAT_000abf38 + 0xabf16;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffea;
}

