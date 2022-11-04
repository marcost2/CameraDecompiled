
/* qcamera::QCamera3HardwareInterface::getCamInfo(unsigned int, camera_info*) */

int qcamera::QCamera3HardwareInterface::getCamInfo(uint param_1,camera_info *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  pthread_mutex_t *__mutex;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  double dVar12;
  int *local_158 [68];
  undefined4 local_48;
  undefined local_44;
  int local_3c;
  
  piVar6 = *(int **)(DAT_00094204 + 0x93fae);
  local_3c = *piVar6;
  puVar7 = *(uint **)(DAT_00094208 + 0x93fbc);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_0009420c + 0x93fcc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00094210 + 0x93fdc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00094214 + 0x941e0);
    }
  }
  iVar8 = 0;
  local_44 = 0;
  local_48 = 0;
  local_158[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_158,(char *)(DAT_00094218 + 0x93ffe));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_158);
  __mutex = *(pthread_mutex_t **)(DAT_0009421c + 0x9400c);
  pthread_mutex_lock(__mutex);
  iVar5 = *(int *)(DAT_00094220 + 0x9401a);
  if (((*(int *)(iVar5 + param_1 * 4) != 0) || (iVar8 = initCapabilities(param_1), -1 < iVar8)) &&
     ((iVar4 = *(int *)(DAT_00094224 + 0x94036), *(int *)(iVar4 + param_1 * 4) != 0 ||
      (iVar8 = initStaticMetadata(param_1), -1 < iVar8)))) {
    uVar1 = *(undefined4 *)(*(int *)(iVar5 + param_1 * 4) + 4);
    switch(uVar1) {
    case 0:
    case 2:
      *(undefined4 *)param_2 = 0;
      break;
    case 1:
    case 3:
      *(undefined4 *)param_2 = 1;
      break;
    default:
      if (*(int *)(*(int *)(DAT_00094228 + 0x94070) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00094230 + 0x9408c,0x27aa,DAT_0009422c + 0x9407e,uVar1,param_1);
      }
      iVar8 = -1;
    }
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(iVar5 + param_1 * 4) + 0x854);
    *(undefined4 *)(param_2 + 8) = 0x304;
    uVar1 = *(undefined4 *)(iVar4 + param_1 * 4);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    iVar5 = *(int *)(iVar5 + param_1 * 4);
    if (*(uint *)(iVar5 + 0x274) == 0) {
      dVar12 = 0.0;
    }
    else {
      pfVar2 = (float *)(iVar5 + 0x27c);
      uVar3 = 0;
      fVar9 = DAT_00094200;
      do {
        fVar10 = *pfVar2;
        pfVar2 = pfVar2 + 4;
        uVar3 = uVar3 + 1;
        fVar9 = (float)((uint)(fVar10 != fVar9) * (int)fVar10 + (uint)(fVar10 == fVar9) * (int)fVar9
                       );
      } while (uVar3 < *(uint *)(iVar5 + 0x274));
      dVar12 = (double)fVar9;
    }
    iVar4 = *(int *)(iVar5 + 0x3420);
    iVar11 = *(int *)(iVar5 + 0x3424);
    uVar3 = *(uint *)(iVar5 + 0x4010);
    __floatundidf(uVar3,*(uint *)(iVar5 + 0x4014));
    dVar12 = (double)(float)(((double)(longlong)iVar4 * 3.0 * (double)(longlong)iVar11 * dVar12) /
                            (double)CONCAT44(extraout_r1,uVar3));
    dVar12 = (double)((ulonglong)(dVar12 != 1.0) * 0x3ff0000000000000 +
                     (ulonglong)(dVar12 == 1.0) * (longlong)dVar12) * DAT_000941f8;
    *(int *)(param_2 + 0x10) = SUB84(ROUND(dVar12),0);
    if (*(int *)(*(int *)(DAT_00094234 + 0x9415a) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0009423c + 0x9417a,0x27cb,DAT_00094238 + 0x9416c,param_1,
                          SUB84(ROUND(dVar12),0));
    }
  }
  pthread_mutex_unlock(__mutex);
  uVar1 = android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_158);
  if (local_158[0] != (int *)0x0) {
    uVar1 = android::RefBase::decStrong
                      ((void *)((int)local_158[0] + *(int *)(*local_158[0] + -0xc)));
  }
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_00094240 + 0x941a8) & 1) == 0) {
      uVar1 = atrace_setup(uVar1);
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00094244 + 0x941b6) + 1) << 0x1d) < 0) {
      uVar1 = atrace_end_body(uVar1);
    }
  }
  if (*piVar6 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return iVar8;
}

