
/* qcamera::QCameraStream::configStream() */

void __thiscall qcamera::QCameraStream::configStream(QCameraStream *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_000d0688 + 0xd05e4);
  iVar1 = *piVar3;
  uVar2 = (**(code **)(*(int *)(this + 0x6c) + 0x4c))
                    (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                     *(undefined4 *)(this + 0x68));
  if (0x7fffffff < uVar2) {
    if (*(int *)(*(int *)(DAT_000d0690 + 0xd0640) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d0698 + 0xd065a,0xb0c,DAT_000d0694 + 0xd064e,uVar2);
    }
    (**(code **)(*(int *)(this + 0x6c) + 0x58))
              (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68)
               ,4,0,0xffffffff);
    uVar2 = 0x80000000;
  }
  if (*piVar3 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

