
/* BokehData::~BokehData() */

BokehData * __thiscall BokehData::_BokehData(BokehData *this)

{
  void *pvVar1;
  
  if (*(BokehOneData **)this != (BokehOneData *)0x0) {
    pvVar1 = (void *)BokehOneData::_BokehOneData(*(BokehOneData **)this);
    operator_delete(pvVar1);
  }
  if (*(BokehOneData **)(this + 4) != (BokehOneData *)0x0) {
    pvVar1 = (void *)BokehOneData::_BokehOneData(*(BokehOneData **)(this + 4));
    operator_delete(pvVar1);
  }
  if (*(BokehOneData **)(this + 8) != (BokehOneData *)0x0) {
    pvVar1 = (void *)BokehOneData::_BokehOneData(*(BokehOneData **)(this + 8));
    operator_delete(pvVar1);
  }
  return this;
}

