
/* BokehOneData::BokehOneData() */

BokehOneData * __thiscall BokehOneData::BokehOneData(BokehOneData *this)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(this + 100) = 800;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3fa66666;
  *(undefined4 *)(this + 0x50) = 3;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  if (*(int *)(*(int *)(DAT_000ff23c + 0xff20c) + 0x2c) != 0) {
    uVar1 = gettid();
    iVar2 = DAT_000ff240 + 0xff220;
    mm_camera_debug_log(1,4,iVar2,0x32,DAT_000ff244 + 0xff21e,uVar1,iVar2,iVar2);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return this;
}

