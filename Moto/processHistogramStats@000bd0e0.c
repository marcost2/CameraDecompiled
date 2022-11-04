
/* qcamera::QCamera2HardwareInterface::processHistogramStats(cam_hist_stats_t&) */

void __thiscall
qcamera::QCamera2HardwareInterface::processHistogramStats
          (QCamera2HardwareInterface *this,cam_hist_stats_t *param_1)

{
  int iVar1;
  void **ppvVar2;
  undefined4 uVar3;
  cam_hist_stats_t *__src;
  int *piVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong lStack48;
  undefined8 local_28;
  undefined8 uStack32;
  int local_18;
  
  piVar4 = *(int **)(DAT_000bd24c + 0xbd0ee);
  local_18 = *piVar4;
  iVar1 = QCameraParametersIntf::isHistogramEnabled((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000bd250 + 0xbd140) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bd258 + 0xbd15a,0x2b1a,DAT_000bd254 + 0xbd152);
    }
  }
  else {
    ppvVar2 = (void **)(**(code **)(this + 0x4c8))(0xffffffff,0x404,1,*(undefined4 *)(this + 0x4d0))
    ;
    if (ppvVar2 == (void **)0x0) {
      if (*(int *)(*(int *)(DAT_000bd25c + 0xbd164) + 0x20) == 0) {
        uVar3 = 0xfffffff4;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000bd264 + 0xbd17c,0x2b23,DAT_000bd260 + 0xbd174);
        uVar3 = 0xfffffff4;
      }
      goto LAB_000bd23a;
    }
    if (*ppvVar2 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000bd268 + 0xbd18a) + 0x20) == 0) {
        uVar3 = 0x80000000;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000bd270 + 0xbd1a2,0x2b29,DAT_000bd26c + 0xbd19a);
        uVar3 = 0x80000000;
      }
      goto LAB_000bd23a;
    }
    if (*(int *)param_1 == 1) {
      __src = param_1 + 4;
LAB_000bd1ca:
      __aeabi_memcpy8(*ppvVar2,__src,0x404);
    }
    else if (*(int *)param_1 == 0) {
      switch(*(undefined4 *)(param_1 + 4)) {
      default:
        __src = param_1 + 8;
        break;
      case 1:
        __src = param_1 + 0x810;
        break;
      case 2:
      case 5:
        __src = param_1 + 0xc14;
        break;
      case 4:
        __src = param_1 + 0x40c;
      }
      goto LAB_000bd1ca;
    }
    uStack32 = 0;
    local_38 = 0;
    local_48 = 0;
    local_4c = 0x1000;
    local_50 = 1;
    lStack48 = ZEXT48(ppvVar2) << 0x20;
    local_40 = ZEXT48(ppvVar2);
    local_28 = CONCAT44(*(undefined4 *)(DAT_000bd274 + 0xbd206),this);
    iVar1 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_50);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_000bd278 + 0xbd218) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bd280 + 0xbd230,0x2b52,DAT_000bd27c + 0xbd228);
      }
      (*(code *)ppvVar2[3])(ppvVar2);
    }
  }
  uVar3 = 0;
LAB_000bd23a:
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

