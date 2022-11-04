
/* qcamera::QCamera3Stream::getFrameDimension(cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCamera3Stream::getFrameDimension(QCamera3Stream *this,cam_dimension_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 4) = uVar2;
    return 0;
  }
  return 0xffffffff;
}

