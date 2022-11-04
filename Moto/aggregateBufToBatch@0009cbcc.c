
/* qcamera::QCamera3Stream::aggregateBufToBatch(mm_camera_buf_def&) */

undefined4 __thiscall
qcamera::QCamera3Stream::aggregateBufToBatch(QCamera3Stream *this,mm_camera_buf_def *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x280) == 0) {
    if (*(int *)(*(int *)(DAT_0009cce0 + 0x9ccbe) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009cce8 + 0x9ccd6,0x5c4,DAT_0009cce4 + 0x9ccce);
    }
    return 0xffffffda;
  }
  iVar1 = *(int *)(this + 0x290);
  if (iVar1 == 0) {
    iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x298),true);
    *(int *)(this + 0x290) = iVar1;
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_0009ccec + 0x9cc96) + 0x3c) == 0) {
        return 0xfffffff4;
      }
      uVar3 = 0x5ca;
      iVar1 = DAT_0009ccf0 + 0x9cca6;
      iVar2 = DAT_0009ccf4 + 0x9ccae;
      goto LAB_0009ccac;
    }
    if (*(int *)(*(int *)(DAT_0009ccf8 + 0x9cc6a) + 0x48) != 0) {
      mm_camera_debug_log(2,4,DAT_0009cd00 + 0x9cc88,0x5ce,DAT_0009ccfc + 0x9cc7c,
                          *(undefined4 *)(iVar1 + 0xc));
      iVar1 = *(int *)(this + 0x290);
    }
  }
  if (*(uint *)(this + 0x294) != (uint)*(byte *)(iVar1 + 0x20)) {
    *(undefined4 *)(iVar1 + *(uint *)(this + 0x294) * 4 + 0x24) = *(undefined4 *)(param_1 + 0xc);
    *(int *)(this + 0x294) = *(int *)(this + 0x294) + 1;
    if (*(int *)(*(int *)(DAT_0009cd10 + 0x9cc26) + 0x48) != 0) {
      mm_camera_debug_log(2,4,DAT_0009cd18 + 0x9cc4a,0x5d8,DAT_0009cd14 + 0x9cc3c,
                          *(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)(*(int *)(this + 0x290) + 0xc));
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_0009cd04 + 0x9cbf4) + 0x3c) == 0) {
    return 0xfffffff4;
  }
  uVar3 = 0x5d1;
  iVar1 = DAT_0009cd08 + 0x9cc06;
  iVar2 = DAT_0009cd0c + 0x9cc0e;
LAB_0009ccac:
  mm_camera_debug_log(2,1,iVar2,uVar3,iVar1);
  return 0xfffffff4;
}

