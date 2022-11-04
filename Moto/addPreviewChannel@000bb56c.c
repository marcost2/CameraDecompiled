
/* qcamera::QCamera2HardwareInterface::addPreviewChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addPreviewChannel(QCamera2HardwareInterface *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  FuncDef91 **ppFVar3;
  int iVar4;
  int iVar5;
  cam_stream_type_t cVar6;
  undefined4 uVar7;
  int *piVar8;
  QCameraParametersIntf *this_01;
  char acStack124 [92];
  int local_20;
  
  piVar8 = *(int **)(DAT_000bb774 + 0xbb57a);
  local_20 = *piVar8;
  if (*(int **)(this + 0x9bc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9bc) + 4))();
    *(undefined4 *)(this + 0x9bc) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  iVar1 = (**(code **)(*this_00 + 8))(this_00,0,0,0);
  if (iVar1 == 0) {
    iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,7,
                               *(FuncDef91 **)(DAT_000bb784 + 0xbb5e4),this);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_000bb788 + 0xbb5f4) + 0x20) != 0) {
        uVar7 = 0x21f9;
        iVar2 = DAT_000bb78c + 0xbb604;
        iVar5 = DAT_000bb790 + 0xbb60e;
        iVar4 = iVar1;
        goto LAB_000bb662;
      }
      goto LAB_000bb666;
    }
    this_01 = (QCameraParametersIntf *)(this + 0x4ac);
    iVar1 = QCameraParametersIntf::isRdiMode(this_01);
    if (iVar1 == 0) {
      iVar1 = QCameraParametersIntf::isNoDisplayMode(this_01);
      if (iVar1 != 0) {
        cVar6 = 1;
        ppFVar3 = (FuncDef91 **)(DAT_000bb798 + 0xbb63a);
        goto LAB_000bb638;
      }
      iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,1,
                                 *(FuncDef91 **)(DAT_000bb79c + 0xbb68a),this);
      property_get(DAT_000bb7a0 + 0xbb6a0,acStack124,DAT_000bb7a4 + 0xbb6a2);
      iVar4 = atoi(acStack124);
      if (iVar4 == 1) {
        QCameraChannel::setStreamSyncCB
                  ((QCameraChannel *)this_00,1,*(FuncDef103 **)(DAT_000bb7a8 + 0xbb6b6));
      }
    }
    else {
      cVar6 = 8;
      ppFVar3 = (FuncDef91 **)(DAT_000bb794 + 0xbb626);
LAB_000bb638:
      iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,cVar6,*ppFVar3,this);
    }
    if (iVar1 == 0) {
      iVar1 = QCameraParametersIntf::fdModeInVideo(this_01);
      if ((((iVar1 == 0) && (iVar1 = QCameraParametersIntf::getDcrf(this_01), iVar1 == 0)) &&
          (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_01), iVar1 != 0)) ||
         ((iVar1 = QCameraParametersIntf::isSecureMode(this_01), iVar1 != 0 ||
          (iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,0xb,(FuncDef91 *)0x0,this),
          iVar1 == 0)))) {
        property_get(DAT_000bb7c4 + 0xbb720,acStack124,DAT_000bb7c8 + 0xbb722);
        iVar1 = atoi(acStack124);
        if ((iVar1 < 1) ||
           (iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,8,
                                       *(FuncDef91 **)(DAT_000bb7cc + 0xbb73a),this), iVar1 == 0)) {
          iVar1 = 0;
          *(int **)(this + 0x9bc) = this_00;
          goto LAB_000bb66e;
        }
        if (*(int *)(*(int *)(DAT_000bb7d0 + 0xbb74a) + 0x20) != 0) {
          uVar7 = 0x2228;
          iVar2 = DAT_000bb7d8 + 0xbb760;
          iVar5 = DAT_000bb7d4 + 0xbb762;
          iVar4 = iVar5;
          goto LAB_000bb662;
        }
      }
      else if (*(int *)(*(int *)(DAT_000bb7b8 + 0xbb6f8) + 0x20) != 0) {
        uVar7 = 0x221c;
        iVar2 = DAT_000bb7bc + 0xbb70a;
        iVar5 = DAT_000bb7c0 + 0xbb714;
        iVar4 = iVar1;
        goto LAB_000bb662;
      }
    }
    else if (*(int *)(*(int *)(DAT_000bb7ac + 0xbb64a) + 0x20) != 0) {
      uVar7 = 0x2210;
      iVar2 = DAT_000bb7b0 + 0xbb65a;
      iVar5 = DAT_000bb7b4 + 0xbb664;
      iVar4 = iVar1;
      goto LAB_000bb662;
    }
  }
  else if (*(int *)(*(int *)(DAT_000bb778 + 0xbb5bc) + 0x20) != 0) {
    uVar7 = 0x21f0;
    iVar2 = DAT_000bb77c + 0xbb5ce;
    iVar5 = DAT_000bb780 + 0xbb5d8;
    iVar4 = iVar1;
LAB_000bb662:
    mm_camera_debug_log(1,1,iVar5,uVar7,iVar2,iVar4);
  }
LAB_000bb666:
  (**(code **)(*this_00 + 4))(this_00);
LAB_000bb66e:
  if (*piVar8 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

