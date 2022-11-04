
/* qcamera::QCameraMuxer::releaseJpegInfo(void*, void*) */

void qcamera::QCameraMuxer::releaseJpegInfo(void *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000bfbb0 + 0xbfb60);
  iVar1 = *(int *)(iVar3 + 0x28);
  if (iVar1 != 0) {
    iVar1 = mm_camera_debug_log(1,3,DAT_000bfbb8 + 0xbfb78,0x9e6,DAT_000bfbb4 + 0xbfb70);
  }
  if (param_1 != (void *)0x0) {
    pcVar2 = *(code **)((int)param_1 + 0x1c);
    if (pcVar2 != (code *)0x0) {
      iVar1 = *(int *)((int)param_1 + 0x24);
    }
    if (pcVar2 != (code *)0x0 && iVar1 != 0) {
      (*pcVar2)(iVar1,*(undefined4 *)((int)param_1 + 0x20),0);
    }
  }
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bfbc0 + 0xbfba8,0x9f0,DAT_000bfbbc + 0xbfba0);
  }
  return;
}

