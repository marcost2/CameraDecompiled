
/* qcamera::QCameraReprocessChannel::stop() */

undefined4 __thiscall qcamera::QCameraReprocessChannel::stop(QCameraReprocessChannel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  QCameraStream **ppQVar4;
  QCameraStream **ppQVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  QCameraStream **ppQVar9;
  undefined8 uVar10;
  
  uVar1 = QCameraChannel::stop((QCameraChannel *)this);
  ppQVar9 = (QCameraStream **)(*(QCameraStream ***)(this + 0x5c))[4];
  if (ppQVar9 != *(QCameraStream ***)(this + 0x5c)) {
    iVar7 = *(int *)(DAT_000cd918 + 0xcd8ac);
    iVar2 = DAT_000cd91c + 0xcd8b4;
    iVar8 = DAT_000cd920 + 0xcd8b6;
    do {
      if (*ppQVar9 != (QCameraStream *)0x0) {
        uVar10 = QCameraStream::unmapBuf
                           (*ppQVar9,*(uchar *)(ppQVar9 + 1),(uint)ppQVar9[2],-1,
                            (mm_camera_map_unmap_ops_tbl_t *)0x0);
        iVar6 = (int)((ulonglong)uVar10 >> 0x20);
        iVar3 = (int)uVar10;
        if (iVar3 != 0) {
          iVar6 = *(int *)(iVar7 + 0x20);
        }
        if (iVar3 != 0 && iVar6 != 0) {
          mm_camera_debug_log(1,1,iVar8,0x526,iVar2,iVar3);
        }
      }
      ppQVar9 = (QCameraStream **)ppQVar9[4];
    } while (ppQVar9 != *(QCameraStream ***)(this + 0x5c));
    ppQVar4 = (QCameraStream **)ppQVar9[4];
    ppQVar5 = ppQVar4;
    if (ppQVar4 != ppQVar9) {
      do {
        ppQVar4 = (QCameraStream **)ppQVar5[4];
        if (ppQVar5 != (QCameraStream **)0x0) {
          operator_delete(ppQVar5);
          ppQVar9 = *(QCameraStream ***)(this + 0x5c);
        }
        ppQVar5 = ppQVar4;
      } while (ppQVar4 != ppQVar9);
    }
    ppQVar4[3] = (QCameraStream *)ppQVar4;
    *(int *)(*(int *)(this + 0x5c) + 0x10) = *(int *)(this + 0x5c);
  }
  return uVar1;
}

