
/* qcamera::QCameraPostProcessor::releaseSuperBuf(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCameraPostProcessor::releaseSuperBuf
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                              (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
    if (piVar1 != (int *)0x0) {
LAB_000d4980:
                    /* WARNING: Could not recover jumptable at 0x000d498c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
      return;
    }
    if (0 < (char)this[0x140]) {
      iVar2 = 0;
      do {
        piVar1 = *(int **)(this + iVar2 * 4 + 0x144);
        if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(param_1 + 4))) goto LAB_000d4980;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (char)this[0x140]);
    }
    if (*(int *)(*(int *)(DAT_000d49d8 + 0xd49b6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d49e0 + 0xd49d2,0x79f,DAT_000d49dc + 0xd49c6,
                          *(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

