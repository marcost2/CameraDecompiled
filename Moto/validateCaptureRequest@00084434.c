
/* qcamera::QCamera3HardwareInterface::validateCaptureRequest(camera3_capture_request*,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>&) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateCaptureRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,List *param_2)

{
  uint uVar1;
  List *pLVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  CameraMetadata aCStack32 [8];
  int local_18;
  
  piVar7 = *(int **)(DAT_00084680 + 0x84444);
  local_18 = *piVar7;
  pLVar2 = param_2;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack32);
  if (param_1 == (camera3_capture_request *)0x0) {
    if (*(int *)(*(int *)(DAT_00084684 + 0x844b0) + 0x20) != 0) {
      uVar5 = 0xb7e;
      iVar3 = DAT_00084688 + 0x844c0;
      iVar4 = DAT_0008468c + 0x844c8;
      goto LAB_00084516;
    }
  }
  else if ((*(int *)(param_1 + 4) != 0) || (*(int *)(this + 0x117fd8) != 3)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 != 0) {
      pLVar2 = *(List **)(param_1 + 0x10);
    }
    if (uVar1 == 0 || pLVar2 == (List *)0x0) {
      iVar3 = *(int *)(param_2 + 4);
      iVar4 = *(int *)(iVar3 + 0xc);
      if (iVar4 == iVar3) {
        if (*(int *)(*(int *)(DAT_00084694 + 0x844fc) + 0x20) != 0) {
          uVar5 = 0xb8b;
          iVar4 = DAT_00084698 + 0x8450c;
          iVar3 = DAT_0008469c + 0x8450e;
          goto LAB_00084516;
        }
        goto LAB_0008451a;
      }
      do {
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (iVar3 != iVar4);
    }
    if (uVar1 < 8) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
LAB_00084566:
        if ((int)uVar1 < 1) {
          uVar5 = 0;
        }
        else {
          piVar6 = *(int **)(param_1 + 0x10);
          iVar3 = 0;
          uVar5 = 0;
          do {
            if (*(int *)(*piVar6 + 0x18) == 0) {
              if (*(int *)(*(int *)(DAT_000846cc + 0x845a0) + 0x20) == 0) goto LAB_0008451a;
              uVar5 = 0xbad;
              iVar3 = DAT_000846d0 + 0x845b0;
              iVar4 = DAT_000846d4 + 0x845be;
              goto LAB_00084516;
            }
            if (piVar6[2] != 0) {
              if (*(int *)(*(int *)(DAT_000846d8 + 0x845c4) + 0x20) == 0) goto LAB_0008451a;
              uVar5 = 0xbb2;
              iVar3 = DAT_000846dc + 0x845d4;
              iVar4 = DAT_000846e0 + 0x845e2;
              goto LAB_00084516;
            }
            if (piVar6[4] != -1) {
              if (*(int *)(*(int *)(DAT_000846e4 + 0x845e8) + 0x20) == 0) goto LAB_0008451a;
              uVar5 = 2999;
              iVar3 = DAT_000846e8 + 0x845f8;
              iVar4 = DAT_000846ec + 0x84606;
              goto LAB_00084516;
            }
            if ((int *)piVar6[1] == (int *)0x0) {
              if (*(int *)(*(int *)(DAT_000846f0 + 0x8460c) + 0x20) == 0) goto LAB_0008451a;
              uVar5 = 0xbbc;
              iVar3 = DAT_000846f4 + 0x8461e;
              iVar4 = DAT_000846f8 + 0x8462c;
              goto LAB_00084516;
            }
            if (*(int *)piVar6[1] == 0) {
              if (*(int *)(*(int *)(DAT_000846fc + 0x84632) + 0x20) == 0) goto LAB_0008451a;
              uVar5 = 0xbc1;
              iVar3 = DAT_00084700 + 0x84644;
              iVar4 = DAT_00084704 + 0x84652;
              goto LAB_00084516;
            }
            piVar6 = piVar6 + 5;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar1);
        }
        goto LAB_0008451e;
      }
      if (*(int *)(iVar3 + 8) == 0) {
        if (*(int *)(iVar3 + 0x10) == -1) {
          if (*(int *)(iVar3 + 4) != 0) goto LAB_00084566;
          if (*(int *)(*(int *)(DAT_000846c0 + 0x84658) + 0x20) != 0) {
            uVar5 = 0xba1;
            iVar3 = DAT_000846c4 + 0x8466c;
            iVar4 = DAT_000846c8 + 0x8467a;
            goto LAB_00084516;
          }
        }
        else if (*(int *)(*(int *)(DAT_000846b4 + 0x84540) + 0x20) != 0) {
          uVar5 = 0xb9c;
          iVar3 = DAT_000846b8 + 0x84552;
          iVar4 = DAT_000846bc + 0x84560;
          goto LAB_00084516;
        }
      }
      else if (*(int *)(*(int *)(DAT_000846a8 + 0x844d8) + 0x20) != 0) {
        uVar5 = 0xb97;
        iVar3 = DAT_000846ac + 0x844e8;
        iVar4 = DAT_000846b0 + 0x844f6;
LAB_00084516:
        mm_camera_debug_log(1,1,iVar4,uVar5,iVar3);
      }
    }
    else if (*(int *)(*(int *)(DAT_00084690 + 0x8448a) + 0x20) != 0) {
      uVar5 = 0xb90;
      iVar3 = DAT_000846a0 + 0x8449c;
      iVar4 = DAT_000846a4 + 0x844aa;
      goto LAB_00084516;
    }
  }
LAB_0008451a:
  uVar5 = 0xffffffea;
LAB_0008451e:
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack32);
  if (*piVar7 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

