
/* qcamera::QCamera3YUVChannel::needsFramePostprocessing(metadata_buffer_t*) */

uint __thiscall
qcamera::QCamera3YUVChannel::needsFramePostprocessing
          (QCamera3YUVChannel *this,metadata_buffer_t *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_1 != (metadata_buffer_t *)0x0) {
    if (param_1[0x7e] != (metadata_buffer_t)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc6a4);
      *(undefined4 *)(this + 0x317c) = *(undefined4 *)(param_1 + 0xc6a8);
      *(undefined4 *)(this + 0x3178) = uVar2;
    }
    if (param_1[0x8d] != (metadata_buffer_t)0x0) {
      *(undefined4 *)(this + 0x3180) = *(undefined4 *)(param_1 + 0xc6f4);
    }
    if (param_1[0x8f] != (metadata_buffer_t)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0xc704);
      *(undefined8 *)(this + 0x3184) = *(undefined8 *)(param_1 + 0xc6fc);
      *(undefined8 *)(this + 0x318c) = uVar4;
    }
    if (param_1[0xd4] != (metadata_buffer_t)0x0) {
      this[0x3194] = *(QCamera3YUVChannel *)(param_1 + 0x22f8);
    }
  }
  uVar3 = (uint)(this[0x3178] != (QCamera3YUVChannel)0x0 && this[0x3178] != (QCamera3YUVChannel)0x3)
  ;
  if ((4 < *(uint *)(this + 0x3180)) || ((1 << (*(uint *)(this + 0x3180) & 0xff) & 0x19U) == 0)) {
    uVar3 = 1;
  }
  if ((*(int *)(*(int *)(this + 0x14e0) + 4) <= *(int *)(this + 0x318c)) &&
     (*(int *)(*(int *)(this + 0x14e0) + 8) <= *(int *)(this + 0x3190))) {
    return uVar3;
  }
  uVar1 = count_leading_zeroes((uint)(byte)this[0x3194]);
  return uVar1 >> 5 | uVar3;
}

