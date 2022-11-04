
/* qcamera::QCamera2HardwareInterface::getJpegHandleInfo(mm_jpeg_ops_t*, mm_jpeg_mpo_ops_t*,
   unsigned int*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::getJpegHandleInfo
          (QCamera2HardwareInterface *this,mm_jpeg_ops_t *param_1,mm_jpeg_mpo_ops_t *param_2,
          uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = waitDeferredWork(this,(uint *)(this + 0x1db0));
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(DAT_000bf2b0 + 0xbf228) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000bf2b8 + 0xbf240,0x3809,DAT_000bf2b4 + 0xbf238);
    }
    return 0x80000000;
  }
  if ((param_1 != (mm_jpeg_ops_t *)0x0) &&
     (param_2 != (mm_jpeg_mpo_ops_t *)0x0 && param_3 != (uint *)0x0)) {
    uVar3 = *(undefined8 *)(this + 0x1dd4);
    uVar2 = *(undefined4 *)(this + 0x1ddc);
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0x1dcc);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)param_2 = *(undefined8 *)(this + 0x1de0);
    *param_3 = *(uint *)(this + 0x1de8);
    if (*(int *)(*(int *)(DAT_000bf2bc + 0xbf28c) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bf2c4 + 0xbf2a6,0x3812,DAT_000bf2c0 + 0xbf29c,param_3);
    }
    return 0;
  }
  return 0xffffffea;
}

