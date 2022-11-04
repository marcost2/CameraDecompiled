
/* qcamera::QCameraBufferMaps::makeSingletonBufMapList(cam_mapping_buf_type, unsigned int, unsigned
   int, int, unsigned int, int, unsigned int, cam_buf_map_type_list&, void*) */

undefined4
qcamera::QCameraBufferMaps::makeSingletonBufMapList
          (cam_mapping_buf_type param_1,uint param_2,uint param_3,int param_4,uint param_5,
          int param_6,uint param_7,cam_buf_map_type_list *param_8,void *param_9)

{
  QCameraBufferMaps *this;
  int *piVar1;
  QCameraBufferMaps aQStack2064 [2052];
  int local_c;
  
  piVar1 = *(int **)(DAT_0003713c + 0x370f6);
  local_c = *piVar1;
  this = (QCameraBufferMaps *)QCameraBufferMaps(aQStack2064);
  getCamBufMapList(this,param_8);
  if (*piVar1 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

