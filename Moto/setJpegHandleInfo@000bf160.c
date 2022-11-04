
/* qcamera::QCamera2HardwareInterface::setJpegHandleInfo(mm_jpeg_ops_t*, mm_jpeg_mpo_ops_t*,
   unsigned int) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setJpegHandleInfo
          (QCamera2HardwareInterface *this,mm_jpeg_ops_t *param_1,mm_jpeg_mpo_ops_t *param_2,
          uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 != (mm_jpeg_mpo_ops_t *)0x0) && (param_1 != (mm_jpeg_ops_t *)0x0 && param_3 != 0)) {
    if (*(int *)(*(int *)(DAT_000bf1f0 + 0xbf1a6) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bf1f8 + 0xbf1c0,0x37ea,DAT_000bf1f4 + 0xbf1b6,param_3);
    }
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(this + 0x1ddc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x1dcc) = uVar1;
    *(undefined8 *)(this + 0x1dd4) = uVar2;
    uVar1 = *(undefined8 *)param_2;
    *(uint *)(this + 0x1de8) = param_3;
    *(undefined8 *)(this + 0x1de0) = uVar1;
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000bf1fc + 0xbf178) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000bf204 + 0xbf192,0x37f2,DAT_000bf200 + 0xbf188,param_3);
  }
  return 0xffffffea;
}

