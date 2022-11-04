
/* qcamera::QCameraPostProcessor::releaseJpegJobData(qcamera::qcamera_jpeg_data_t*) */

void __thiscall
qcamera::QCameraPostProcessor::releaseJpegJobData
          (QCameraPostProcessor *this,qcamera_jpeg_data_t *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000d4d78 + 0xd4c30);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d4d80 + 0xd4c4c,0x7e3,DAT_000d4d7c + 0xd4c44);
  }
  if (param_1 != (qcamera_jpeg_data_t *)0x0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0) {
      if (param_1[0x18] == (qcamera_jpeg_data_t)0x0) {
        piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                  (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(iVar3 + 4));
        if (piVar1 == (int *)0x0) {
          if (0 < (char)this[0x140]) {
            iVar2 = 0;
            do {
              piVar1 = *(int **)(this + iVar2 * 4 + 0x144);
              if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar3 + 4))) goto LAB_000d4c66;
              iVar2 = iVar2 + 1;
            } while (iVar2 < (char)this[0x140]);
          }
          if (*(int *)(iVar4 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d4d88 + 0xd4d72,0x79f,DAT_000d4d84 + 0xd4d66,
                                *(undefined4 *)(iVar3 + 4));
          }
        }
        else {
LAB_000d4c66:
          (**(code **)(*piVar1 + 0x1c))(piVar1,iVar3);
        }
      }
      free(*(void **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(iVar3 + 4));
      if (piVar1 == (int *)0x0) {
        if (0 < (char)this[0x140]) {
          iVar2 = 0;
          do {
            piVar1 = *(int **)(this + iVar2 * 4 + 0x144);
            if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar3 + 4))) goto LAB_000d4c88;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (char)this[0x140]);
        }
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d4d90 + 0xd4d28,0x79f,DAT_000d4d8c + 0xd4d1c,
                              *(undefined4 *)(iVar3 + 4));
        }
      }
      else {
LAB_000d4c88:
        (**(code **)(*piVar1 + 0x1c))(piVar1,iVar3);
      }
      free(*(void **)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x1c));
    }
    if ((*(void **)(param_1 + 0x28) != (void *)0x0) && (param_1[0x24] != (qcamera_jpeg_data_t)0x0))
    {
      free(*(void **)(param_1 + 0x28));
      param_1[0x24] = (qcamera_jpeg_data_t)0x0;
    }
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d4d98 + 0xd4cde,0x802,DAT_000d4d94 + 0xd4cd6);
  }
  return;
}

