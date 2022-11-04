
/* qcamera::QCamera3PostProcessor::processData(qcamera::qcamera_fwk_input_pp_data_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processData
          (QCamera3PostProcessor *this,qcamera_fwk_input_pp_data_t *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5ec) == 0) {
LAB_000a91e4:
    iVar1 = QCameraQueue::dequeue((QCameraQueue *)(this + 0x59c),true);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000a92d8 + 0xa9260) + 0x20) == 0) {
        uVar6 = 0xffffffea;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000a92e0 + 0xa9278,0x2c4,DAT_000a92dc + 0xa9270);
        uVar6 = 0xffffffea;
      }
    }
    else {
      iVar7 = *(int *)(DAT_000a92e4 + 0xa91f8);
      if (*(int *)(iVar7 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000a92ec + 0xa9210,0x2c8,DAT_000a92e8 + 0xa9208);
      }
      puVar3 = (undefined8 *)malloc(0x2c);
      if (puVar3 == (undefined8 *)0x0) {
        if (*(int *)(iVar7 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a92f4 + 0xa9298,0x2cc,DAT_000a92f0 + 0xa9290);
        }
        uVar6 = 0xfffffff4;
      }
      else {
        *(undefined8 *)((int)puVar3 + 0x1c) = 0;
        *(undefined8 *)((int)puVar3 + 0x24) = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(int *)((int)puVar3 + 0x24) = iVar1;
        *(qcamera_fwk_input_pp_data_t **)(puVar3 + 2) = param_1;
        *(undefined4 *)((int)puVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x21c);
        QCameraQueue::enqueue((QCameraQueue *)(this + 0x50c),puVar3);
        uVar6 = 0;
        QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x21c);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x7e) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(iVar1 + 0xc6a4);
        if (cVar4 != '\0') {
          cVar4 = '\x01';
        }
      }
      if (*(char *)(iVar1 + 0x8d) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar1 + 0xc6f4);
        if (uVar5 != 0) {
          uVar5 = 1;
        }
      }
      if (cVar4 == '\0') {
        uVar2 = (uint)*(byte *)(iVar1 + 0x100);
        if (uVar2 != 0) {
          uVar2 = 1;
        }
        if ((~uVar5 & uVar2) != 0) goto LAB_000a91e4;
      }
    }
    if (1 < **(uint **)(DAT_000a92bc + 0xa9174)) {
      if ((**(byte **)(DAT_000a92c0 + 0xa9180) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000a92c4 + 0xa9190) + 1) << 0x1d) < 0) {
        atrace_int_body(DAT_000a92c8 + 0xa92b8,1);
      }
    }
    if (*(int *)(*(int *)(DAT_000a92cc + 0xa919e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a92d4 + 0xa91b6,0x2ba,DAT_000a92d0 + 0xa91ae);
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x600));
    QCameraQueue::enqueue((QCameraQueue *)(this + 0x4a0),param_1);
    uVar6 = 0;
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x600));
  }
  return uVar6;
}

