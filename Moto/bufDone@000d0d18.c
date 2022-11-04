
/* qcamera::QCameraStream::bufDone(void const*, bool) */

int __thiscall qcamera::QCameraStream::bufDone(QCameraStream *this,void *param_1,bool param_2)

{
  QCameraStream *pQVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(int *)(this + 0x70) == 0) || (*(int *)(*(int *)(this + 0x70) + 0x1a0) != 2)) ||
     (piVar2 = *(int **)(this + 0x110), piVar2 == (int *)0x0)) {
    piVar2 = *(int **)(this + 0x10c);
    if (piVar2 != (int *)0x0) {
      iVar4 = 0x10c;
      goto LAB_000d0d46;
    }
    iVar3 = -1;
  }
  else {
    iVar4 = 0x110;
LAB_000d0d46:
    iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,param_1,param_2);
    if (*(QCameraVideoMemory **)(this + iVar4) != (QCameraVideoMemory *)0x0) {
      iVar4 = QCameraVideoMemory::closeNativeHandle
                        (*(QCameraVideoMemory **)(this + iVar4),param_1,param_2);
      if (iVar4 != 0) {
        if (*(int *)(*(int *)(DAT_000d0e78 + 0xd0d68) + 0x20) == 0) {
          return iVar4;
        }
        mm_camera_debug_log(1,1,DAT_000d0e80 + 0xd0d82,0x4bf,DAT_000d0e7c + 0xd0d7a);
        return iVar4;
      }
      goto LAB_000d0daa;
    }
  }
  if (*(int *)(*(int *)(DAT_000d0e60 + 0xd0d90) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d0e68 + 0xd0da8,0x4c3,DAT_000d0e64 + 0xd0da0);
  }
LAB_000d0daa:
  if (((iVar3 != -1) && (iVar3 < (int)(uint)(byte)this[0x8c])) && (*(int *)(this + 0x118) != 0)) {
    if (iVar3 < 3) {
      pQVar1 = this + iVar3 * 0x12 + 0x29;
      if (*pQVar1 != (QCameraStream)0x0) {
        uVar5 = 0;
        do {
          (**(code **)(*(int *)this + 0x10))(this,this[uVar5 + iVar3 * 0x12 + 0x2a]);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (byte)*pQVar1);
        this[iVar3 * 0x12 + 0x28] = (QCameraStream)0x0;
        *pQVar1 = (QCameraStream)0x0;
        return 0;
      }
    }
    if (*(int *)(*(int *)(DAT_000d0e84 + 0xd0e26) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d0e8c + 0xd0e4c,0x4d5,DAT_000d0e88 + 0xd0e3e,iVar3,
                          *(undefined4 *)(iVar3 * 0x218 + *(int *)(this + 0x118) + 0x1c));
    }
                    /* WARNING: Could not recover jumptable at 0x000d0e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(*(int *)this + 0x10))(this,iVar3);
    return iVar4;
  }
  if (*(int *)(*(int *)(DAT_000d0e6c + 0xd0df8) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d0e74 + 0xd0e12,0x4c7,DAT_000d0e70 + 0xd0e08,param_1);
  }
  return -0x4b;
}

