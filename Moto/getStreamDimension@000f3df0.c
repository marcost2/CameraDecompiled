
/* qcamera::QCameraParameters::getStreamDimension(cam_stream_type_t, cam_dimension_t&) */

cam_stream_type_t __thiscall
qcamera::QCameraParameters::getStreamDimension
          (QCameraParameters *this,cam_stream_type_t param_1,cam_dimension_t *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  cam_stream_type_t cVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  undefined auStack188 [4];
  uint local_b8;
  uint uStack180;
  uint local_88;
  uint uStack132;
  char acStack128 [92];
  int local_24;
  
  piVar9 = *(int **)(DAT_000f40c0 + 0xf3e02);
  local_24 = *piVar9;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  switch(param_1) {
  case 1:
  case 2:
  case 5:
LAB_000f3e28:
    android::CameraParameters::getPreviewSize
              ((CameraParameters *)this,(int *)param_2,(int *)(param_2 + 4));
    break;
  case 3:
    if (this[0x213] == (QCameraParameters)0x0) {
      property_get(DAT_000f40c8 + 0xf3e48,acStack128,*(undefined4 *)(DAT_000f40c4 + 0xf3e3e));
      iVar6 = atoi(acStack128);
      if (*(int *)(*(int *)(DAT_000f40cc + 0xf3e58) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f40d4 + 0xf3e7e,0x3bda,DAT_000f40d0 + 0xf3e72,0 < iVar6);
      }
      if (0 < iVar6) {
        local_b8 = *(uint *)(this + 0x280);
        uStack180 = *(uint *)(this + 0x284);
        goto LAB_000f3ee4;
      }
LAB_000f404e:
      if (this[0x213] == (QCameraParameters)0x0) {
        android::CameraParameters::getPictureSize
                  ((CameraParameters *)this,(int *)param_2,(int *)(param_2 + 4));
        break;
      }
    }
    getLiveSnapshotSize(this,param_2);
    break;
  case 4:
    android::CameraParameters::getVideoSize
              ((CameraParameters *)this,(int *)param_2,(int *)(param_2 + 4));
    if ((*(int *)param_2 == -1) || (*(int *)(param_2 + 4) == -1)) goto LAB_000f3e28;
    break;
  default:
    if (*(int *)(*(int *)(DAT_000f410c + 0xf3eb0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f4114 + 0xf3eca,0x2c75,DAT_000f4110 + 0xf3ec0,param_1);
    }
    cVar10 = 0xffffffea;
    goto LAB_000f405e;
  case 7:
    uVar5 = 1;
    *(undefined ***)param_2 = &PTR_bufDone_00117af8;
LAB_000f3efe:
    *(undefined4 *)(param_2 + 4) = uVar5;
    break;
  case 8:
    local_b8 = *(uint *)(this + 0x278);
    uStack180 = *(uint *)(this + 0x27c);
LAB_000f3ee4:
    *(uint *)param_2 = local_b8;
    *(uint *)(param_2 + 4) = uStack180;
    break;
  case 9:
    if (this[0x213] == (QCameraParameters)0x0) {
      property_get(DAT_000f40dc + 0xf3f72,acStack128,*(undefined4 *)(DAT_000f40d8 + 0xf3f68));
      iVar6 = atoi(acStack128);
      if (*(int *)(*(int *)(DAT_000f40e0 + 0xf3f82) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f40e8 + 0xf3fa6,0x3bda,DAT_000f40e4 + 0xf3f9a,0 < iVar6);
      }
      if (0 < iVar6) goto LAB_000f404e;
    }
    if (this[0x18] != (QCameraParameters)0x0) {
      *(undefined4 *)param_2 = *(undefined4 *)(this + 0x1c);
      uVar5 = *(undefined4 *)(this + 0x20);
      goto LAB_000f3efe;
    }
    break;
  case 0xb:
    android::CameraParameters::getPreviewSize
              ((CameraParameters *)this,(int *)&local_88,(int *)&uStack132);
    uVar1 = *(ulonglong *)(this + 0x368);
    if (this[0x213] == (QCameraParameters)0x0) {
      uVar4 = false;
    }
    else {
      property_get(DAT_000f40f0 + 0xf3f28,acStack128,*(undefined4 *)(DAT_000f40ec + 0xf3f1e));
      uVar2 = atoi(acStack128);
      uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
      if (*(int *)(*(int *)(DAT_000f40f4 + 0xf3f3a) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000f40fc + 0xf3f56,0x3dbb,DAT_000f40f8 + 0xf3f4a,uVar2 & 0xff);
      }
      uVar2 = uVar2 & 0xff;
      uVar4 = (undefined)uVar2;
      if (uVar2 != 0) {
        uVar4 = true;
      }
    }
    puVar3 = auStack188;
    cVar10 = QCameraCommon::getAnalysisInfo
                       ((bool)((char)this + -0x30),(bool)uVar4,uVar1,(cam_analysis_info_t *)0x0);
    if (cVar10 == 0) {
      bVar12 = SBORROW4(local_88,local_b8);
      iVar6 = local_88 - local_b8;
      bVar11 = local_88 == local_b8;
      if ((int)local_88 <= (int)local_b8) {
        bVar12 = SBORROW4(uStack132,uStack180);
        iVar6 = uStack132 - uStack180;
        bVar11 = uStack132 == uStack180;
      }
      if (bVar11 || iVar6 < 0 != bVar12) {
        *(uint *)param_2 = local_88;
        *(uint *)(param_2 + 4) = uStack132;
        break;
      }
      dVar13 = (double)(longlong)(int)local_88 / (double)(longlong)(int)uStack132;
      if ((int)((uint)((double)(longlong)(int)local_b8 / (double)(longlong)(int)uStack180 < dVar13)
               << 0x1f) < 0) {
        uStack180 = SUB84(ROUND((double)(longlong)(int)local_b8 / dVar13),0);
      }
      else {
        local_b8 = SUB84(ROUND(dVar13 * (double)(longlong)(int)uStack180),0);
      }
      uStack180 = uStack180 & 0xfffffffe;
      local_b8 = local_b8 & 0xfffffffe;
      goto LAB_000f3ee4;
    }
    if (*(int *)(*(int *)(DAT_000f4100 + 0xf3fcc) + 0x20) == 0) goto LAB_000f4088;
    uVar5 = 1;
    uVar8 = 0x2c50;
    iVar6 = DAT_000f4104 + 0xf3fde;
    iVar7 = DAT_000f4108 + 0xf3fe8;
    param_1 = cVar10;
    goto LAB_000f4084;
  }
  cVar10 = 0;
LAB_000f405e:
  if (*(int *)(*(int *)(DAT_000f4118 + 0xf4064) + 0x2c) != 0) {
    puVar3 = *(undefined **)param_2;
    uVar8 = 0x2c7b;
    iVar6 = DAT_000f411c + 0xf4076;
    uVar5 = 4;
    iVar7 = DAT_000f4120 + 0xf4086;
LAB_000f4084:
    mm_camera_debug_log(1,uVar5,iVar7,uVar8,iVar6,param_1,puVar3);
  }
LAB_000f4088:
  if (*piVar9 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar10;
}

