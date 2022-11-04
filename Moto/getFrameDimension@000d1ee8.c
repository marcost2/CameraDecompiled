
/* qcamera::QCameraStream::getFrameDimension(cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraStream::getFrameDimension(QCameraStream *this,cam_dimension_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0x2d4) == 8 || *(int *)(this + 0x2d4) == 2) {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(this + 0x70) + 0xc);
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 4) = uVar2;
  return 0;
}

