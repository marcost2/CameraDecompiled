
/* qcamera::QCamera3YUVChannel::needsFramePostprocessing(metadata_buffer_t*) */

bool __thiscall
qcamera::QCamera3YUVChannel::needsFramePostprocessing
          (QCamera3YUVChannel *this,metadata_buffer_t *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (metadata_buffer_t *)0x0) {
    if (param_1[0x7c] != (metadata_buffer_t)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc610);
      *(undefined4 *)(this + 12000) = *(undefined4 *)(param_1 + 0xc614);
      *(undefined4 *)(this + 0x2edc) = uVar2;
    }
    if (param_1[0x8b] != (metadata_buffer_t)0x0) {
      *(undefined4 *)(this + 0x2ee4) = *(undefined4 *)(param_1 + 0xc664);
    }
    if (param_1[0x8d] != (metadata_buffer_t)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0xc674);
      *(undefined8 *)(this + 0x2ee8) = *(undefined8 *)(param_1 + 0xc66c);
      *(undefined8 *)(this + 0x2ef0) = uVar3;
    }
  }
  bVar1 = this[0x2edc] != (QCamera3YUVChannel)0x0 && this[0x2edc] != (QCamera3YUVChannel)0x3;
  if ((4 < *(uint *)(this + 0x2ee4)) || ((1 << (*(uint *)(this + 0x2ee4) & 0xff) & 0x19U) == 0)) {
    bVar1 = true;
  }
  if ((*(int *)(this + 0x2ef0) < *(int *)(*(int *)(this + 0x1238) + 4)) ||
     (*(int *)(this + 0x2ef4) < *(int *)(*(int *)(this + 0x1238) + 8))) {
    bVar1 = true;
  }
  return bVar1;
}

