
/* qcamera::QCameraPostProcessor::setJpegHandle(mm_jpeg_ops_t*, mm_jpeg_mpo_ops_t*, unsigned int) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::setJpegHandle
          (QCameraPostProcessor *this,mm_jpeg_ops_t *param_1,mm_jpeg_mpo_ops_t *param_2,uint param_3
          )

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(DAT_000d25fc + 0xd2594);
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d2604 + 0xd25b0,0xb0,DAT_000d2600 + 0xd25a2,
                        *(undefined4 *)(this + 0x30),param_3);
  }
  if (param_1 != (mm_jpeg_ops_t *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x1c) = uVar2;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x10);
  }
  if (param_2 != (mm_jpeg_mpo_ops_t *)0x0) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)param_2;
  }
  *(uint *)(this + 0x30) = param_3;
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d260c + 0xd25f2,0xbb,DAT_000d2608 + 0xd25e6,param_3,param_3);
  }
  return 0;
}

