
/* qcamera::QCamera3HardwareInterface::initialize(camera3_callback_ops const*) */

int __thiscall
qcamera::QCamera3HardwareInterface::initialize
          (QCamera3HardwareInterface *this,camera3_callback_ops *param_1)

{
  int iVar1;
  MotCtrl *pMVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(DAT_00080dcc + 0x80c24);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_00080dd0 + 0x80c34) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00080dd4 + 0x80c44) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00080dd8 + 0x80dbc);
    }
  }
  iVar3 = *(int *)(DAT_00080ddc + 0x80c52);
  if (*(int *)(iVar3 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_00080de4 + 0x80c7a,0x472,DAT_00080de0 + 0x80c6c,
                        *(undefined4 *)(this + 0x60),*(undefined4 *)(this + 0x117fd8));
  }
  __mutex = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_lock(__mutex);
  if (*(int *)(this + 0x117fd8) == 1) {
    iVar1 = initParameters(this);
    if (-1 < iVar1) {
      pMVar2 = (MotCtrl *)operator_new(0x14);
      pMVar2 = (MotCtrl *)MotCtrl::MotCtrl(pMVar2);
      *(MotCtrl **)(this + 0x117fdc) = pMVar2;
      iVar1 = MotCtrl::initMotCtrl(pMVar2,*(mm_camera_vtbl_t **)(this + 100));
      if (iVar1 != 0) {
        (**(code **)((*(undefined4 **)(this + 100))[1] + 0x14))(**(undefined4 **)(this + 100),1);
      }
      *(camera3_callback_ops **)(this + 0x88) = param_1;
      iVar1 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x34))
                        (**(undefined4 **)(this + 100),0,0,this);
      *(int *)(this + 0xf4) = iVar1;
      if (iVar1 == 0) {
        if (*(int *)(iVar3 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_00080dfc + 0x80da2,0x494,DAT_00080df8 + 0x80d9a);
        }
        pthread_mutex_unlock(__mutex);
        iVar1 = -0xc;
      }
      else {
        pthread_mutex_unlock(__mutex);
        this[0x68] = (QCamera3HardwareInterface)0x1;
        *(undefined4 *)(this + 0x117fd8) = 2;
        if (*(int *)(iVar3 + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_00080e04 + 0x80d12,0x49d,DAT_00080e00 + 0x80d0a);
        }
        iVar1 = 0;
      }
      goto LAB_00080d3e;
    }
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00080df4 + 0x80d86,0x482,DAT_00080df0 + 0x80d7c,iVar1);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00080dec + 0x80d32,0x47b,DAT_00080de8 + 0x80d26,
                          *(int *)(this + 0x117fd8));
    }
    iVar1 = -0x13;
  }
  pthread_mutex_unlock(__mutex);
LAB_00080d3e:
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_00080e08 + 0x80d4c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00080e0c + 0x80d5a) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar1;
}

