
/* qcamera::QCameraParameters::updateViewAngles() */

void __thiscall qcamera::QCameraParameters::updateViewAngles(QCameraParameters *this)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  double dVar10;
  int in_stack_ffffff98;
  int in_stack_ffffff9c;
  undefined8 in_stack_ffffffa0;
  int local_4c;
  int iStack72;
  int local_44;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffa0 >> 0x20);
  piVar6 = *(int **)(DAT_000def68 + 0xded82);
  local_44 = *piVar6;
  android::CameraParameters::getPictureSize((CameraParameters *)this,&iStack72,&local_4c);
  iVar4 = *(int *)(*(int *)(this + 0x1d4) + 0x5d0);
  iVar3 = *(int *)(*(int *)(this + 0x1d4) + 0x5cc);
  iVar5 = *(int *)(DAT_000def6c + 0xdedaa);
  lVar1 = (longlong)iStack72;
  lVar2 = (longlong)iVar3;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    in_stack_ffffff98 = DAT_000def70 + 0xdedf0;
    uVar7 = mm_camera_debug_log(1,4,DAT_000def74 + 0xdedfe,0x776,in_stack_ffffff98,iStack72,local_4c
                               );
    in_stack_ffffff9c = iStack72;
    if (*(int *)(iVar5 + 0x2c) != 0) {
      in_stack_ffffff98 = DAT_000def78 + 0xdee10;
      uVar8 = mm_camera_debug_log(uVar7,1,4,DAT_000def7c + 0xdee1a,0x777,in_stack_ffffff98,iVar3,
                                  iVar4,uVar8);
      in_stack_ffffff9c = iVar3;
      if (*(int *)(iVar5 + 0x2c) != 0) {
        in_stack_ffffff98 = DAT_000def80 + 0xdee34;
        mm_camera_debug_log(uVar8,1,4,DAT_000def84 + 0xdee3c,0x779,in_stack_ffffff98,iVar3,
                            (double)lVar1 / (double)(longlong)local_4c,
                            (double)lVar2 / (double)(longlong)iVar4);
        in_stack_ffffff9c = iVar3;
      }
    }
  }
  if (*(int *)(iVar5 + 0x2c) != 0) {
    in_stack_ffffff98 = DAT_000def88 + 0xdee72;
    mm_camera_debug_log(1,4,DAT_000def8c + 0xdee7a,0x782);
  }
  tan((double)CONCAT44(in_stack_ffffff9c,in_stack_ffffff98));
  atan((double)CONCAT44(in_stack_ffffff9c,in_stack_ffffff98));
  tan((double)CONCAT44(in_stack_ffffff9c,in_stack_ffffff98));
  dVar10 = atan((double)CONCAT44(in_stack_ffffff9c,in_stack_ffffff98));
  fVar9 = (float)android::CameraParameters::setFloat
                           ((CameraParameters *)this,*(char **)(DAT_000def90 + 0xdeeee),
                            SUB84(dVar10,0));
  uVar8 = android::CameraParameters::setFloat
                    ((CameraParameters *)this,*(char **)(DAT_000def94 + 0xdef0a),fVar9);
  if (*(int *)(iVar5 + 0x28) != 0) {
    uVar8 = mm_camera_debug_log(uVar8,1,3,DAT_000def9c + 0xdef38,0x790,DAT_000def98 + 0xdef30);
  }
  if (*piVar6 == local_44) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

