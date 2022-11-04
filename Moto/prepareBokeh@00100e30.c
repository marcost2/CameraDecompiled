
/* qcamera::BaseBSTBokeh::prepareBokeh(int, unsigned int, mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*, void*) */

undefined4 __thiscall
qcamera::BaseBSTBokeh::prepareBokeh
          (BaseBSTBokeh *this,int param_1,uint param_2,mm_camera_super_buf_t *param_3,
          QCamera3Stream *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 200));
  if (this[8] == (BaseBSTBokeh)0x0) {
    piVar1 = (int *)operator_new(0x18);
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = (int)param_3;
    piVar1[3] = (int)param_4;
    piVar1[4] = (int)param_5;
    BokehSyncNode::pushBuf(*(BokehSyncNode **)(this + 0x18),(camera_stereo_buf_info *)piVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 200));
  return uVar2;
}

