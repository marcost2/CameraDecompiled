
/* qcamera::QCameraStream::mapBuf(unsigned char, unsigned int, int, int, void*, unsigned int,
   mm_camera_map_unmap_ops_tbl_t*) */

void qcamera::QCameraStream::mapBuf
               (uchar param_1,uint param_2,int param_3,int param_4,void *param_5,uint param_6,
               mm_camera_map_unmap_ops_tbl_t *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  cam_buf_map_type_list acStack4144 [2056];
  undefined auStack2088 [2060];
  
  uVar1 = (uint)param_1;
  piVar4 = *(int **)(DAT_000d201c + 0xd1fa6);
  iVar2 = *piVar4;
  iVar3 = QCameraBufferMaps::makeSingletonBufMapList
                    (param_2,*(uint *)(uVar1 + 0x68),param_3,param_4,0,(int)param_5,(uint)param_7,
                     acStack4144,(void *)param_6);
  if (iVar3 == 0) {
    __aeabi_memcpy8(auStack2088,acStack4144,0x804);
    if (*(code **)(uVar1 + 0x2ec) == (code *)0x0) {
      (**(code **)(*(int *)(uVar1 + 0x6c) + 0x54))
                (*(undefined4 *)(uVar1 + 0x60),*(undefined4 *)(uVar1 + 100),auStack2088);
    }
    else {
      (**(code **)(uVar1 + 0x2ec))(auStack2088,*(undefined4 *)(uVar1 + 0x2f4));
    }
  }
  if (*piVar4 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

