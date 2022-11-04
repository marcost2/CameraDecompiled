
/* qcamera::QCamera3HardwareInterface::flushPerf() */

int __thiscall qcamera::QCamera3HardwareInterface::flushPerf(QCamera3HardwareInterface *this)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  pthread_mutex_t *__mutex;
  timespec local_30;
  int local_28;
  
  piVar7 = *(int **)(DAT_000908fc + 0x905ee);
  local_28 = *piVar7;
  puVar10 = *(uint **)(DAT_00090900 + 0x905f8);
  if (1 < *puVar10) {
    if ((**(byte **)(DAT_00090904 + 0x90608) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00090908 + 0x90618) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009090c + 0x908e6);
    }
  }
  __mutex = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_lock(__mutex);
  this[0x1aa] = (QCamera3HardwareInterface)0x1;
  iVar2 = 0;
  for (iVar4 = *(int *)(*(int *)(this + 0x270) + 0x1c); iVar4 != *(int *)(this + 0x270);
      iVar4 = *(int *)(iVar4 + 0x1c)) {
    iVar5 = 0;
    for (iVar8 = *(int *)(*(int *)(iVar4 + 0x14) + 0x10); iVar8 != *(int *)(iVar4 + 0x14);
        iVar8 = *(int *)(iVar8 + 0x10)) {
      iVar5 = iVar5 + 1;
    }
    iVar2 = iVar2 + iVar5;
  }
  *(int *)(this + 0x268) = iVar2;
  iVar4 = *(int *)(DAT_00090910 + 0x90660);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00090918 + 0x9067e,0x17d7,DAT_00090914 + 0x90672,iVar2);
  }
  iVar2 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x98))(**(undefined4 **)(this + 100));
  if (iVar2 < 0) {
    if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00090920 + 0x906d0,0x17dc,DAT_0009091c + 0x906c8);
    }
    this[0x1aa] = (QCamera3HardwareInterface)0x0;
    pthread_mutex_unlock(__mutex);
LAB_000908a4:
    iVar2 = -0x13;
  }
  else {
    if (*(int *)(this + 0x268) == 0) {
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00090928 + 0x906fa,0x17e3,DAT_00090924 + 0x906f2);
      }
      this[0x1aa] = (QCamera3HardwareInterface)0x0;
    }
    else {
      iVar2 = clock_gettime(1,&local_30);
      if (iVar2 < 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_00090930 + 0x90724,0x17ec,DAT_0009092c + 0x9071c);
        }
        bVar1 = false;
      }
      else {
        bVar1 = true;
        local_30.tv_sec = local_30.tv_sec + 3;
      }
      if (*(int *)(this + 0x268) == 0) {
        if (iVar2 != 0) {
LAB_00090894:
          this[0x1aa] = (QCamera3HardwareInterface)0x0;
          pthread_mutex_unlock(__mutex);
          goto LAB_000908a4;
        }
      }
      else {
        iVar2 = DAT_00090934 + 0x90744;
        iVar5 = DAT_00090938 + 0x90746;
        do {
          if (*(int *)(iVar4 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,iVar5,0x17f4,iVar2);
          }
          if (bVar1) {
            iVar8 = pthread_cond_timedwait((pthread_cond_t *)(this + 0x3f4),__mutex,&local_30);
            if (iVar8 != 0) {
              if (*(int *)(iVar4 + 0x20) != 0) {
                pcVar3 = strerror(iVar8);
                uVar6 = 0x1800;
                iVar2 = DAT_00090944 + 0x90866;
                iVar4 = DAT_00090948 + 0x90872;
LAB_00090890:
                mm_camera_debug_log(1,1,iVar4,uVar6,iVar2,pcVar3);
              }
              goto LAB_00090894;
            }
          }
          else {
            iVar8 = pthread_cond_wait((pthread_cond_t *)(this + 0x3f4),__mutex);
            if (iVar8 != 0) {
              if (*(int *)(iVar4 + 0x20) != 0) {
                pcVar3 = strerror(iVar8);
                uVar6 = 0x17f9;
                iVar2 = DAT_0009093c + 0x90886;
                iVar4 = DAT_00090940 + 0x90892;
                goto LAB_00090890;
              }
              goto LAB_00090894;
            }
          }
        } while (*(int *)(this + 0x268) != 0);
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00090950 + 0x907a0,0x180b,DAT_0009094c + 0x90798);
      }
      piVar9 = (int *)(*(int **)(this + 0x3fc))[2];
      if (piVar9 != *(int **)(this + 0x3fc)) {
        iVar2 = DAT_00090954 + 0x907b4;
        iVar5 = DAT_00090958 + 0x907b6;
        do {
          if (((*(int **)(*piVar9 + 0x18) != (int *)0x0) &&
              (iVar8 = (**(code **)(**(int **)(*piVar9 + 0x18) + 0x40))(), iVar8 != 0)) &&
             (*(int *)(iVar4 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,iVar5,0x1815,iVar2,iVar8);
          }
          piVar9 = (int *)piVar9[2];
        } while (piVar9 != *(int **)(this + 0x3fc));
      }
      iVar2 = notifyErrorForPendingRequests(this);
      if (-1 < iVar2) {
        *(undefined4 *)(this + 0x278) = 0;
        pthread_cond_signal((pthread_cond_t *)(this + 0x274));
        this[0x1aa] = (QCamera3HardwareInterface)0x0;
        pthread_mutex_unlock(__mutex);
        if (*(int *)(iVar4 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_00090968 + 0x90828,0x182c,DAT_00090964 + 0x9081e,iVar2);
        }
        goto LAB_000908a8;
      }
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00090960 + 0x9084e,0x1821,DAT_0009095c + 0x90846);
      }
    }
    pthread_mutex_unlock(__mutex);
  }
LAB_000908a8:
  if (1 < *puVar10) {
    if ((**(byte **)(DAT_0009096c + 0x908b6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00090970 + 0x908c4) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar7 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

