
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::allocateStreamBuf(cam_stream_type_t, unsigned int, int, int,
   unsigned char&) */

int * __thiscall
qcamera::QCamera2HardwareInterface::allocateStreamBuf
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1,uint param_2,int param_3,
          int param_4,uchar *param_5)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  QCamera2HardwareInterface *pQVar4;
  int iVar5;
  int iVar6;
  FuncDef100 *pFVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 uVar10;
  int *this_00;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  QCameraParametersIntf *pQVar14;
  undefined4 uVar15;
  preview_stream_ops *ppVar16;
  cam_stream_type_t cVar17;
  cam_format_t local_f0;
  int local_ec;
  int iStack232;
  char acStack228 [92];
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar13 = *(int **)(DAT_000b399c + 0xb3610);
  local_28 = *piVar13;
  property_get(DAT_000b39a0 + 0xb3624,acStack228,DAT_000b39a4 + 0xb3626);
  iVar3 = atoi(acStack228);
  this_00 = (int *)0x0;
  switch(param_1) {
  case 1:
    pQVar14 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar5 = QCameraParametersIntf::isNoDisplayMode(pQVar14);
    if (iVar5 != 0) {
      this_00 = (int *)operator_new(0x720);
      pFVar7 = *(FuncDef100 **)(this + 0x4c8);
      pvVar8 = *(void **)(this + 0x4d0);
      pQVar4 = (QCamera2HardwareInterface *)0x0;
      if (iVar3 == 1) {
        pQVar4 = this + 0x934;
      }
      cVar17 = 1;
      break;
    }
    this_00 = (int *)operator_new(0xa94);
    QCameraGrallocMemory::QCameraGrallocMemory
              ((QCameraGrallocMemory *)this_00,*(FuncDef102 **)(this + 0x4c8),
               *(void **)(this + 0x4d0));
    QCameraParametersIntf::getStreamDimension(pQVar14,1,(cam_dimension_t *)&local_88);
    QCameraParametersIntf::getPreviewFpsRange(pQVar14,&iStack232,&local_ec);
    iVar6 = QCameraParametersIntf::isUBWCEnabled(pQVar14);
    iVar5 = 0;
    iVar11 = 0;
    if (iVar6 != 0) {
      QCameraParametersIntf::getStreamFormat(pQVar14,1,&local_f0);
      uVar9 = count_leading_zeroes(local_f0 - 0x66);
      iVar11 = (uVar9 >> 5) << 0x1c;
    }
    (**(code **)(*this_00 + 0x34))(this_00,5);
    ppVar16 = *(preview_stream_ops **)(this + 0x4a8);
    iVar6 = QCameraParametersIntf::getPreviewHalPixelFormat(pQVar14);
    QCameraGrallocMemory::setWindowInfo
              ((QCameraGrallocMemory *)this_00,ppVar16,(cam_format_t)local_88,local_88._4_4_,param_3
               ,param_4,iVar6,local_ec,iVar11);
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
    iVar6 = *param_5 - 5;
    if (*param_5 < 5 || iVar6 == 0) {
      iVar6 = 0;
    }
    this[0x1dfc] = SUB41(iVar6,0);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
    uVar15 = 1;
    goto LAB_000b37f8;
  case 2:
    pQVar14 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar5 = QCameraParametersIntf::isNoDisplayMode(pQVar14);
    if (iVar5 == 0) {
      local_88 = 0;
      uStack128 = 0;
      uStack56 = 0;
      uStack52 = 0;
      local_48 = 0;
      uStack64 = 0;
      local_3c = 0;
      local_58 = 0;
      uStack80 = 0;
      local_68 = 0;
      uStack96 = 0;
      local_78 = 0;
      uStack112 = 0;
      property_get(DAT_000b39a8 + 0xb36e0,&local_88,DAT_000b39ac + 0xb36e2);
      iVar5 = atoi((char *)&local_88);
      if (iVar5 != 1) {
        this_00 = (int *)operator_new(0xa94);
        QCameraGrallocMemory::QCameraGrallocMemory
                  ((QCameraGrallocMemory *)this_00,*(FuncDef102 **)(this + 0x4c8),
                   *(void **)(this + 0x4d0));
        QCameraParametersIntf::getStreamDimension(pQVar14,2,(cam_dimension_t *)&local_88);
        QCameraParametersIntf::getPreviewFpsRange(pQVar14,&iStack232,&local_ec);
        ppVar16 = *(preview_stream_ops **)(this + 0x4a8);
        iVar6 = QCameraParametersIntf::getPreviewHalPixelFormat(pQVar14);
        iVar5 = 0;
        QCameraGrallocMemory::setWindowInfo
                  ((QCameraGrallocMemory *)this_00,ppVar16,(cam_format_t)local_88,local_88._4_4_,
                   param_3,param_4,iVar6,local_ec,0);
        uVar15 = 1;
        goto LAB_000b37f8;
      }
    }
    this_00 = (int *)operator_new(0x720);
    pFVar7 = *(FuncDef100 **)(this + 0x4c8);
    pvVar8 = *(void **)(this + 0x4d0);
    pQVar4 = (QCamera2HardwareInterface *)0x0;
    cVar17 = 0;
    break;
  case 3:
  case 8:
  case 0xb:
    goto switchD_000b363e_caseD_3;
  case 4:
    pQVar14 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar5 = QCameraParametersIntf::isVideoBuffersCached(pQVar14);
    if ((iVar5 == 0) && (iVar5 = QCameraParametersIntf::isSeeMoreEnabled(pQVar14), iVar5 == 0)) {
      uVar15 = QCameraParametersIntf::isHighQualityNoiseReductionMode(pQVar14);
    }
    else {
      uVar15 = 1;
    }
    iVar5 = QCameraParametersIntf::getVideoBatchSize(pQVar14);
    this_00 = (int *)operator_new(0x92c);
    if (iVar5 == 0) {
      iVar5 = 0;
      QCameraVideoMemory::QCameraVideoMemory
                ((QCameraVideoMemory *)this_00,*(FuncDef101 **)(this + 0x4c8),
                 *(void **)(this + 0x4d0),SUB41(uVar15,0),0);
LAB_000b3a80:
      QCameraParametersIntf::getStreamFormat(pQVar14,4,(cam_format_t *)&local_88);
      iVar6 = QCameraParametersIntf::isUBWCEnabled(pQVar14);
      uVar9 = count_leading_zeroes((cam_format_t)local_88 - 0x66);
      if (iVar6 != 0) {
        iVar6 = (uVar9 >> 5) << 0x1b;
      }
      QCameraVideoMemory::setVideoInfo((QCameraVideoMemory *)this_00,iVar6,(cam_format_t)local_88);
      goto LAB_000b37f8;
    }
    QCameraVideoMemory::QCameraVideoMemory
              ((QCameraVideoMemory *)this_00,*(FuncDef101 **)(this + 0x4c8),*(void **)(this + 0x4d0)
               ,false,2);
    iVar5 = QCameraParametersIntf::getVideoBatchSize(pQVar14);
    iVar5 = QCameraVideoMemory::allocateMeta((QCameraVideoMemory *)this_00,'\x03',iVar5,5);
    if (-1 < iVar5) goto LAB_000b3a80;
    goto LAB_000b3a58;
  case 5:
    this_00 = (int *)operator_new(0x720);
    pFVar7 = *(FuncDef100 **)(this + 0x4c8);
    pvVar8 = *(void **)(this + 0x4d0);
    pQVar4 = (QCamera2HardwareInterface *)0x0;
    if (iVar3 == 1) {
      pQVar4 = this + 0x934;
    }
    cVar17 = 5;
    break;
  default:
    goto switchD_000b363e_caseD_6;
  case 7:
    this_00 = *(int **)(this + 0x1df0);
    if (this_00 != (int *)0x0) {
      *(undefined4 *)(this + 0x1df0) = 0;
      bVar1 = *param_5;
      iVar3 = QCameraMemory::getCnt((QCameraMemory *)this_00);
      if (((0 < (int)((uint)bVar1 - iVar3)) &&
          (iVar3 = (**(code **)(*this_00 + 0x10))(this_00,(uint)bVar1 - iVar3 & 0xff,param_2),
          iVar3 != 0)) && (*(int *)(*(int *)(DAT_000b3ab0 + 0xb3790) + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000b3ab8 + 0xb37a8,0xdce,DAT_000b3ab4 + 0xb37a0);
      }
      uVar2 = QCameraMemory::getCnt((QCameraMemory *)this_00);
      *param_5 = uVar2;
      goto switchD_000b363e_caseD_6;
    }
    this_00 = (int *)operator_new(0x718);
    uVar15 = 1;
    QCameraMetadataStreamMemory::QCameraMetadataStreamMemory
              ((QCameraMetadataStreamMemory *)this_00,true);
    iVar5 = 0;
    goto LAB_000b37f8;
  case 9:
    *(int *)(this + 0x1be4) = param_4;
    *(int *)(this + 0x1be0) = param_3;
    goto switchD_000b363e_caseD_3;
  }
  goto LAB_000b37f0;
switchD_000b363e_caseD_3:
  this_00 = (int *)operator_new(0x720);
  pFVar7 = *(FuncDef100 **)(this + 0x4c8);
  pvVar8 = *(void **)(this + 0x4d0);
  pQVar4 = (QCamera2HardwareInterface *)0x0;
  cVar17 = param_1;
  if (iVar3 == 1) {
    pQVar4 = this + 0x934;
  }
LAB_000b37f0:
  uVar15 = 1;
  iVar5 = 0;
  QCameraStreamMemory::QCameraStreamMemory
            ((QCameraStreamMemory *)this_00,pFVar7,pvVar8,true,(QCameraMemoryPool *)pQVar4,cVar17,0)
  ;
LAB_000b37f8:
  QCameraMemory::setThrottle((QCameraMemory *)this_00,(MotMemThrottle *)(this + 0x1e28));
  if (*param_5 == '\0') {
    uVar10 = 0;
  }
  else {
    iVar5 = QCameraParametersIntf::isSecureMode((QCameraParametersIntf *)(this + 0x4ac));
    if (((param_1 == 8) && (iVar5 != 0)) &&
       (iVar5 = QCameraParametersIntf::isRdiMode((QCameraParametersIntf *)(this + 0x4ac)),
       iVar5 != 0)) {
      if (*(int *)(*(int *)(DAT_000b3abc + 0xb382e) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000b3ac4 + 0xb384e,0xe21,DAT_000b3ac0 + 0xb383e,*param_5,param_2
                           );
      }
      uVar2 = *param_5;
      uVar10 = 1;
      pcVar12 = *(code **)(*this_00 + 8);
    }
    else {
      uVar10 = 0;
      pcVar12 = *(code **)(*this_00 + 8);
      uVar2 = *param_5;
    }
    iVar5 = (*pcVar12)(this_00,uVar2,param_2,uVar10);
    if (iVar5 < 0) {
LAB_000b3a58:
      (**(code **)(*this_00 + 0x2c))(this_00);
      this_00 = (int *)0x0;
      goto switchD_000b363e_caseD_6;
    }
    uVar10 = QCameraMemory::getCnt((QCameraMemory *)this_00);
    *param_5 = (uchar)uVar10;
  }
  if (*(int *)(*(int *)(DAT_000b3ac8 + 0xb3892) + 0x28) != 0) {
    uVar9 = count_leading_zeroes(iVar3 + -1);
    mm_camera_debug_log(1,3,DAT_000b3ad0 + 0xb38ca,0xe2d,DAT_000b3acc + 0xb38ae,iVar5,param_1,uVar10
                        ,param_2,uVar15,uVar9 >> 5,this[0x1dfc]);
  }
switchD_000b363e_caseD_6:
  if (*piVar13 == local_28) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

