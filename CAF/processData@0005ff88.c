
/* qcamera::QCamera3PostProcessor::processData(qcamera::qcamera_fwk_input_pp_data_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processData
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint in_r2;
  uint in_r3;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  undefined4 uVar3;
  void *unaff_r7;
  int iVar4;
  undefined8 uVar5;
  int in_stack_ffffffe8;
  
  uVar5 = needsReprocess(this,(qcamera_fwk_input_pp_data_t *)param_1);
  if ((int)uVar5 == 0) {
    iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x2fc),true);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000600c4 + 0x6006a) + 0x20) == 0) {
        uVar3 = 0xffffffea;
      }
      else {
        mm_camera_debug_log();
        uVar3 = 0xffffffea;
      }
    }
    else {
      iVar4 = *(int *)(DAT_000600d0 + 0x60008);
      if (*(int *)(iVar4 + 0x28) != 0) {
        in_stack_ffffffe8 = DAT_000600d4 + 0x60012;
        in_r3 = 0x2f8;
        mm_camera_debug_log();
      }
      puVar2 = (undefined8 *)malloc(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        uVar3 = 0xfffffff4;
      }
      else {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(int *)((int)puVar2 + 0x24) = iVar1;
        uVar3 = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(mm_camera_super_buf_t **)(puVar2 + 2) = param_1;
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)((int)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x21c);
        QCameraQueue::enqueue
                  ((QCameraQueue *)(this + 0x26c),(cam_mapping_buf_type)puVar2,
                   (uint)(undefined4 *)((int)puVar2 + 0x1c),in_r3,in_stack_ffffffe8,unaff_r4,
                   unaff_r5,unaff_r6,unaff_r7);
        QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
      }
    }
  }
  else {
    if (1 < **(uint **)(DAT_000600b4 + 0x5ff9c)) {
      atrace_int(CONCAT44(unaff_r4,in_stack_ffffffe8),(char *)0x1,(int)((ulonglong)uVar5 >> 0x20));
    }
    if (*(int *)(*(int *)(DAT_000600b8 + 0x5ffae) + 0x28) != 0) {
      in_stack_ffffffe8 = DAT_000600bc + 0x5ffb8;
      in_r2 = DAT_000600c0 + 0x5ffbe;
      in_r3 = 0x2ea;
      mm_camera_debug_log();
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x360));
    QCameraQueue::enqueue
              ((QCameraQueue *)(this + 0x224),(cam_mapping_buf_type)param_1,in_r2,in_r3,
               in_stack_ffffffe8,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
    uVar3 = 0;
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x360));
  }
  return uVar3;
}

