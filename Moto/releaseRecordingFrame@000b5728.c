
/* qcamera::QCamera2HardwareInterface::releaseRecordingFrame(void const*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::releaseRecordingFrame
          (QCamera2HardwareInterface *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x9c0);
  if (*(int *)(*(int *)(DAT_000b577c + 0xb573a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000b5784 + 0xb5754,0x129a,DAT_000b5780 + 0xb574a,param_1);
  }
  if (iVar2 == 0) {
    return 0x80000000;
  }
  uVar1 = (*(code *)PTR_releaseFrame_00119c24)(iVar2,param_1,0 < *(int *)(this + 0x4b8));
  return uVar1;
}

