
/* qcamera::QCameraPostProcessor::processRawData(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::processRawData
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(*(int *)(DAT_000d4c00 + 0xd4b54) + 0x20) == 0) {
      uVar4 = 0x80000000;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000d4c08 + 0xd4b6c,0x48d,DAT_000d4c04 + 0xd4b64);
      uVar4 = 0x80000000;
    }
  }
  else {
    iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x1fc),param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(DAT_000d4c0c + 0xd4b7a);
      if (*(int *)(iVar1 + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000d4c14 + 0xd4b92,0x495,DAT_000d4c10 + 0xd4b8a);
      }
      if (param_1 != (mm_camera_super_buf_t *)0x0) {
        piVar2 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                  (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4))
        ;
        if (piVar2 == (int *)0x0) {
          if (0 < (char)this[0x140]) {
            iVar3 = 0;
            do {
              piVar2 = *(int **)(this + iVar3 * 4 + 0x144);
              if ((piVar2 != (int *)0x0) && (piVar2[4] == *(int *)(param_1 + 4))) goto LAB_000d4ba0;
              iVar3 = iVar3 + 1;
            } while (iVar3 < (char)this[0x140]);
          }
          if (*(int *)(iVar1 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d4c1c + 0xd4bee,0x79f,DAT_000d4c18 + 0xd4be2,
                                *(undefined4 *)(param_1 + 4));
          }
        }
        else {
LAB_000d4ba0:
          (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
        }
      }
      free(param_1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),3,'\0','\0');
    }
  }
  return uVar4;
}

