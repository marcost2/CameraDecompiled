
/* qcamera::QCamera3RegularChannel::request(native_handle const**, unsigned int, int&) */

int __thiscall
qcamera::QCamera3RegularChannel::request
          (QCamera3RegularChannel *this,native_handle **param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  QCamera3StreamMem *this_00;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_000a02ec + 0xa00d8);
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000a02f0 + 0xa00e8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a02f4 + 0xa00f8) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a02f8 + 0xa0288);
    }
  }
  if (param_1 == (native_handle **)0x0) {
    if (*(int *)(*(int *)(DAT_000a02fc + 0xa0296) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a0304 + 0xa02ae,0x8a0,DAT_000a0300 + 0xa02a6);
    }
    iVar2 = -0x16;
    goto LAB_000a02b4;
  }
  if (this[0x50] == (QCamera3RegularChannel)0x0) {
    iVar2 = (**(code **)(*(int *)this + 0x34))(this,param_1,*(undefined4 *)(this + 0x74));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_000a0308 + 0xa0192) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a0310 + 0xa01b0,0x8a8,DAT_000a030c + 0xa01a6,iVar2);
      }
      goto LAB_000a02b4;
    }
    iVar2 = (**(code **)(*(int *)this + 0xc))(this);
    if (iVar2 != 0) goto LAB_000a02b4;
  }
  else if (*(int *)(*(int *)(DAT_000a0314 + 0xa0112) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a031c + 0xa012a,0x8b1,DAT_000a0318 + 0xa0122);
  }
  this_00 = (QCamera3StreamMem *)(this + 0x6b0);
  uVar1 = QCamera3StreamMem::getMatchBufIndex(this_00,param_1);
  if ((int)uVar1 < 0) {
    iVar2 = (**(code **)(*(int *)this + 0x34))(this,param_1,*(undefined4 *)(this + 0x74));
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_000a0320 + 0xa01ca) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a0328 + 0xa01e6,0x8b9,DAT_000a0324 + 0xa01dc,iVar2);
      }
      goto LAB_000a02b4;
    }
    uVar1 = QCamera3StreamMem::getMatchBufIndex(this_00,param_1);
    if (0x7fffffff < uVar1) {
      if (*(int *)(*(int *)(DAT_000a032c + 0xa024e) + 0x20) == 0) {
        iVar2 = -0x20;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000a0334 + 0xa0266,0x8bf,DAT_000a0330 + 0xa025e);
        iVar2 = -0x20;
      }
      goto LAB_000a02b4;
    }
  }
  iVar2 = QCamera3StreamMem::markFrameNumber(this_00,uVar1,param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(this + 0x24) + 0xc))(*(int **)(this + 0x24),uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
      *param_3 = uVar1;
    }
    else {
      if (*(int *)(*(int *)(DAT_000a0344 + 0xa01fe) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a034c + 0xa0216,0x8cb,DAT_000a0348 + 0xa020e);
      }
      QCamera3StreamMem::markFrameNumber(this_00,uVar1,0xffffffff);
    }
  }
  else if (*(int *)(*(int *)(DAT_000a0338 + 0xa0156) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a0340 + 0xa0176,0x8c6,DAT_000a033c + 0xa016a,param_2,uVar1);
  }
LAB_000a02b4:
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_000a0350 + 0xa02c2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a0354 + 0xa02d0) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar2;
}

