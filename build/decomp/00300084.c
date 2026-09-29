// OoT3D decomp @ 00300084  name=FUN_00300084  size=428

void FUN_00300084(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 local_20;

  puVar1 = (uint *)*DAT_00300230;
  local_20 = param_4;
  FUN_00302ba0();
  param_1 = param_1 & ~puVar1[2];
  if ((puVar1[1] & param_1 & 0x2000) != 0) {
    FUN_00470088();
  }
  if (((param_1 & 0x80) != 0) && (local_20 = 0x1c00, (*puVar1 & 0x1c00) != 0)) {
    FUN_0046fa2c(&local_20);
  }
  if (((param_1 & 0x100) != 0) && (local_20 = 1, (*puVar1 & 1) != 0)) {
    FUN_0046bd6c(&local_20);
  }
  if (((param_1 & 0x200) != 0) && ((*puVar1 & *(uint *)(*DAT_00300234 + 0x1c)) != 0)) {
    FUN_0030349c(puVar1);
  }
  if ((DAT_00300238 & param_1) != 0) {
    *(undefined1 *)(puVar1 + 6) = 1;
    if (param_2 == 0) {
      *(undefined1 *)((int)puVar1 + 0x19) = 1;
    }
    FUN_0046c1e4(puVar1,param_1);
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
  }
  if ((param_1 & 1) != 0) {
    *puVar1 = *puVar1 & 0xffefffff;
  }
  if ((param_1 & 4) != 0) {
    *puVar1 = *puVar1 & 0xfe7fffff;
  }
  if ((param_1 & 8) != 0) {
    *puVar1 = *puVar1 & 0xff9fffff;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar1 = *puVar1 & 0xfff7ffff;
  }
  if ((param_1 & 0x40) != 0) {
    *puVar1 = *puVar1 & ~DAT_0030023c;
  }
  if ((param_1 & 0x80) != 0) {
    *puVar1 = *puVar1 & 0xffffe3ff;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar1 = *puVar1 & 0xffff7f3d;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  puVar1[1] = puVar1[1] & ~param_1;
  FUN_00302ba0();
  return;
}
