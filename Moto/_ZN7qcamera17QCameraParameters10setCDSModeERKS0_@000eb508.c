
/* WARNING: Could not reconcile some variable overlaps */

void _ZN7qcamera17QCameraParameters10setCDSModeERKS0_(QCameraParameters *param_1,char *param_2)

{
  char *pcVar1;
  char *__s2;
  char *__s1;
  char *__s2_00;
  int iVar2;
  pthread_t pVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  void *__s1_00;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 uStack128;
  undefined8 uStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined8 uStack44;
  int iStack36;
  
  piVar11 = *(int **)(DAT_000eb8c0 + 0xeb518);
  iStack36 = *piVar11;
  pcVar7 = *(char **)(DAT_000eb8c4 + 0xeb526);
  pcVar1 = (char *)android::CameraParameters::get(param_2);
  __s2 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar10 = *(char **)(DAT_000eb8c8 + 0xeb540);
  __s1 = (char *)android::CameraParameters::get(param_2);
  __s2_00 = (char *)android::CameraParameters::get((char *)param_1);
  if (param_1[0x214] == (QCameraParameters)0x0) {
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0;
      uStack120 = 0;
      uStack48 = 0;
      uStack44 = 0;
      uStack64 = 0;
      uStack56 = 0;
      uStack52 = 0;
      uStack80 = 0;
      uStack72 = 0;
      uStack96 = 0;
      uStack88 = 0;
      uStack112 = 0;
      uStack104 = 0;
      pcVar1 = *(char **)(DAT_000eb914 + 0xeb714);
      property_get(DAT_000eb918 + 0xeb71a,&uStack128,pcVar1);
      if ((int)uStack128 == 0x66666f) {
        iVar2 = 0;
      }
      else {
        iVar2 = memcmp(pcVar1,&uStack128,3);
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = memcmp(*(void **)(DAT_000eb91c + 0xeb746),&uStack128,5);
          if (iVar2 != 0) {
            if (*(int *)(*(int *)(DAT_000eb920 + 0xeb756) + 0x20) != 0) {
              uVar6 = 0x231b;
              iVar2 = DAT_000eb924 + 0xeb76c;
              uVar12 = 0xfffffffe;
              puVar5 = &LAB_000eb778 + DAT_000eb928;
              goto LAB_000ebb48;
            }
            goto LAB_000ebb4c;
          }
          iVar2 = 2;
        }
      }
      qcamera::QCameraParameters::updateParamEntry(param_1,pcVar7,(char *)&uStack128);
      iVar8 = *(int *)(param_1 + 0x1e0);
      if (iVar8 == 0) {
        uVar12 = 0;
      }
      else {
        if ((*(int *)(param_1 + 0xd30) == 1) &&
           (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(param_1 + 0xd34))) {
          iVar9 = *(int *)(DAT_000ebc20 + 0xeba84);
          iVar2 = *(int *)(iVar9 + iVar2 * 8 + 4);
          *(int *)("No memory for camera_cmd_t" + iVar8 + 0x19) = iVar2;
          *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x5b) = 1;
          iVar8 = *(int *)(DAT_000ebc24 + 0xebaa2);
          if (*(int *)(iVar8 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000ebc2c + 0xebabc,0x230f,DAT_000ebc28 + 0xebab2,iVar2);
          }
          *(int *)(param_1 + 900) = iVar2;
          if (__s2 == (char *)0x0) {
LAB_000ebaf2:
            iVar9 = -2;
            if (iVar2 != -2) {
LAB_000ebb74:
              if (*(int *)(iVar8 + 0x34) != 0) {
                mm_camera_debug_log(1,6,DAT_000ebc38 + 0xebb90,0x2315,DAT_000ebc34 + 0xebb82,iVar9,
                                    iVar2);
              }
              param_1[0x230] = (QCameraParameters)0x1;
              uVar12 = 0;
              goto LAB_000ebb50;
            }
          }
          else {
            iVar4 = strcmp(*(char **)(DAT_000ebc30 + 0xebad0),__s2);
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = strcmp(pcVar1,__s2);
              if (iVar4 == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = strcmp(*(char **)(DAT_000ebc3c + 0xebaec),__s2);
                if (iVar4 != 0) goto LAB_000ebaf2;
                iVar4 = 2;
              }
            }
            iVar9 = *(int *)(iVar9 + iVar4 * 8 + 4);
            if (iVar9 != iVar2) goto LAB_000ebb74;
          }
LAB_000ebafa:
          uVar12 = 0;
          goto LAB_000ebb50;
        }
        qcamera::MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
        uVar12 = *(undefined4 *)(param_1 + 0x1e0);
      }
      __android_log_print(6,DAT_000ebc08 + 0xebb26,DAT_000ebc0c + 0xebb28,DAT_000ebc10 + 0xebb2a,
                          0x230b,uVar12,0x5b);
      if (*(int *)(*(int *)(DAT_000ebc14 + 0xebb32) + 0x20) != 0) {
        uVar6 = 0x230c;
        iVar2 = DAT_000ebc18 + 0xebb42;
        puVar5 = (undefined *)(DAT_000ebc1c + 0xebb4a);
        goto LAB_000ebb48;
      }
    }
    else {
      if ((__s2 != (char *)0x0) && (iVar2 = strcmp(pcVar1,__s2), iVar2 == 0)) goto LAB_000ebafa;
      iVar2 = strcmp(*(char **)(DAT_000eb8e4 + 0xeb5ec),pcVar1);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000eb8e8 + 0xeb5fe),pcVar1);
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000eb8ec + 0xeb610),pcVar1);
          if (iVar2 != 0) {
            if (*(int *)(*(int *)(DAT_000eb8f0 + 0xeb620) + 0x20) != 0) {
              uVar6 = 0x22ff;
              iVar2 = DAT_000eb8f4 + 0xeb636;
              uVar12 = 0xfffffffe;
              puVar5 = &LAB_000eb642 + DAT_000eb8f8;
              goto LAB_000ebb48;
            }
            goto LAB_000ebb4c;
          }
          iVar2 = 2;
        }
      }
      qcamera::QCameraParameters::updateParamEntry(param_1,pcVar7,pcVar1);
      iVar8 = *(int *)(param_1 + 0x1e0);
      if (iVar8 == 0) {
        uVar12 = 0;
      }
      else {
        if ((*(int *)(param_1 + 0xd30) == 1) &&
           (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(param_1 + 0xd34))) {
          uVar12 = *(undefined4 *)(*(int *)(DAT_000ebbf8 + 0xeb9bc) + iVar2 * 8 + 4);
          *(undefined4 *)("No memory for camera_cmd_t" + iVar8 + 0x19) = uVar12;
          *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x5b) = 1;
          if (*(int *)(*(int *)(DAT_000ebbfc + 0xeb9dc) + 0x2c) != 0) {
            uVar6 = 0x22fa;
            iVar2 = DAT_000ebc00 + 0xeb9ec;
            puVar5 = (undefined *)(DAT_000ebc04 + 0xeb9f6);
            goto LAB_000eb9f4;
          }
          goto LAB_000eb9f8;
        }
        qcamera::MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
        uVar12 = *(undefined4 *)(param_1 + 0x1e0);
      }
      __android_log_print(6,DAT_000ebbe0 + 0xeba2c,DAT_000ebbe4 + 0xeba2e,DAT_000ebbe8 + 0xeba30,
                          0x22f6,uVar12,0x5b);
      if (*(int *)(*(int *)(DAT_000ebbec + 0xeba38) + 0x20) != 0) {
        uVar6 = 0x22f7;
        iVar2 = DAT_000ebbf0 + 0xeba4c;
        puVar5 = &LAB_000eba54 + DAT_000ebbf4;
        goto LAB_000ebb48;
      }
    }
  }
  else if (__s1 == (char *)0x0) {
    uStack128 = 0;
    uStack120 = 0;
    uStack48 = 0;
    uStack44 = 0;
    uStack64 = 0;
    uStack56 = 0;
    uStack52 = 0;
    uStack80 = 0;
    uStack72 = 0;
    uStack96 = 0;
    uStack88 = 0;
    uStack112 = 0;
    uStack104 = 0;
    __s1_00 = *(void **)(DAT_000eb8fc + 0xeb67a);
    property_get(DAT_000eb900 + 0xeb680,&uStack128,__s1_00);
    if ((int)uStack128 == 0x66666f) {
      iVar2 = 0;
    }
    else {
      iVar2 = memcmp(__s1_00,&uStack128,3);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = memcmp(*(void **)(DAT_000eb904 + 0xeb6aa),&uStack128,5);
        if (iVar2 != 0) {
          if (*(int *)(*(int *)(DAT_000eb908 + 0xeb6ba) + 0x20) == 0) goto LAB_000ebb4c;
          uVar6 = 0x22eb;
          iVar2 = DAT_000eb90c + 0xeb6d0;
          uVar12 = 0xfffffffe;
          puVar5 = &LAB_000eb6dc + DAT_000eb910;
          goto LAB_000ebb48;
        }
        iVar2 = 2;
      }
    }
    qcamera::QCameraParameters::updateParamEntry(param_1,pcVar10,(char *)&uStack128);
    iVar8 = *(int *)(param_1 + 0x1e0);
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(param_1 + 0xd34))) {
        uVar12 = *(undefined4 *)(*(int *)(DAT_000ebbd0 + 0xeb87e) + iVar2 * 8 + 4);
        *(undefined4 *)("No memory for camera_cmd_t" + iVar8 + 0x19) = uVar12;
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x5b) = 1;
        if (*(int *)(*(int *)(DAT_000ebbd4 + 0xeb89c) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000ebbdc + 0xeb8ba,0x22e7,DAT_000ebbd8 + 0xeb8b0,uVar12);
        }
LAB_000eb9fc:
        *(undefined4 *)(param_1 + 900) = uVar12;
        uVar12 = 0;
        goto LAB_000ebb50;
      }
      qcamera::MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
      uVar12 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000ebbb8 + 0xeb964,DAT_000ebbbc + 0xeb966,DAT_000ebbc0 + 0xeb968,
                        0x22e3,uVar12,0x5b);
    if (*(int *)(*(int *)(DAT_000ebbc4 + 0xeb970) + 0x20) != 0) {
      uVar6 = 0x22e4;
      iVar2 = DAT_000ebbc8 + 0xeb984;
      puVar5 = &LAB_000eb98c + DAT_000ebbcc;
LAB_000ebb48:
      mm_camera_debug_log(1,1,puVar5,uVar6,iVar2,uVar12);
    }
  }
  else {
    if ((__s2_00 != (char *)0x0) && (iVar2 = strcmp(__s1,__s2_00), iVar2 == 0)) goto LAB_000ebafa;
    iVar2 = strcmp(*(char **)(DAT_000eb8cc + 0xeb574),__s1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000eb8d0 + 0xeb586),__s1);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000eb8d4 + 0xeb598),__s1);
        if (iVar2 != 0) {
          if (*(int *)(*(int *)(DAT_000eb8d8 + 0xeb5a8) + 0x20) != 0) {
            uVar6 = 0x22d7;
            iVar2 = DAT_000eb8dc + 0xeb5be;
            uVar12 = 0xfffffffe;
            puVar5 = &LAB_000eb5ca + DAT_000eb8e0;
            goto LAB_000ebb48;
          }
          goto LAB_000ebb4c;
        }
        iVar2 = 2;
      }
    }
    qcamera::QCameraParameters::updateParamEntry(param_1,pcVar10,__s1);
    iVar8 = *(int *)(param_1 + 0x1e0);
    if (iVar8 == 0) {
      uVar12 = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(param_1 + 0xd34))) {
        uVar12 = *(undefined4 *)(*(int *)(DAT_000eb92c + 0xeb7bc) + iVar2 * 8 + 4);
        *(undefined4 *)("No memory for camera_cmd_t" + iVar8 + 0x19) = uVar12;
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0x5b) = 1;
        if (*(int *)(*(int *)(DAT_000eb930 + 0xeb7dc) + 0x2c) != 0) {
          uVar6 = 0x22d2;
          iVar2 = DAT_000eb934 + 0xeb7f0;
          puVar5 = &LAB_000eb7fa + DAT_000eb938;
LAB_000eb9f4:
          mm_camera_debug_log(1,4,puVar5,uVar6,iVar2,uVar12);
        }
LAB_000eb9f8:
        param_1[0x230] = (QCameraParameters)0x1;
        goto LAB_000eb9fc;
      }
      qcamera::MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
      uVar12 = *(undefined4 *)(param_1 + 0x1e0);
    }
    __android_log_print(6,DAT_000ebba0 + 0xeb822,DAT_000ebba4 + 0xeb824,DAT_000ebba8 + 0xeb826,
                        0x22ce,uVar12,0x5b);
    if (*(int *)(*(int *)(DAT_000ebbac + 0xeb82e) + 0x20) != 0) {
      uVar6 = 0x22cf;
      iVar2 = DAT_000ebbb0 + 0xeb842;
      puVar5 = &LAB_000eb84a + DAT_000ebbb4;
      goto LAB_000ebb48;
    }
  }
LAB_000ebb4c:
  uVar12 = 0xffffffea;
LAB_000ebb50:
  if (*piVar11 == iStack36) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

