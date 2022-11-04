
/* qcamera::QCamera3HardwareInterface::getSensorOutputSize(cam_dimension_t&) */

int __thiscall
qcamera::QCamera3HardwareInterface::getSensorOutputSize
          (QCamera3HardwareInterface *this,cam_dimension_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(this + 0x260) == 0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = 0;
    iVar5 = 0;
    iVar4 = 0;
    do {
      if (iVar4 < *(int *)(this + uVar3 * 8 + 0x224)) {
        iVar4 = *(int *)(this + uVar3 * 8 + 0x224);
      }
      if (iVar5 < *(int *)(this + uVar3 * 8 + 0x220)) {
        iVar5 = *(int *)(this + uVar3 * 8 + 0x220);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x260));
  }
  clear_metadata_buffer(*(metadata_buffer_t **)(this + 0x14c));
  iVar1 = *(int *)(this + 0x14c);
  if (iVar1 == 0) {
    iVar4 = *(int *)(DAT_0003c5bc + 0x3c486);
    if ((*(int *)(iVar4 + 0x20) == 0) || (mm_camera_debug_log(), *(int *)(iVar4 + 0x20) == 0)) {
      iVar4 = -1;
    }
    else {
      mm_camera_debug_log();
      iVar4 = -1;
    }
  }
  else {
    *(int *)(iVar1 + 0x7329c) = iVar4;
    *(int *)(iVar1 + 0x73298) = iVar5;
    *(undefined *)(*(int *)(this + 0x14c) + 0x2d) = 1;
    iVar4 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x18))
                      (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
    if (iVar4 == 0) {
      clear_metadata_buffer(*(metadata_buffer_t **)(this + 0x14c));
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(*(int *)(DAT_0003c5dc + 0x3c4ea) + 0x20) != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        *(undefined *)(*(int *)(this + 0x14c) + 0x2e) = 1;
      }
      iVar4 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x1c))
                        (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
      if (iVar4 == 0) {
        iVar4 = *(int *)(this + 0x14c);
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(DAT_0003c5f4 + 0x3c568) + 0x20) != 0) {
            mm_camera_debug_log();
          }
        }
        else {
          uVar2 = *(undefined4 *)(iVar4 + 0x732a4);
          *(undefined4 *)param_1 = *(undefined4 *)(iVar4 + 0x732a0);
          *(undefined4 *)(param_1 + 4) = uVar2;
        }
        if (*(int *)(*(int *)(DAT_0003c600 + 0x3c590) + 0x28) != 0) {
          mm_camera_debug_log();
        }
        iVar4 = 0;
      }
      else if (*(int *)(*(int *)(DAT_0003c5e8 + 0x3c524) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else if (*(int *)(*(int *)(DAT_0003c5d0 + 0x3c460) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  return iVar4;
}

