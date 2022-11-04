
/* qcamera::QCamera3Stream::timeoutFrame(int) */

undefined4 qcamera::QCamera3Stream::timeoutFrame(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  cam_mapping_buf_type in_r1;
  uint in_r2;
  uint in_r3;
  int unaff_r4;
  uint unaff_r5;
  void *unaff_r6;
  int iVar3;
  int in_stack_ffffffe8;
  uint in_stack_ffffffec;
  
  iVar3 = *(int *)(DAT_00055a00 + 0x55986);
  if (*(int *)(iVar3 + 0x48) != 0) {
    in_stack_ffffffe8 = DAT_00055a04 + 0x55990;
    in_r2 = DAT_00055a08 + 0x55996;
    in_r3 = 0x201;
    mm_camera_debug_log();
  }
  iVar1 = QCameraQueue::enqueue
                    ((QCameraQueue *)(param_1 + 100),in_r1,in_r2,in_r3,in_stack_ffffffe8,
                     in_stack_ffffffec,unaff_r4,unaff_r5,unaff_r6);
  if (iVar1 == 0) {
    if (*(int *)(iVar3 + 0x48) == 0) {
      return 0;
    }
    mm_camera_debug_log();
    uVar2 = 0;
  }
  else {
    uVar2 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(param_1 + 0x88),5,'\0','\0');
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log();
  }
  return uVar2;
}

