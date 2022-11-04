
/* BokehOneData::dump(char const*, int) */

void __thiscall BokehOneData::dump(BokehOneData *this,char *param_1,int param_2)

{
  FILE *__s;
  
  if (param_2 == 1) {
    __strcat_chk(param_1,DAT_000ff494 + 0xff468,0xffffffff);
    __s = fopen(param_1,(char *)(DAT_000ff498 + 0xff472));
    if (__s != (FILE *)0x0) {
      fwrite(*(void **)(this + 0x18),1,*(size_t *)(this + 0x14),__s);
      fclose(__s);
      return;
    }
  }
  else if (param_2 == 2) {
    __strcat_chk(param_1,DAT_000ff490 + 0xff454,0xffffffff);
    return;
  }
  return;
}

