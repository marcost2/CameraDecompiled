
/* qcamera::QCameraMuxer::findPreviousJpegs(void*, void*, void*) */

bool qcamera::QCameraMuxer::findPreviousJpegs(void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000c4868 + 0xc4816);
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4870 + 0xc482e,0x9cd,DAT_000c486c + 0xc4826);
  }
  if (param_1 == (void *)0x0 || param_3 == (void *)0x0) {
    return false;
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_3;
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4878 + 0xc4858,0x9d4,DAT_000c4874 + 0xc4850);
  }
  return *(uint *)((int)param_1 + 0x18) < uVar1;
}

