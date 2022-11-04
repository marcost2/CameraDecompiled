
/* qcamera::QCamera3PostProcessor::processPPMetadata(mm_camera_super_buf_t*, unsigned int, bool) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processPPMetadata
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1,uint param_2,bool param_3)

{
  void *pvVar1;
  mm_camera_super_buf_t **ppmVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void **ppvVar6;
  int iVar7;
  int in_stack_ffffffc8;
  uint in_stack_ffffffcc;
  int in_stack_ffffffd0;
  uint in_stack_ffffffd4;
  
  uVar5 = (uint)param_3;
  ppvVar6 = *(void ***)(DAT_00060204 + 0x60120);
  pvVar1 = *ppvVar6;
  iVar7 = *(int *)(DAT_00060208 + 0x6012e);
  uVar4 = param_2;
  if (*(int *)(iVar7 + 0x2c) != 0) {
    in_stack_ffffffc8 = DAT_0006020c + 0x6013c;
    uVar4 = DAT_00060210 + 0x60142;
    uVar5 = 0x31e;
    mm_camera_debug_log();
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x360));
  ppmVar2 = (mm_camera_super_buf_t **)malloc(0xc);
  *(bool *)(ppmVar2 + 2) = param_3;
  *ppmVar2 = param_1;
  ppmVar2[1] = (mm_camera_super_buf_t *)param_2;
  iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x200));
  if (iVar3 == 0) {
    iVar3 = isFrameMatched(this,param_2);
    if (iVar3 == 0) {
      QCameraQueue::enqueue
                ((QCameraQueue *)(this + 0x2d8),(cam_mapping_buf_type)ppmVar2,uVar4,uVar5,
                 in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,pvVar1);
    }
    else {
      android::List<qcamera::ReprocessBuffer>::push_back((uint *)(this + 0x1f8));
      if (*(int *)(iVar7 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
    }
  }
  else {
    QCameraQueue::enqueue
              ((QCameraQueue *)(this + 0x2d8),(cam_mapping_buf_type)ppmVar2,uVar4,uVar5,
               in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,pvVar1);
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x360));
  if (*ppvVar6 == pvVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

