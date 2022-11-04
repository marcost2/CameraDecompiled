
/* qcamera::QCamera2HardwareInterface::dequeueDeferredWork(qcamera::QCamera2HardwareInterface::DefWork*,
   int) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::dequeueDeferredWork
          (QCamera2HardwareInterface *this,DefWork *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1d9c));
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(this + 0x1c70) == iVar2) {
    piVar1 = (int *)(this + 0x1c70);
    iVar2 = 0;
joined_r0x000bf134:
    if (param_2 == 0) goto LAB_000befd4;
LAB_000bef90:
    *(int *)(this + iVar2 * 8 + 0x1c74) = param_2;
    if (*(int *)(*(int *)(DAT_000bf154 + 0xbefa0) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bf15c + 0xbefbe,0x382e,DAT_000bf158 + 0xbefb0,param_2,
                          *(undefined4 *)(param_1 + 4));
    }
  }
  else {
    piVar1 = (int *)(this + 0x1c78);
    if (*piVar1 != iVar2) {
      piVar1 = (int *)(this + 0x1c80);
      if (*piVar1 == iVar2) {
        iVar2 = 2;
      }
      else {
        piVar1 = (int *)(this + 0x1c88);
        if (*piVar1 == iVar2) {
          iVar2 = 3;
        }
        else {
          piVar1 = (int *)(this + 0x1c90);
          if (*piVar1 == iVar2) {
            iVar2 = 4;
          }
          else {
            piVar1 = (int *)(this + 0x1c98);
            if (*piVar1 == iVar2) {
              iVar2 = 5;
            }
            else {
              piVar1 = (int *)(this + 0x1ca0);
              if (*piVar1 == iVar2) {
                iVar2 = 6;
              }
              else {
                piVar1 = (int *)(this + 0x1ca8);
                if (*piVar1 == iVar2) {
                  iVar2 = 7;
                }
                else {
                  piVar1 = (int *)(this + 0x1cb0);
                  if (*piVar1 == iVar2) {
                    iVar2 = 8;
                  }
                  else {
                    piVar1 = (int *)(this + 0x1cb8);
                    if (*piVar1 == iVar2) {
                      iVar2 = 9;
                    }
                    else {
                      piVar1 = (int *)(this + 0x1cc0);
                      if (*piVar1 == iVar2) {
                        iVar2 = 10;
                      }
                      else {
                        piVar1 = (int *)(this + 0x1cc8);
                        if (*piVar1 == iVar2) {
                          iVar2 = 0xb;
                        }
                        else {
                          piVar1 = (int *)(this + 0x1cd0);
                          if (*piVar1 == iVar2) {
                            iVar2 = 0xc;
                          }
                          else {
                            piVar1 = (int *)(this + 0x1cd8);
                            if (*piVar1 == iVar2) {
                              iVar2 = 0xd;
                            }
                            else {
                              piVar1 = (int *)(this + 0x1ce0);
                              if (*piVar1 == iVar2) {
                                iVar2 = 0xe;
                              }
                              else {
                                piVar1 = (int *)(this + 0x1ce8);
                                if (*piVar1 == iVar2) {
                                  iVar2 = 0xf;
                                }
                                else {
                                  piVar1 = (int *)(this + 0x1cf0);
                                  if (*piVar1 == iVar2) {
                                    iVar2 = 0x10;
                                  }
                                  else {
                                    piVar1 = (int *)(this + 0x1cf8);
                                    if (*piVar1 == iVar2) {
                                      iVar2 = 0x11;
                                    }
                                    else {
                                      piVar1 = (int *)(this + 0x1d00);
                                      if (*piVar1 == iVar2) {
                                        iVar2 = 0x12;
                                      }
                                      else {
                                        piVar1 = (int *)(this + 0x1d08);
                                        if (*piVar1 == iVar2) {
                                          iVar2 = 0x13;
                                        }
                                        else {
                                          piVar1 = (int *)(this + 0x1d10);
                                          if (*piVar1 == iVar2) {
                                            iVar2 = 0x14;
                                          }
                                          else {
                                            piVar1 = (int *)(this + 0x1d18);
                                            if (*piVar1 == iVar2) {
                                              iVar2 = 0x15;
                                            }
                                            else {
                                              piVar1 = (int *)(this + 0x1d20);
                                              if (*piVar1 == iVar2) {
                                                iVar2 = 0x16;
                                              }
                                              else {
                                                piVar1 = (int *)(this + 0x1d28);
                                                if (*piVar1 == iVar2) {
                                                  iVar2 = 0x17;
                                                }
                                                else {
                                                  piVar1 = (int *)(this + 0x1d30);
                                                  if (*piVar1 != iVar2) {
                                                    uVar3 = 0x80000000;
                                                    goto LAB_000beff2;
                                                  }
                                                  iVar2 = 0x18;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto joined_r0x000bf134;
    }
    iVar2 = 1;
    if (param_2 != 0) goto LAB_000bef90;
LAB_000befd4:
    *piVar1 = 0;
    *(undefined4 *)(this + iVar2 * 8 + 0x1c74) = 0;
  }
  operator_delete(param_1);
  pthread_cond_broadcast((pthread_cond_t *)(this + 0x1da0));
  uVar3 = 0;
LAB_000beff2:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1d9c));
  return uVar3;
}

