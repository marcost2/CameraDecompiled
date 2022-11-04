
/* qcamera::QCameraPostProcessor::syncStreamParams(mm_camera_super_buf_t*, mm_camera_super_buf_t*)
    */

int __thiscall
qcamera::QCameraPostProcessor::syncStreamParams
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1,mm_camera_super_buf_t *param_2)

{
  QCameraStream *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  mm_camera_buf_def *local_28;
  mm_camera_buf_def *pmStack36;
  QCameraStream *local_20;
  QCameraStream *local_1c;
  QCameraStream *local_18;
  int local_14;
  
  piVar6 = *(int **)(DAT_000d5e3c + 0xd5d46);
  local_14 = *piVar6;
  local_18 = (QCameraStream *)0x0;
  local_20 = (QCameraStream *)0x0;
  local_1c = (QCameraStream *)0x0;
  local_28 = (mm_camera_buf_def *)0x0;
  pmStack36 = (mm_camera_buf_def *)0x0;
  iVar2 = queryStreams(this,&local_1c,&local_20,&local_18,&pmStack36,&local_28,param_1,param_2);
  pQVar1 = local_1c;
  if (iVar2 == 0) {
    if ((local_1c == (QCameraStream *)0x0) ||
       (iVar2 = QCameraStream::syncRuntimeParams(local_1c), iVar2 == 0)) {
      if ((local_20 == (QCameraStream *)0x0) ||
         (iVar2 = QCameraStream::syncRuntimeParams(local_20), iVar2 == 0)) {
        iVar2 = 0;
        if (local_18 == (QCameraStream *)0x0 || local_18 == pQVar1) goto LAB_000d5dfc;
        iVar2 = QCameraStream::syncRuntimeParams(local_18);
        if (iVar2 == 0) {
          iVar2 = 0;
          goto LAB_000d5dfc;
        }
        if (*(int *)(*(int *)(DAT_000d5e64 + 0xd5e18) + 0x20) == 0) goto LAB_000d5dfc;
        uVar5 = 0x930;
        iVar3 = DAT_000d5e68 + 0xd5e2a;
        iVar4 = DAT_000d5e6c + 0xd5e34;
      }
      else {
        if (*(int *)(*(int *)(DAT_000d5e58 + 0xd5dd6) + 0x20) == 0) goto LAB_000d5dfc;
        uVar5 = 0x927;
        iVar3 = DAT_000d5e5c + 0xd5de6;
        iVar4 = DAT_000d5e60 + 0xd5df0;
      }
    }
    else {
      if (*(int *)(*(int *)(DAT_000d5e4c + 0xd5daa) + 0x20) == 0) goto LAB_000d5dfc;
      uVar5 = 0x91e;
      iVar3 = DAT_000d5e50 + 0xd5dba;
      iVar4 = DAT_000d5e54 + 0xd5dc4;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000d5e40 + 0xd5d76) + 0x20) == 0) goto LAB_000d5dfc;
    uVar5 = 0x916;
    iVar3 = DAT_000d5e44 + 0xd5d88;
    iVar4 = DAT_000d5e48 + 0xd5d92;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar3,iVar2);
LAB_000d5dfc:
  if (*piVar6 == local_14) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

