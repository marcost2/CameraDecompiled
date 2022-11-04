
/* qcamera::BokehSyncNode::isFrameNumSync(qcamera::camera_stereo_buf_info*,
   qcamera::camera_stereo_buf_info*) */

int __thiscall
qcamera::BokehSyncNode::isFrameNumSync
          (BokehSyncNode *this,camera_stereo_buf_info *param_1,camera_stereo_buf_info *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)) {
    iVar2 = -1;
  }
  iVar1 = *(uint *)(param_1 + 4) - *(uint *)(param_2 + 4);
  if (iVar1 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}

