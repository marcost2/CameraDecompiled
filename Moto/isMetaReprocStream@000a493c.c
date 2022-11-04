
/* qcamera::QCamera3ReprocessChannel::isMetaReprocStream(qcamera::QCamera3Stream*) */

uint __thiscall
qcamera::QCamera3ReprocessChannel::isMetaReprocStream
          (QCamera3ReprocessChannel *this,QCamera3Stream *param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)(*(int *)(param_1 + 0x14) + 0x3e4) + -7);
  return uVar1 >> 5;
}

