
/* qcamera::BokehSyncNode::isTimeSync(qcamera::camera_stereo_buf_info*,
   qcamera::camera_stereo_buf_info*) */

undefined4 __thiscall
qcamera::BokehSyncNode::isTimeSync
          (BokehSyncNode *this,camera_stereo_buf_info *param_1,camera_stereo_buf_info *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 0x10) + 0x18);
  iVar3 = (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x14) -
          *(int *)(*(int *)(*(int *)(param_2 + 8) + 0x10) + 0x14)) * 1000 +
          *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x18) / 1000000 +
          ((int)((longlong)iVar3 * -0x431bde83 >> 0x32) - (iVar3 / -0x5286402b + (iVar3 >> 0x1f)));
  uVar2 = 1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  uVar5 = 0;
  uVar1 = uVar5;
  if (9 < iVar4) {
    uVar5 = uVar2;
    uVar1 = 0xffffffff;
  }
  if (iVar3 < 0) {
    uVar5 = uVar1;
  }
  return uVar5;
}

