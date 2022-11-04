
/* qcamera::QCamera3PostProcessor::releaseOfflineBuffers(bool) */

uint __thiscall
qcamera::QCamera3PostProcessor::releaseOfflineBuffers(QCamera3PostProcessor *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)(char)this[0x470];
  if (0 < (int)uVar2) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      if (*(QCamera3ReprocessChannel **)(this + iVar3 * 4 + 0x474) !=
          (QCamera3ReprocessChannel *)0x0) {
        uVar1 = QCamera3ReprocessChannel::unmapOfflineBuffers
                          (*(QCamera3ReprocessChannel **)(this + iVar3 * 4 + 0x474),param_1);
        uVar2 = (uint)(byte)this[0x470];
        uVar4 = uVar4 | uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (char)uVar2);
    return uVar4;
  }
  return 0;
}

