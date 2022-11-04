
/* qcamera::QCameraStream::mapBuffers() */

int __thiscall qcamera::QCameraStream::mapBuffers(QCameraStream *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  cam_buf_map_type_list acStack6200 [2052];
  QCameraBufferMaps aQStack4148 [2052];
  undefined auStack2096 [2060];
  
  piVar9 = *(int **)(DAT_000d1848 + 0xd169c);
  iVar1 = *piVar9;
  QCameraBufferMaps::QCameraBufferMaps(aQStack4148);
  iVar2 = (**(code **)(**(int **)(this + 0x114) + 0x1c))(*(int **)(this + 0x114),this + 0x10074);
  if (iVar2 == 0) {
    if (*(undefined4 **)(this + 0x10c) == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000d1858 + 0xd17a4) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d1860 + 0xd17bc,0x690,DAT_000d185c + 0xd17b4);
      }
      iVar2 = -0x80000000;
    }
    else {
      uVar3 = (**(code **)**(undefined4 **)(this + 0x10c))();
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          uVar4 = QCameraMemory::getSize(*(QCameraMemory **)(this + 0x10c),uVar8);
          if (uVar4 == 0xffffffb5) {
            if (*(int *)(*(int *)(DAT_000d1870 + 0xd17ca) + 0x20) != 0) {
              uVar7 = 0x6a3;
              iVar2 = DAT_000d1874 + 0xd17de;
              iVar6 = DAT_000d1878 + 0xd17e8;
LAB_000d1808:
              mm_camera_debug_log(1,1,iVar6,uVar7,iVar2,uVar8);
            }
LAB_000d180c:
            iVar2 = -0x4b;
            goto LAB_000d1828;
          }
          uVar10 = *(uint *)(this + 0x68);
          iVar2 = QCameraMemory::getFd(*(QCameraMemory **)(this + 0x10c),uVar8);
          pvVar5 = (void *)(**(code **)(**(int **)(this + 0x10c) + 0x24))
                                     (*(int **)(this + 0x10c),uVar8);
          uVar11 = 0;
          iVar2 = QCameraBufferMaps::enqueue(aQStack4148,3,uVar10,uVar8,-1,0,iVar2,uVar4,pvVar5);
          if (iVar2 < 0) {
            if (*(int *)(*(int *)(DAT_000d1864 + 0xd17ee) + 0x20) != 0) {
              uVar7 = 0x69e;
              iVar2 = DAT_000d1868 + 0xd1802;
              iVar6 = DAT_000d186c + 0xd180a;
              uVar8 = uVar11;
              goto LAB_000d1808;
            }
            goto LAB_000d180c;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
        if (iVar2 != 0) goto LAB_000d1828;
      }
      iVar2 = QCameraBufferMaps::getCamBufMapList(aQStack4148,acStack6200);
      if (iVar2 == 0) {
        __aeabi_memcpy8(auStack2096,acStack6200,0x804);
        if (*(code **)(this + 0x2ec) == (code *)0x0) {
          iVar2 = (**(code **)(*(int *)(this + 0x6c) + 0x54))
                            (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),auStack2096);
        }
        else {
          iVar2 = (**(code **)(this + 0x2ec))(auStack2096,*(undefined4 *)(this + 0x2f4));
        }
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000d184c + 0xd16c2) + 0x20) == 0) {
    iVar2 = -0xc;
  }
  else {
    mm_camera_debug_log(1,1,DAT_000d1854 + 0xd16dc,0x68b,DAT_000d1850 + 0xd16d4);
    iVar2 = -0xc;
  }
LAB_000d1828:
  QCameraBufferMaps::_QCameraBufferMaps(aQStack4148);
  if (*piVar9 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

