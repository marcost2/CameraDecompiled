
/* qcamera::QCameraBufferMaps::makeSingletonBufMapList(cam_mapping_buf_type, unsigned int, unsigned
   int, int, unsigned int, int, unsigned int, cam_buf_map_type_list&, void*) */

undefined4
qcamera::QCameraBufferMaps::makeSingletonBufMapList
          (cam_mapping_buf_type param_1,uint param_2,uint param_3,int param_4,uint param_5,
          int param_6,uint param_7,cam_buf_map_type_list *param_8,void *param_9)

{
  int *piVar1;
  undefined4 local_828;
  cam_mapping_buf_type local_824;
  uint uStack2080;
  uint local_81c;
  int iStack2072;
  uint local_814;
  int local_810;
  uint local_80c;
  void *local_808;
  undefined auStack2052 [2020];
  int local_20;
  
  piVar1 = *(int **)(DAT_0007c160 + 0x7c106);
  local_20 = *piVar1;
  __aeabi_memclr8(auStack2052,0x7e0);
  local_808 = param_9;
  local_80c = param_7;
  local_810 = param_6;
  local_814 = param_5;
  local_828 = 1;
  local_824 = param_1;
  uStack2080 = param_2;
  local_81c = param_3;
  iStack2072 = param_4;
  __aeabi_memcpy8(param_8,&local_828,0x804);
  if (*piVar1 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

