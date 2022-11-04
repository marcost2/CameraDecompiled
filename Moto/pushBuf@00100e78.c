
/* qcamera::BaseBSTBokeh::pushBuf(qcamera::camera_stereo_buf_info*,
   qcamera::camera_stereo_buf_info*) */

undefined4 __thiscall
qcamera::BaseBSTBokeh::pushBuf
          (BaseBSTBokeh *this,camera_stereo_buf_info *param_1,camera_stereo_buf_info *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (camera_stereo_buf_info *)0x0) {
    if (*(int *)(*(int *)(DAT_00100eec + 0x100eac) + 0x20) == 0) {
      return 0xffffffff;
    }
    uVar3 = 0x5e;
    iVar1 = DAT_00100ef0 + 0x100eba;
    iVar2 = DAT_00100ef4 + 0x100ec2;
  }
  else {
    if (param_2 != (camera_stereo_buf_info *)0x0) {
      QCameraQueue::enqueue((QCameraQueue *)(this + 0x1c),param_1);
      QCameraQueue::enqueue((QCameraQueue *)(this + 0x40),param_2);
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),3,'\0','\0');
      return 0;
    }
    if (*(int *)(*(int *)(DAT_00100ef8 + 0x100ec8) + 0x20) == 0) {
      return 0xffffffff;
    }
    uVar3 = 0x5f;
    iVar1 = DAT_00100efc + 0x100ed6;
    iVar2 = DAT_00100f00 + 0x100ede;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffff;
}

