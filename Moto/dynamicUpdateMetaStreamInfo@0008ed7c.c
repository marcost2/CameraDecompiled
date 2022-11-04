
/* qcamera::QCamera3HardwareInterface::dynamicUpdateMetaStreamInfo() */

int __thiscall
qcamera::QCamera3HardwareInterface::dynamicUpdateMetaStreamInfo(QCamera3HardwareInterface *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  puVar6 = *(uint **)(DAT_0008ef58 + 0x8ed8a);
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_0008ef5c + 0x8ed96) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008ef60 + 0x8eda6) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0008ef64 + 0x8ef48);
    }
  }
  iVar9 = *(int *)(DAT_0008ef68 + 0x8edb4);
  if (*(int *)(iVar9 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008ef70 + 0x8edd0,0x33aa,DAT_0008ef6c + 0x8edc8);
  }
  stopAllChannels(this);
  iVar1 = notifyErrorForPendingRequests(this);
  if (iVar1 < 0) {
    if (*(int *)(iVar9 + 0x20) == 0) goto LAB_0008ef14;
    uVar4 = 1;
    uVar5 = 0x33b4;
    iVar9 = DAT_0008ef7c + 0x8ee80;
    iVar3 = DAT_0008ef80 + 0x8ee88;
  }
  else {
    uVar2 = *(uint *)(this + 0x2c8);
    if (uVar2 != 0) {
      uVar7 = 0;
      iVar8 = 0x2f0;
      iVar1 = DAT_0008ef74 + 0x8edf6;
      iVar3 = DAT_0008ef78 + 0x8edfc;
      do {
        if (*(int *)(iVar9 + 0x34) != 0) {
          mm_camera_debug_log(1,6,iVar3,0x33bf,iVar1,*(undefined4 *)(this + uVar7 * 4 + 0x2cc),
                              *(undefined4 *)(this + uVar7 * 8 + 0x288),
                              *(undefined4 *)(this + uVar7 * 8 + 0x28c),
                              *(undefined4 *)(this + iVar8),*(undefined4 *)(this + iVar8 + 4),
                              *(undefined4 *)(this + uVar7 * 4 + 0x35c));
          uVar2 = *(uint *)(this + 0x2c8);
        }
        iVar8 = iVar8 + 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    if (*(int *)(this + 0x1b4) == 0) {
      __android_log_print(6,DAT_0008ef84 + 0x8ee98,DAT_0008ef88 + 0x8ee9a,0,0x72);
    }
    else {
      __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(this + 0x1b4) + 0x10,this + 0x288,
                      0x168);
      *(undefined *)(*(int *)(this + 0x1b4) + 0x72) = 1;
    }
    uVar2 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                      (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
    if ((0x7fffffff < uVar2) && (*(int *)(iVar9 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0008ef90 + 0x8eece,0x33c8,DAT_0008ef8c + 0x8eec6);
    }
    iVar1 = startAllChannels(this);
    if (iVar1 < 0) {
      if (*(int *)(iVar9 + 0x20) == 0) goto LAB_0008ef14;
      uVar4 = 1;
      uVar5 = 0x33cd;
      iVar9 = DAT_0008ef94 + 0x8ef0a;
      iVar3 = DAT_0008ef98 + 0x8ef12;
    }
    else {
      if (*(int *)(iVar9 + 0x2c) == 0) goto LAB_0008ef14;
      uVar4 = 4;
      uVar5 = 0x33d1;
      iVar9 = DAT_0008ef9c + 0x8eef0;
      iVar3 = DAT_0008efa0 + 0x8eef8;
    }
  }
  mm_camera_debug_log(1,uVar4,iVar3,uVar5,iVar9);
LAB_0008ef14:
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_0008efa4 + 0x8ef20) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008efa8 + 0x8ef2e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar1;
}

