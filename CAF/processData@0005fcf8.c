
/* qcamera::QCamera3PostProcessor::processData(mm_camera_super_buf_t*, native_handle const**,
   unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processData
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1)

{
  void *pvVar1;
  mm_camera_super_buf_t **ppmVar2;
  int iVar3;
  undefined4 uVar4;
  mm_camera_super_buf_t *in_r2;
  mm_camera_super_buf_t *pmVar5;
  mm_camera_super_buf_t *in_r3;
  mm_camera_super_buf_t *pmVar6;
  int iVar7;
  void **ppvVar8;
  int in_stack_ffffffc8;
  uint in_stack_ffffffcc;
  int in_stack_ffffffd0;
  uint in_stack_ffffffd4;
  
  ppvVar8 = *(void ***)(DAT_0005fe08 + 0x5fd0c);
  pvVar1 = *ppvVar8;
  iVar7 = *(int *)(DAT_0005fe0c + 0x5fd1a);
  pmVar5 = in_r2;
  pmVar6 = in_r3;
  if (*(int *)(iVar7 + 0x2c) != 0) {
    in_stack_ffffffc8 = DAT_0005fe10 + 0x5fd24;
    pmVar5 = (mm_camera_super_buf_t *)(DAT_0005fe14 + 0x5fd2a);
    pmVar6 = (mm_camera_super_buf_t *)0x23b;
    mm_camera_debug_log();
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x360));
  ppmVar2 = (mm_camera_super_buf_t **)malloc(0xc);
  if (ppmVar2 == (mm_camera_super_buf_t **)0x0) {
    if (*(int *)(iVar7 + 0x20) == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      mm_camera_debug_log();
      uVar4 = 0xfffffff4;
    }
    goto LAB_0005fdec;
  }
  *ppmVar2 = param_1;
  ppmVar2[1] = in_r2;
  ppmVar2[2] = in_r3;
  iVar3 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x2d8));
  if (iVar3 == 0) {
    iVar3 = isMetaMatched(this,(uint)in_r3);
    if (iVar3 == 0) goto LAB_0005fdda;
    android::List<qcamera::ReprocessBuffer>::push_back((uint *)(this + 0x1f8));
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),3,'\0','\0');
  }
  else {
    if (*(int *)(iVar7 + 0x2c) != 0) {
      in_stack_ffffffc8 = DAT_0005fe28 + 0x5fd64;
      pmVar5 = (mm_camera_super_buf_t *)(DAT_0005fe2c + 0x5fd6a);
      pmVar6 = (mm_camera_super_buf_t *)0x256;
      mm_camera_debug_log();
    }
LAB_0005fdda:
    QCameraQueue::enqueue
              ((QCameraQueue *)(this + 0x200),(cam_mapping_buf_type)ppmVar2,(uint)pmVar5,
               (uint)pmVar6,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,
               pvVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x360));
  uVar4 = 0;
LAB_0005fdec:
  if (*ppvVar8 == pvVar1) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

