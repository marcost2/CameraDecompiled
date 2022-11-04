
/* qcamera::QCameraCmdThread::sendCmd(qcamera::camera_cmd_type_t, unsigned char, unsigned char) */

undefined4 __thiscall
qcamera::QCameraCmdThread::sendCmd
          (QCameraCmdThread *this,camera_cmd_type_t param_1,uchar param_2,uchar param_3)

{
  camera_cmd_type_t *__ptr;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r4;
  uint unaff_r5;
  void *unaff_r6;
  int in_stack_ffffffe0;
  uint in_stack_ffffffe4;
  
  uVar2 = (uint)param_2;
  uVar3 = (uint)param_3;
  __ptr = (camera_cmd_type_t *)malloc(4);
  if (__ptr != (camera_cmd_type_t *)0x0) {
    *__ptr = param_1;
    if (param_3 == 0) {
      iVar1 = QCameraQueue::enqueue
                        ((QCameraQueue *)this,(cam_mapping_buf_type)__ptr,uVar2,uVar3,
                         in_stack_ffffffe0,in_stack_ffffffe4,unaff_r4,unaff_r5,unaff_r6);
    }
    else {
      iVar1 = QCameraQueue::enqueueWithPriority((QCameraQueue *)this,__ptr);
    }
    if (iVar1 == 0) {
      free(__ptr);
    }
    cam_sem_post((cam_semaphore_t *)(this + 0x28));
    if (param_2 != 0) {
      cam_sem_wait((cam_semaphore_t *)(this + 0x34));
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_00037320 + 0x372f4) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  return 0xfffffff4;
}

