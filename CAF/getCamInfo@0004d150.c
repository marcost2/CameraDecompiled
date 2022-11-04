
/* qcamera::QCamera3HardwareInterface::getCamInfo(unsigned int, camera_info*) */

int qcamera::QCamera3HardwareInterface::getCamInfo(uint param_1,camera_info *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  char *extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  pthread_mutex_t *__mutex;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  uint in_stack_ffffffb4;
  ScopedTraceDbg aSStack64 [12];
  int local_34;
  
  piVar7 = *(int **)(DAT_0004d33c + 0x4d164);
  local_34 = *piVar7;
  iVar1 = DAT_0004d340 + 0x4d172;
  iVar8 = 0;
  ScopedTraceDbg::ScopedTraceDbg(aSStack64,CONCAT44(in_stack_ffffffb4,iVar1),(char *)param_2);
  __mutex = *(pthread_mutex_t **)(DAT_0004d344 + 0x4d188);
  pthread_mutex_lock(__mutex);
  iVar5 = *(int *)(DAT_0004d348 + 0x4d196);
  if (((*(int *)(iVar5 + param_1 * 4) != 0) || (iVar8 = initCapabilities(param_1), -1 < iVar8)) &&
     ((iVar4 = *(int *)(DAT_0004d34c + 0x4d1b2), *(int *)(iVar4 + param_1 * 4) != 0 ||
      (iVar8 = initStaticMetadata(param_1), -1 < iVar8)))) {
    uVar2 = *(uint *)(*(int *)(iVar5 + param_1 * 4) + 4);
    switch(uVar2) {
    case 0:
    case 2:
      *(undefined4 *)param_2 = 0;
      break;
    case 1:
    case 3:
      *(undefined4 *)param_2 = 1;
      break;
    default:
      if (*(int *)(*(int *)(DAT_0004d350 + 0x4d1ec) + 0x20) != 0) {
        iVar1 = DAT_0004d354 + 0x4d1f6;
        mm_camera_debug_log();
        in_stack_ffffffb4 = uVar2;
      }
      iVar8 = -1;
    }
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(iVar5 + param_1 * 4) + 0x84c);
    *(undefined4 *)(param_2 + 8) = 0x304;
    uVar3 = *(undefined4 *)(iVar4 + param_1 * 4);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    iVar4 = *(int *)(iVar5 + param_1 * 4);
    if (*(int *)(iVar4 + 0x270) == 0) {
      dVar11 = 0.0;
    }
    else {
      iVar5 = *(int *)(iVar5 + param_1 * 4);
      uVar2 = 0;
      iVar6 = 0x278;
      fVar9 = DAT_0004d338;
      do {
        fVar10 = *(float *)(iVar4 + iVar6);
        iVar6 = iVar6 + 0x10;
        uVar2 = uVar2 + 1;
        fVar9 = (float)((uint)(fVar10 != fVar9) * (int)fVar10 + (uint)(fVar10 == fVar9) * (int)fVar9
                       );
        iVar4 = iVar5;
      } while (uVar2 < *(uint *)(iVar5 + 0x270));
      dVar11 = (double)fVar9;
    }
    iVar5 = *(int *)(iVar4 + 0x3410);
    iVar6 = *(int *)(iVar4 + 0x3414);
    uVar2 = *(uint *)(iVar4 + 0x3f18);
    __floatundidf(uVar2,*(uint *)(iVar4 + 0x3f1c));
    dVar11 = (double)(float)(((double)(longlong)iVar5 * 3.0 * (double)(longlong)iVar6 * dVar11) /
                            (double)CONCAT44(extraout_r1,uVar2));
    *(int *)(param_2 + 0x10) =
         SUB84(ROUND((double)((ulonglong)(dVar11 != 1.0) * 0x3ff0000000000000 +
                             (ulonglong)(dVar11 == 1.0) * (longlong)dVar11) * DAT_0004d330),0);
    if (*(int *)(*(int *)(DAT_0004d35c + 0x4d2e4) + 0x34) != 0) {
      iVar1 = DAT_0004d360 + 0x4d2f2;
      mm_camera_debug_log();
      in_stack_ffffffb4 = param_1;
    }
  }
  pthread_mutex_unlock(__mutex);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack64,CONCAT44(in_stack_ffffffb4,iVar1),extraout_r1_00);
  if (*piVar7 != local_34) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

