
/* qcamera::QCamera2HardwareInterface::getFDMakerNotesData(qcamera::MotMakernote&) */

void __thiscall
qcamera::QCamera2HardwareInterface::getFDMakerNotesData
          (QCamera2HardwareInterface *this,MotMakernote *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  QCamera2HardwareInterface *pQVar6;
  undefined4 local_420 [256];
  int local_20;
  
  piVar5 = *(int **)(DAT_000ba854 + 0xba842);
  local_20 = *piVar5;
  if (this[0xacc] == (QCamera2HardwareInterface)0x0) {
LAB_000baee2:
    uVar2 = 0;
  }
  else {
    pQVar6 = this + 0xacc;
    iVar1 = MotMakernote::addTag(param_1,0x6000,1,1,pQVar6);
    if (iVar1 == 0) {
      uVar4 = (uint)(byte)*pQVar6;
      if (uVar4 != 0) {
        iVar1 = 0;
        cVar3 = '\0';
        do {
          cVar3 = cVar3 + '\x01';
          *(char *)((int)local_420 + iVar1) = (char)*(undefined4 *)(this + iVar1 * 0x18 + 0xad0);
          iVar1 = (int)cVar3;
        } while (iVar1 < (int)uVar4);
      }
      iVar1 = MotMakernote::addTag(param_1,0x6010,6,uVar4,local_420);
      __aeabi_memclr8(local_420,0x400);
      if (iVar1 == 0) {
        uVar4 = (uint)(byte)*pQVar6;
        if (uVar4 != 0) {
          iVar1 = 0;
          cVar3 = '\0';
          do {
            cVar3 = cVar3 + '\x01';
            *(QCamera2HardwareInterface *)((int)local_420 + iVar1) = this[iVar1 * 0x18 + 0xad4];
            iVar1 = (int)cVar3;
          } while (iVar1 < (int)uVar4);
        }
        iVar1 = MotMakernote::addTag(param_1,0x6020,6,uVar4,local_420);
        __aeabi_memclr8(local_420,0x400);
        if (iVar1 == 0) {
          uVar4 = (uint)(byte)*pQVar6;
          if (uVar4 != 0) {
            iVar1 = 0;
            cVar3 = '\0';
            do {
              cVar3 = cVar3 + '\x01';
              local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xad8);
              iVar1 = (int)cVar3;
            } while (iVar1 < (int)uVar4);
          }
          iVar1 = MotMakernote::addTag(param_1,0x6030,9,uVar4,local_420);
          __aeabi_memclr8(local_420,0x400);
          if (iVar1 == 0) {
            uVar4 = (uint)(byte)*pQVar6;
            if (uVar4 != 0) {
              iVar1 = 0;
              cVar3 = '\0';
              do {
                cVar3 = cVar3 + '\x01';
                local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xadc);
                iVar1 = (int)cVar3;
              } while (iVar1 < (int)uVar4);
            }
            iVar1 = MotMakernote::addTag(param_1,0x6031,9,uVar4,local_420);
            __aeabi_memclr8(local_420,0x400);
            if (iVar1 == 0) {
              uVar4 = (uint)(byte)*pQVar6;
              if (uVar4 != 0) {
                iVar1 = 0;
                cVar3 = '\0';
                do {
                  cVar3 = cVar3 + '\x01';
                  local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xae0);
                  iVar1 = (int)cVar3;
                } while (iVar1 < (int)uVar4);
              }
              iVar1 = MotMakernote::addTag(param_1,0x6032,9,uVar4,local_420);
              __aeabi_memclr8(local_420,0x400);
              if (iVar1 == 0) {
                uVar4 = (uint)(byte)*pQVar6;
                if (uVar4 != 0) {
                  iVar1 = 0;
                  cVar3 = '\0';
                  do {
                    cVar3 = cVar3 + '\x01';
                    local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xae4);
                    iVar1 = (int)cVar3;
                  } while (iVar1 < (int)uVar4);
                }
                iVar1 = MotMakernote::addTag(param_1,0x6033,9,uVar4,local_420);
                __aeabi_memclr8(local_420,0x400);
                if (iVar1 == 0) {
                  uVar4 = (uint)(byte)*pQVar6;
                  if (uVar4 != 0) {
                    iVar1 = 0;
                    cVar3 = '\0';
                    do {
                      cVar3 = cVar3 + '\x01';
                      local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd24);
                      iVar1 = (int)cVar3;
                    } while (iVar1 < (int)uVar4);
                  }
                  iVar1 = MotMakernote::addTag(param_1,0x6040,4,uVar4,local_420);
                  __aeabi_memclr8(local_420,0x400);
                  if (iVar1 == 0) {
                    uVar4 = (uint)(byte)*pQVar6;
                    if (uVar4 != 0) {
                      iVar1 = 0;
                      cVar3 = '\0';
                      do {
                        cVar3 = cVar3 + '\x01';
                        local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd28);
                        iVar1 = (int)cVar3;
                      } while (iVar1 < (int)uVar4);
                    }
                    iVar1 = MotMakernote::addTag(param_1,0x6050,4,uVar4,local_420);
                    __aeabi_memclr8(local_420,0x400);
                    if (iVar1 == 0) {
                      uVar4 = (uint)(byte)*pQVar6;
                      if (uVar4 != 0) {
                        iVar1 = 0;
                        cVar3 = '\0';
                        do {
                          cVar3 = cVar3 + '\x01';
                          local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd2c);
                          iVar1 = (int)cVar3;
                        } while (iVar1 < (int)uVar4);
                      }
                      iVar1 = MotMakernote::addTag(param_1,0x6041,4,uVar4,local_420);
                      __aeabi_memclr8(local_420,0x400);
                      if (iVar1 == 0) {
                        uVar4 = (uint)(byte)*pQVar6;
                        if (uVar4 != 0) {
                          iVar1 = 0;
                          cVar3 = '\0';
                          do {
                            cVar3 = cVar3 + '\x01';
                            local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd30);
                            iVar1 = (int)cVar3;
                          } while (iVar1 < (int)uVar4);
                        }
                        iVar1 = MotMakernote::addTag(param_1,0x6051,4,uVar4,local_420);
                        __aeabi_memclr8(local_420,0x400);
                        if (iVar1 == 0) {
                          uVar4 = (uint)(byte)*pQVar6;
                          if (uVar4 != 0) {
                            iVar1 = 0;
                            cVar3 = '\0';
                            do {
                              cVar3 = cVar3 + '\x01';
                              local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd34);
                              iVar1 = (int)cVar3;
                            } while (iVar1 < (int)uVar4);
                          }
                          iVar1 = MotMakernote::addTag(param_1,0x6060,4,uVar4,local_420);
                          __aeabi_memclr8(local_420,0x400);
                          if (iVar1 == 0) {
                            uVar4 = (uint)(byte)*pQVar6;
                            if (uVar4 != 0) {
                              iVar1 = 0;
                              cVar3 = '\0';
                              do {
                                cVar3 = cVar3 + '\x01';
                                local_420[iVar1] = *(undefined4 *)(this + iVar1 * 0x18 + 0xd38);
                                iVar1 = (int)cVar3;
                              } while (iVar1 < (int)uVar4);
                            }
                            iVar1 = MotMakernote::addTag(param_1,0x6061,4,uVar4,local_420);
                            __aeabi_memclr8(local_420,0x400);
                            if (iVar1 == 0) {
                              uVar4 = (uint)(byte)*pQVar6;
                              if (uVar4 != 0) {
                                iVar1 = 0;
                                cVar3 = '\0';
                                do {
                                  cVar3 = cVar3 + '\x01';
                                  *(QCamera2HardwareInterface *)((int)local_420 + iVar1) =
                                       this[iVar1 * 2 + 0xd0d];
                                  iVar1 = (int)cVar3;
                                } while (iVar1 < (int)uVar4);
                              }
                              iVar1 = MotMakernote::addTag(param_1,0x6070,1,uVar4,local_420);
                              __aeabi_memclr8(local_420,0x400);
                              if (iVar1 == 0) {
                                uVar4 = (uint)(byte)*pQVar6;
                                if (uVar4 != 0) {
                                  iVar1 = 0;
                                  cVar3 = '\0';
                                  do {
                                    cVar3 = cVar3 + '\x01';
                                    *(QCamera2HardwareInterface *)((int)local_420 + iVar1) =
                                         this[iVar1 * 2 + 0xd0e];
                                    iVar1 = (int)cVar3;
                                  } while (iVar1 < (int)uVar4);
                                }
                                iVar1 = MotMakernote::addTag(param_1,0x6071,1,uVar4,local_420);
                                __aeabi_memclr8(local_420,0x400);
                                if (iVar1 == 0) {
                                  uVar4 = (uint)(byte)*pQVar6;
                                  if (uVar4 != 0) {
                                    iVar1 = 0;
                                    cVar3 = '\0';
                                    do {
                                      cVar3 = cVar3 + '\x01';
                                      *(QCamera2HardwareInterface *)((int)local_420 + iVar1) =
                                           this[iVar1 * 8 + 0xbd4];
                                      iVar1 = (int)cVar3;
                                    } while (iVar1 < (int)uVar4);
                                  }
                                  iVar1 = MotMakernote::addTag(param_1,0x6080,1,uVar4,local_420);
                                  __aeabi_memclr8(local_420,0x400);
                                  if (iVar1 == 0) {
                                    uVar4 = (uint)(byte)*pQVar6;
                                    if (uVar4 != 0) {
                                      iVar1 = 0;
                                      cVar3 = '\0';
                                      do {
                                        cVar3 = cVar3 + '\x01';
                                        *(QCamera2HardwareInterface *)((int)local_420 + iVar1) =
                                             this[iVar1 * 0x14 + 0xc44];
                                        iVar1 = (int)cVar3;
                                      } while (iVar1 < (int)uVar4);
                                    }
                                    iVar1 = MotMakernote::addTag(param_1,0x6090,6,uVar4,local_420);
                                    __aeabi_memclr8(local_420,0x400);
                                    if (iVar1 == 0) {
                                      uVar4 = (uint)(byte)*pQVar6;
                                      if (uVar4 != 0) {
                                        iVar1 = 0;
                                        cVar3 = '\0';
                                        do {
                                          cVar3 = cVar3 + '\x01';
                                          *(char *)((int)local_420 + iVar1) =
                                               (char)*(undefined4 *)(this + iVar1 * 0x14 + 0xc48);
                                          iVar1 = (int)cVar3;
                                        } while (iVar1 < (int)uVar4);
                                      }
                                      iVar1 = MotMakernote::addTag(param_1,0x60a0,6,uVar4,local_420)
                                      ;
                                      __aeabi_memclr8(local_420,0x400);
                                      if (iVar1 == 0) {
                                        uVar4 = (uint)(byte)*pQVar6;
                                        if (uVar4 != 0) {
                                          iVar1 = 0;
                                          cVar3 = '\0';
                                          do {
                                            cVar3 = cVar3 + '\x01';
                                            *(char *)((int)local_420 + iVar1) =
                                                 (char)*(undefined4 *)(this + iVar1 * 0x14 + 0xc4c);
                                            iVar1 = (int)cVar3;
                                          } while (iVar1 < (int)uVar4);
                                        }
                                        iVar1 = MotMakernote::addTag
                                                          (param_1,0x60a1,6,uVar4,local_420);
                                        __aeabi_memclr8(local_420,0x400);
                                        if (iVar1 == 0) {
                                          uVar4 = (uint)(byte)*pQVar6;
                                          if (uVar4 != 0) {
                                            iVar1 = 0;
                                            cVar3 = '\0';
                                            do {
                                              cVar3 = cVar3 + '\x01';
                                              *(char *)((int)local_420 + iVar1) =
                                                   (char)*(undefined4 *)
                                                          (this + iVar1 * 0x14 + 0xc50);
                                              iVar1 = (int)cVar3;
                                            } while (iVar1 < (int)uVar4);
                                          }
                                          iVar1 = MotMakernote::addTag
                                                            (param_1,0x60a2,6,uVar4,local_420);
                                          __aeabi_memclr8(local_420,0x400);
                                          if (iVar1 == 0) {
                                            uVar4 = (uint)(byte)*pQVar6;
                                            if (uVar4 == 0) {
                                              uVar4 = 0;
                                            }
                                            else {
                                              iVar1 = 0;
                                              cVar3 = '\0';
                                              do {
                                                cVar3 = cVar3 + '\x01';
                                                *(QCamera2HardwareInterface *)
                                                 ((int)local_420 + iVar1) =
                                                     this[iVar1 * 0x14 + 0xc54];
                                                iVar1 = (int)cVar3;
                                              } while (iVar1 < (int)uVar4);
                                            }
                                            iVar1 = MotMakernote::addTag
                                                              (param_1,0x60b0,6,uVar4,local_420);
                                            __aeabi_memclr8(local_420,0x400);
                                            if (iVar1 == 0) {
                                              uVar4 = (uint)(byte)*pQVar6;
                                              if (uVar4 == 0) {
                                                uVar4 = 0;
                                              }
                                              else {
                                                iVar1 = 0;
                                                cVar3 = '\0';
                                                do {
                                                  cVar3 = cVar3 + '\x01';
                                                  *(QCamera2HardwareInterface *)
                                                   ((int)local_420 + iVar1) =
                                                       this[iVar1 * 0x14 + 0xc55];
                                                  iVar1 = (int)cVar3;
                                                } while (iVar1 < (int)uVar4);
                                              }
                                              iVar1 = MotMakernote::addTag
                                                                (param_1,0x60b1,6,uVar4,local_420);
                                              __aeabi_memclr8(local_420,0x400);
                                              if (iVar1 == 0) {
                                                uVar4 = (uint)(byte)*pQVar6;
                                                if (uVar4 == 0) {
                                                  uVar4 = 0;
                                                }
                                                else {
                                                  iVar1 = 0;
                                                  cVar3 = '\0';
                                                  do {
                                                    cVar3 = cVar3 + '\x01';
                                                    *(QCamera2HardwareInterface *)
                                                     ((int)local_420 + iVar1) =
                                                         this[iVar1 * 3 + 0xc25];
                                                    iVar1 = (int)cVar3;
                                                  } while (iVar1 < (int)uVar4);
                                                }
                                                iVar1 = MotMakernote::addTag
                                                                  (param_1,0x60c0,1,uVar4,local_420)
                                                ;
                                                __aeabi_memclr8(local_420,0x400);
                                                if (iVar1 == 0) {
                                                  uVar4 = (uint)(byte)*pQVar6;
                                                  if (uVar4 == 0) {
                                                    uVar4 = 0;
                                                  }
                                                  else {
                                                    iVar1 = 0;
                                                    cVar3 = '\0';
                                                    do {
                                                      cVar3 = cVar3 + '\x01';
                                                      *(QCamera2HardwareInterface *)
                                                       ((int)local_420 + iVar1) =
                                                           this[iVar1 * 3 + 0xc26];
                                                      iVar1 = (int)cVar3;
                                                    } while (iVar1 < (int)uVar4);
                                                  }
                                                  iVar1 = MotMakernote::addTag
                                                                    (param_1,0x60c1,1,uVar4,
                                                                     local_420);
                                                  __aeabi_memclr8(local_420,0x400);
                                                  if (iVar1 == 0) {
                                                    uVar4 = (uint)(byte)*pQVar6;
                                                    if (uVar4 == 0) {
                                                      uVar4 = 0;
                                                    }
                                                    else {
                                                      iVar1 = 0;
                                                      cVar3 = '\0';
                                                      do {
                                                        cVar3 = cVar3 + '\x01';
                                                        *(QCamera2HardwareInterface *)
                                                         ((int)local_420 + iVar1) =
                                                             this[iVar1 * 3 + 0xc27];
                                                        iVar1 = (int)cVar3;
                                                      } while (iVar1 < (int)uVar4);
                                                    }
                                                    iVar1 = MotMakernote::addTag
                                                                      (param_1,0x60c2,1,uVar4,
                                                                       local_420);
                                                    __aeabi_memclr8(local_420,0x400);
                                                    if (iVar1 == 0) {
                                                      __aeabi_memclr8(this + 0xac8,0x1110);
                                                      goto LAB_000baee2;
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
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

