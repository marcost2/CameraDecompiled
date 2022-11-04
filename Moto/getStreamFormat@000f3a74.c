
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraParameters::getStreamFormat(cam_stream_type_t, cam_format_t&) */

int __thiscall
qcamera::QCameraParameters::getStreamFormat
          (QCameraParameters *this,cam_stream_type_t param_1,cam_format_t *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  cam_format_t cVar3;
  undefined uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  undefined uStack188;
  char local_bb;
  int local_94;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_24;
  
  piVar6 = *(int **)(DAT_000f3d80 + 0xf3a86);
  local_24 = *piVar6;
  *param_2 = 0x7c;
  switch(param_1) {
  case 1:
    getStreamDimension(this,4,(cam_dimension_t *)&local_88);
    local_80 = 0;
    android::CameraParameters::getPreviewSize
              ((CameraParameters *)this,(int *)&local_80,(int *)((int)&local_80 + 4));
    if (*(int *)(*(int *)(DAT_000f3d84 + 0xf3acc) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f3d8c + 0xf3af0,0x2c7b,DAT_000f3d88 + 0xf3adc,1,(int)local_80,
                          local_80._4_4_);
    }
    if (((this[0x213] != (QCameraParameters)0x0) && (local_88 == (int)local_80)) &&
       ((local_84 == local_80._4_4_ && (*(int *)(this + 0x224) == 1))))
    goto switchD_000f3a96_caseD_4;
    cVar3 = *(cam_format_t *)(this + 0x224);
    break;
  case 2:
  case 5:
    goto switchD_000f3a96_caseD_2;
  case 3:
    if (*(int *)(this + 0x22c) == 5) {
      cVar3 = 5;
      break;
    }
    local_80 = 0;
    uStack120 = 0;
    uStack48 = 0;
    uStack44 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_34 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_70 = 0;
    uStack104 = 0;
    property_get(DAT_000f3dc0 + 0xf3c3e,&local_80,*(undefined4 *)(DAT_000f3dbc + 0xf3c38));
    iVar7 = atoi((char *)&local_80);
    cVar3 = 2;
    if (iVar7 == 1) {
      cVar3 = 6;
    }
    *param_2 = cVar3;
    goto switchD_000f3a96_caseD_6;
  case 4:
switchD_000f3a96_caseD_4:
    cVar3 = 7;
    break;
  default:
    goto switchD_000f3a96_caseD_6;
  case 8:
    if (((this[0x2ee] == (QCameraParameters)0x0) && (this[0x301] == (QCameraParameters)0x0)) &&
       (this[0x800] == (QCameraParameters)0x0)) {
      cVar3 = *(cam_format_t *)(this + 0x22c);
      if ((int)cVar3 < 8) {
        local_80 = 0;
        uStack120 = 0;
        uStack48 = 0;
        uStack44 = 0;
        local_40 = 0;
        uStack56 = 0;
        local_34 = 0;
        local_50 = 0;
        uStack72 = 0;
        local_60 = 0;
        uStack88 = 0;
        local_70 = 0;
        uStack104 = 0;
        property_get(DAT_000f3dc4 + 0xf3d48,&local_80,DAT_000f3dc8 + 0xf3d4a);
        cVar3 = atoi((char *)&local_80);
        *param_2 = cVar3;
        if (*(int *)(*(int *)(DAT_000f3dcc + 0xf3d5a) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f3dd4 + 0xf3d78,0x2ba1,DAT_000f3dd0 + 0xf3d6c,cVar3);
        }
        goto switchD_000f3a96_caseD_6;
      }
    }
    else {
      iVar7 = *(int *)(this + 0x1d4);
      iVar5 = 0x3028;
LAB_000f3b40:
      cVar3 = *(cam_format_t *)(iVar7 + iVar5);
    }
    break;
  case 9:
    if (this[0x800] != (QCameraParameters)0x0) {
      iVar7 = *(int *)(this + 0x1d4);
      switch(*(undefined4 *)(iVar7 + 0x33e0)) {
      case 0:
        cVar3 = 0x46;
        break;
      case 1:
        cVar3 = 0x45;
        break;
      case 2:
        cVar3 = 0x44;
        break;
      case 3:
        cVar3 = 0x47;
        break;
      default:
        if (*(int *)(*(int *)(DAT_000f3dd8 + 0xf3caa) + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000f3de0 + 0xf3cc2,0x2baf,DAT_000f3ddc + 0xf3cba);
          iVar7 = *(int *)(this + 0x1d4);
        }
        iVar5 = 0x26f4;
        goto LAB_000f3b40;
      }
      break;
    }
    goto switchD_000f3a96_caseD_6;
  case 0xb:
    uVar1 = *(ulonglong *)(this + 0x368);
    if (this[0x213] == (QCameraParameters)0x0) {
      uVar4 = false;
    }
    else {
      property_get(DAT_000f3d94 + 0xf3b84,&local_80,*(undefined4 *)(DAT_000f3d90 + 0xf3b7a));
      uVar2 = atoi((char *)&local_80);
      uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
      if (*(int *)(*(int *)(DAT_000f3d98 + 0xf3b96) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000f3da0 + 0xf3bb2,0x3dbb,DAT_000f3d9c + 0xf3ba6,uVar2 & 0xff);
      }
      uVar2 = uVar2 & 0xff;
      uVar4 = (undefined)uVar2;
      if (uVar2 != 0) {
        uVar4 = true;
      }
    }
    puVar8 = &uStack188;
    iVar7 = QCameraCommon::getAnalysisInfo
                      ((bool)((char)this + -0x30),(bool)uVar4,uVar1,(cam_analysis_info_t *)0x0);
    if (iVar7 != 0) {
      if (*(int *)(*(int *)(DAT_000f3da4 + 0xf3c70) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f3dac + 0xf3c8c,0x2b60,DAT_000f3da8 + 0xf3c82,iVar7,puVar8);
      }
      goto LAB_000f3bec;
    }
    if (local_bb != '\0') {
      if (local_94 == 0x65) {
        cVar3 = 0x65;
        break;
      }
      if (*(int *)(*(int *)(DAT_000f3db0 + 0xf3ce0) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000f3db8 + 0xf3cfe,0x2b6a,DAT_000f3db4 + 0xf3cf2,local_94,puVar8
                           );
      }
    }
    goto switchD_000f3a96_caseD_2;
  }
  goto LAB_000f3bc2;
switchD_000f3a96_caseD_2:
  cVar3 = *(cam_format_t *)(this + 0x228);
LAB_000f3bc2:
  *param_2 = cVar3;
switchD_000f3a96_caseD_6:
  if (*(int *)(*(int *)(DAT_000f3de4 + 0xf3bca) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f3dec + 0xf3be8,0x2bba,DAT_000f3de8 + 0xf3bda,param_1,*param_2);
  }
  iVar7 = 0;
LAB_000f3bec:
  if (*piVar6 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

