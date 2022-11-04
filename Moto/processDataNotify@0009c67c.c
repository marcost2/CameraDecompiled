
/* qcamera::QCamera3Stream::processDataNotify(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3Stream::processDataNotify(QCamera3Stream *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0009c710 + 0x9c68a);
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c718 + 0x9c6a2,0x21e,DAT_0009c714 + 0x9c69a);
  }
  iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x40),param_1);
  if (iVar1 == 0) {
    if (*(int *)(iVar3 + 0x48) != 0) {
      mm_camera_debug_log(2,4,DAT_0009c720 + 0x9c6da,0x223,DAT_0009c71c + 0x9c6d2);
    }
    (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
    free(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),3,'\0','\0');
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c728 + 0x9c708,0x228,DAT_0009c724 + 0x9c700);
  }
  return uVar2;
}

