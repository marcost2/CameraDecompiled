
/* qcamera::QCamera2HardwareInterface::allocateStreamUserBuf(cam_stream_info_t*) */

int * __thiscall
qcamera::QCamera2HardwareInterface::allocateStreamUserBuf
          (QCamera2HardwareInterface *this,cam_stream_info_t *param_1)

{
  cam_stream_info_t cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *this_00;
  QCameraParametersIntf *this_01;
  int *piVar6;
  cam_format_t local_20;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000b4318 + 0xb419a);
  local_1c = *piVar6;
  if (*(int *)(param_1 + 0x1a0) == 2) {
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 < 0xc) {
      if ((1 << (uVar2 & 0xff) & 0xbaeU) == 0) {
        if (uVar2 != 4) goto LAB_000b41da;
        this_00 = (int *)operator_new(0x92c);
        QCameraVideoMemory::QCameraVideoMemory
                  ((QCameraVideoMemory *)this_00,*(FuncDef101 **)(this + 0x4c8),
                   *(void **)(this + 0x4d0),false,2);
        cVar1 = param_1[0x19c];
        this_01 = (QCameraParametersIntf *)(this + 0x4ac);
        iVar3 = QCameraParametersIntf::getBufBatchCount(this_01);
        iVar3 = QCameraVideoMemory::allocateMeta((QCameraVideoMemory *)this_00,(uchar)cVar1,iVar3,5)
        ;
        if (iVar3 < 0) {
          if (*(int *)(*(int *)(DAT_000b4328 + 0xb42ee) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000b4330 + 0xb4306,0xf89,DAT_000b432c + 0xb42fe);
          }
        }
        else {
          QCameraParametersIntf::getStreamFormat(this_01,4,&local_20);
          iVar3 = QCameraParametersIntf::isUBWCEnabled(this_01);
          uVar2 = count_leading_zeroes(local_20 - 0x66);
          if (iVar3 != 0) {
            iVar3 = (uVar2 >> 5) << 0x1b;
          }
          QCameraVideoMemory::setVideoInfo((QCameraVideoMemory *)this_00,iVar3,local_20);
          uVar2 = *(int *)(param_1 + 0x19c) * *(int *)(param_1 + 0x1ac) + 0xfffU & 0xfffff000;
          if (*(int *)(*(int *)(DAT_000b434c + 0xb42b2) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000b4354 + 0xb42cc,0xfb1,DAT_000b4350 + 0xb42c0,
                                *(int *)(param_1 + 0x19c));
          }
          if (((int)uVar2 < 1) ||
             (uVar2 = (**(code **)(*this_00 + 8))(this_00,1,uVar2,0), uVar2 < 0x80000000))
          goto LAB_000b421a;
        }
        (**(code **)(*this_00 + 0x2c))(this_00);
      }
      else if (*(int *)(*(int *)(DAT_000b4334 + 0xb41c0) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b433c + 0xb41d8,4000,DAT_000b4338 + 0xb41d0);
        goto LAB_000b41da;
      }
    }
    else {
LAB_000b41da:
      if (*(int *)(*(int *)(DAT_000b4340 + 0xb41e0) + 0x20) != 0) {
        uVar5 = 0xfa9;
        iVar3 = DAT_000b4344 + 0xb41f0;
        iVar4 = DAT_000b4348 + 0xb41f8;
        goto LAB_000b4214;
      }
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000b431c + 0xb41fe) + 0x20) == 0) goto LAB_000b4218;
    uVar5 = 0xf75;
    iVar3 = DAT_000b4320 + 0xb420e;
    iVar4 = DAT_000b4324 + 0xb4216;
LAB_000b4214:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
  }
LAB_000b4218:
  this_00 = (int *)0x0;
LAB_000b421a:
  if (*piVar6 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

