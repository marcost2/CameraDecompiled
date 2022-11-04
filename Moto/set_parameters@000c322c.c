
/* qcamera::QCameraMuxer::set_parameters(camera_device*, char const*) */

int qcamera::QCameraMuxer::set_parameters(camera_device *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar8 = *(int *)(DAT_000c35b8 + 0xc323c);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c35c0 + 0xc3258,0x571,DAT_000c35bc + 0xc3250);
  }
  piVar9 = *(int **)(DAT_000c35c4 + 0xc3260);
  if (*piVar9 == 0) {
    if (*(int *)(iVar8 + 0x20) == 0) {
      return -0x13;
    }
    uVar4 = 0x572;
    iVar8 = DAT_000c3614 + 0xc333a;
    iVar10 = DAT_000c3618 + 0xc3342;
  }
  else if ((param_1 == (camera_device *)0x0) || (iVar10 = *(int *)(param_1 + 0x44), iVar10 == 0)) {
    if (*(int *)(iVar8 + 0x20) == 0) {
      return -0x13;
    }
    uVar4 = 0x577;
    iVar8 = DAT_000c361c + 0xc331c;
    iVar10 = DAT_000c3620 + 0xc3324;
  }
  else {
    if (*(int *)(iVar10 + 0x54) == 0) goto LAB_000c346c;
    iVar3 = *(int *)(*piVar9 + 0x2c);
    iVar1 = *(int *)(iVar10 + 0x5c);
    if (iVar3 + iVar1 * 0x38 != 0) {
      uVar7 = 0;
      iVar6 = 0x18;
      do {
        iVar3 = iVar3 + iVar1 * 0x38;
        iVar1 = *(int *)(iVar3 + 0x30);
        if (iVar1 == 0) {
          if (*(int *)(iVar8 + 0x20) == 0) {
            return -0x13;
          }
          uVar4 = 0x57e;
          iVar8 = DAT_000c362c + 0xc3360;
          iVar10 = DAT_000c3630 + 0xc3368;
          goto LAB_000c3340;
        }
        iVar3 = QCamera2HardwareInterface::set_parameters(*(camera_device **)(iVar3 + 0x34),param_2)
        ;
        if (iVar3 != 0) {
          if (*(int *)(iVar8 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000c3638 + 0xc3388,0x582,DAT_000c3634 + 0xc3380);
            return iVar3;
          }
          return iVar3;
        }
        uVar2 = (uint)*(byte *)(iVar1 + 0x1e0c);
        if (uVar2 != 0) {
          uVar2 = 1;
        }
        uVar7 = uVar7 | uVar2;
        uVar2 = *(uint *)(iVar10 + 0x54);
        if (uVar2 <= iVar6 - 0x17U) {
          if ((uVar7 & 1) == 0) {
            uVar7 = 1;
            goto joined_r0x000c3402;
          }
          if (uVar2 == 0) goto LAB_000c346c;
          uVar5 = 0;
          iVar1 = DAT_000c363c + 0xc33a0;
          iVar3 = DAT_000c3640 + 0xc33a6;
          goto LAB_000c33a4;
        }
        iVar1 = *(int *)(iVar10 + iVar6 * 4);
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(*piVar9 + 0x2c);
      } while (iVar3 + iVar1 * 0x38 != 0);
    }
    if (*(int *)(iVar8 + 0x20) == 0) {
      return -0x13;
    }
    uVar4 = 0x57b;
    iVar8 = DAT_000c3624 + 0xc32fe;
    iVar10 = DAT_000c3628 + 0xc3306;
  }
LAB_000c3340:
  mm_camera_debug_log(1,1,iVar10,uVar4,iVar8);
  return -0x13;
  while( true ) {
    if (*(int *)(iVar8 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,iVar3,0x591,iVar1,uVar5);
    }
    iVar6 = QCamera2HardwareInterface::stop_after_set_params(*(camera_device **)(iVar6 + 0x34));
    if (iVar6 != 0) {
      if (*(int *)(iVar8 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c3658 + 0xc359a,0x594,DAT_000c3654 + 0xc3590,iVar6);
        return iVar6;
      }
      return iVar6;
    }
    uVar2 = *(uint *)(iVar10 + 0x54);
    uVar5 = uVar5 + 1;
    if (uVar2 <= uVar5) break;
LAB_000c33a4:
    iVar6 = *(int *)(*piVar9 + 0x2c) + *(int *)(iVar10 + 0x5c + uVar5 * 4) * 0x38;
    if (iVar6 == 0) {
      if (*(int *)(iVar8 + 0x20) == 0) {
        return -0x13;
      }
      uVar4 = 0x58c;
      iVar8 = DAT_000c3644 + 0xc355a;
      iVar10 = DAT_000c3648 + 0xc3562;
      goto LAB_000c3340;
    }
    if (*(int *)(iVar6 + 0x30) == 0) {
      if (*(int *)(iVar8 + 0x20) == 0) {
        return -0x13;
      }
      uVar4 = 0x58f;
      iVar8 = DAT_000c364c + 0xc3574;
      iVar10 = DAT_000c3650 + 0xc357c;
      goto LAB_000c3340;
    }
  }
  uVar7 = uVar7 ^ 1;
joined_r0x000c3402:
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    iVar1 = DAT_000c3660 + 0xc3414;
    iVar3 = DAT_000c365c + 0xc3416;
    do {
      iVar6 = *(int *)(*piVar9 + 0x2c) + *(int *)(iVar10 + 0x5c + uVar2 * 4) * 0x38;
      if (iVar6 == 0) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          return -0x13;
        }
        uVar4 = 0x59c;
        iVar8 = DAT_000c3664 + 0xc34fe;
        iVar10 = DAT_000c3668 + 0xc3506;
        goto LAB_000c3340;
      }
      if (*(int *)(iVar6 + 0x30) == 0) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          return -0x13;
        }
        uVar4 = 0x59f;
        iVar8 = DAT_000c366c + 0xc351a;
        iVar10 = DAT_000c3670 + 0xc3522;
        goto LAB_000c3340;
      }
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,iVar1,0x5a1,iVar3,uVar2);
      }
      iVar6 = QCamera2HardwareInterface::commit_params(*(camera_device **)(iVar6 + 0x34));
      if (iVar6 != 0) {
        if (*(int *)(iVar8 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c3678 + 0xc3542,0x5a4,DAT_000c3674 + 0xc3538,iVar6);
          return iVar6;
        }
        return iVar6;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(iVar10 + 0x54));
    uVar2 = count_leading_zeroes(*(uint *)(iVar10 + 0x54));
    uVar2 = uVar2 >> 5;
  }
  if (((uVar2 | uVar7) & 1) == 0) {
    uVar7 = 0;
    iVar1 = DAT_000c367c + 0xc349a;
    iVar3 = DAT_000c3680 + 0xc349c;
    do {
      iVar6 = *(int *)(*piVar9 + 0x2c) + *(int *)(iVar10 + 0x5c + uVar7 * 4) * 0x38;
      if (iVar6 == 0) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          return -0x13;
        }
        uVar4 = 0x5ac;
        iVar8 = DAT_000c3684 + 0xc35b0;
        iVar10 = (int)&DAT_000c35b8 + DAT_000c3688;
        goto LAB_000c3340;
      }
      if (*(int *)(iVar6 + 0x30) == 0) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          return -0x13;
        }
        uVar4 = 0x5af;
        iVar8 = DAT_000c368c + 0xc35da;
        iVar10 = DAT_000c3690 + 0xc35e2;
        goto LAB_000c3340;
      }
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,iVar3,0x5b1,iVar1,uVar7);
      }
      iVar6 = QCamera2HardwareInterface::restart_after_set_params(*(camera_device **)(iVar6 + 0x34))
      ;
      if (iVar6 != 0) {
        if (*(int *)(iVar8 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c3698 + 0xc360e,0x5b4,DAT_000c3694 + 0xc3604,iVar6);
          return iVar6;
        }
        return iVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar10 + 0x54));
  }
LAB_000c346c:
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c36a0 + 0xc3486,0x5ba,DAT_000c369c + 0xc347e);
  }
  return 0;
}

