
/* qcamera::QCameraStream::getFrameOffset(cam_frame_len_offset_t&) */

void __thiscall
qcamera::QCameraStream::getFrameOffset(QCameraStream *this,cam_frame_len_offset_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *__src;
  cam_stream_info_t acStack33656 [12];
  undefined4 local_836c;
  undefined4 local_8368;
  undefined auStack33636 [33604];
  
  piVar4 = *(int **)(DAT_000d1ee4 + 0xd1e46);
  iVar1 = *piVar4;
  if (*(int *)(this + 0x70) == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    __aeabi_memcpy8(param_1,this + 0x120,0x188);
    iVar3 = *(int *)(this + 0x2d4);
    if (((iVar3 == 2 || iVar3 == 8) || (*(int *)(param_1 + 0x184) == 0)) || (*(int *)param_1 == 0))
    {
      __src = *(void **)(this + 0x70);
      __aeabi_memcpy8(acStack33656,__src,0x8350);
      if (__src != (void *)0x0) {
        if (iVar3 == 8 || iVar3 == 2) {
          local_836c = *(undefined4 *)((int)__src + 0x10);
          local_8368 = *(undefined4 *)((int)__src + 0xc);
        }
        else {
          local_836c = *(undefined4 *)((int)__src + 0xc);
          local_8368 = *(undefined4 *)((int)__src + 0x10);
        }
      }
      calcOffset(this,acStack33656);
      __aeabi_memcpy8(param_1,auStack33636,0x188);
    }
    uVar2 = 0;
  }
  if (*piVar4 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

