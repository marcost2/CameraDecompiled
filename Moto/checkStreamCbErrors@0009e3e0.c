
/* qcamera::QCamera3ProcessingChannel::checkStreamCbErrors(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::checkStreamCbErrors
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == (QCamera3Stream *)0x0) {
    if (*(int *)(*(int *)(DAT_0009e47c + 0x9e3fe) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x5b0;
    iVar1 = DAT_0009e480 + 0x9e40e;
    iVar2 = DAT_0009e484 + 0x9e416;
  }
  else if (param_1 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(*(int *)(DAT_0009e488 + 0x9e41c) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x5b5;
    iVar1 = DAT_0009e48c + 0x9e42c;
    iVar2 = DAT_0009e490 + 0x9e434;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    if (*(int *)(*(int *)(DAT_0009e4a0 + 0x9e458) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x5be;
    iVar1 = DAT_0009e4a4 + 0x9e468;
    iVar2 = DAT_0009e4a8 + 0x9e470;
  }
  else {
    if (*(int *)(*(int *)(DAT_0009e494 + 0x9e43a) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x5ba;
    iVar1 = DAT_0009e498 + 0x9e44a;
    iVar2 = DAT_0009e49c + 0x9e452;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffea;
}

