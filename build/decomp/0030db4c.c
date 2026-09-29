// OoT3D decomp @ 0030db4c  name=FUN_0030db4c  size=100

void FUN_0030db4c(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_c;
  undefined1 auStack_8 [4];

  local_c = *DAT_0030dbb0;
  uVar1 = FUN_0030dbd4(auStack_8,&local_c,1,0,0xffffffff,0xffffffff);
  uVar2 = uVar1 >> 0x1b;
  if ((uVar1 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}
