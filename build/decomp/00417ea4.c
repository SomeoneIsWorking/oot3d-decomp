// OoT3D decomp @ 00417ea4  name=FUN_00417ea4  size=180

int FUN_00417ea4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  local_c = 0;
  iVar1 = FUN_0041bcd4(&local_c);
  if (-1 < iVar1) {
    *DAT_00417f58 = local_c;
    local_c = DAT_00417f5c;
    local_1c = 4;
    local_18 = DAT_00417f64;
    local_14 = DAT_00417f68;
    local_10 = DAT_00417f6c;
    uVar2 = FUN_0030dbf8(DAT_00417f78,&local_1c,DAT_00417f60,&local_c,DAT_00417f70,DAT_00417f74,
                         0xfffffffe,0);
    uVar3 = uVar2 >> 0x1b;
    if ((uVar2 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4();
    }
  }
  return iVar1;
}
