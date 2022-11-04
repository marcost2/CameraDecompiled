
/* qcamera::QCameraStream::processDataNotify(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraStream::processDataNotify(QCameraStream *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000d0b58 + 0xd0ad6);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d0b60 + 0xd0aee,0x3f3,DAT_000d0b5c + 0xd0ae6);
  }
  iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0xa0),param_1);
  if (iVar1 == 0) {
    if (this[0x2e1] == (QCameraStream)0x0) {
      if (*(int *)(iVar3 + 0x24) != 0) {
        if (*(int *)(this + 0x70) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x70) + 4);
        }
        mm_camera_debug_log(1,2,DAT_000d0b68 + 0xd0b4a,0x3f9,DAT_000d0b64 + 0xd0b3e,uVar2);
      }
    }
    else {
      (**(code **)(*(int *)this + 0x10))(this,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
    }
    free(param_1);
    return 0;
  }
  uVar2 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0xc4),3,'\0','\0');
  return uVar2;
}

