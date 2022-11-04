
/* qcamera::QCamera3Stream::processDataNotify(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3Stream::processDataNotify(QCamera3Stream *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_r2;
  uint in_r3;
  int unaff_r4;
  uint unaff_r5;
  void *unaff_r6;
  int iVar3;
  int in_stack_ffffffe8;
  uint in_stack_ffffffec;
  
  iVar3 = *(int *)(DAT_00055ab0 + 0x55a2a);
  if (*(int *)(iVar3 + 0x48) != 0) {
    in_stack_ffffffe8 = DAT_00055ab4 + 0x55a34;
    in_r2 = DAT_00055ab8 + 0x55a3a;
    in_r3 = 0x21e;
    mm_camera_debug_log();
  }
  iVar1 = QCameraQueue::enqueue
                    ((QCameraQueue *)(this + 0x40),(cam_mapping_buf_type)param_1,in_r2,in_r3,
                     in_stack_ffffffe8,in_stack_ffffffec,unaff_r4,unaff_r5,unaff_r6);
  if (iVar1 == 0) {
    if (*(int *)(iVar3 + 0x48) != 0) {
      mm_camera_debug_log();
    }
    (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
    free(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),3,'\0','\0');
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log();
  }
  return uVar2;
}

