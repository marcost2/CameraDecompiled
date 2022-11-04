
/* BokehOneData::dump(char const*) */

void __thiscall BokehOneData::dump(BokehOneData *this,char *param_1)

{
  FILE *__s;
  
  __s = fopen(param_1,(char *)(DAT_000ff438 + 0xff41a));
  if (__s != (FILE *)0x0) {
    fwrite(*(void **)(this + 0x18),1,*(size_t *)(this + 0x14),__s);
    fclose(__s);
    return;
  }
  return;
}

