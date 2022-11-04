
/* qcamera::parseGPSCoordinate(char const*, rat_t*) */

undefined4 qcamera::parseGPSCoordinate(char *param_1,rat_t *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  double dVar5;
  
  if (param_2 == (rat_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000abd58 + 0xabc7e) + 0x20) == 0) {
      uVar4 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000abd60 + 0xabc98,0x9eb,DAT_000abd5c + 0xabc90);
      uVar4 = 0xffffffea;
    }
  }
  else {
    atof(param_1);
    dVar3 = DAT_000abd48;
    dVar5 = (double)CONCAT44(extraout_r1,param_1);
    if ((int)((uint)((double)CONCAT44(extraout_r1,param_1) < 0.0) << 0x1f) < 0) {
      dVar5 = (double)(CONCAT44(extraout_r1,param_1) ^ 0x8000000000000000);
    }
    iVar1 = SUB84(ROUND(dVar5),0);
    dVar5 = (dVar5 - (double)(longlong)iVar1) * DAT_000abd48;
    iVar2 = SUB84(ROUND(dVar5),0);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000abd64 + 0xabca6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000abd6c + 0xabcbe,0x9cf,DAT_000abd68 + 0xabcb6);
      }
    }
    else {
      *(int *)param_2 = iVar1;
      *(undefined4 *)(param_2 + 4) = 1;
    }
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_000abd70 + 0xabcd8) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000abd78 + 0xabcf0,0x9cf,DAT_000abd74 + 0xabce8);
      }
    }
    else {
      *(int *)(param_2 + 8) = iVar2;
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
    iVar1 = SUB84(ROUND((dVar5 - (double)(longlong)iVar2) * dVar3 * DAT_000abd50),0);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000abd7c + 0xabd18) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000abd84 + 0xabd30,0x9cf,DAT_000abd80 + 0xabd28);
      }
    }
    else {
      *(int *)(param_2 + 0x10) = iVar1;
      *(undefined4 *)(param_2 + 0x14) = 10000;
    }
    uVar4 = 0;
  }
  return uVar4;
}

