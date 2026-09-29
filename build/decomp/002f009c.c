// OoT3D decomp @ 002f009c  name=FUN_002f009c  size=68

void FUN_002f009c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar2 = DAT_002f00e8;
  uVar1 = DAT_002f00e4;
  uVar3 = *(uint *)(DAT_002f00e0 + 0x68) ^ 1;
  *(uint *)(DAT_002f00e0 + 0x68) = uVar3;
  uVar4 = DAT_002f00ec;
  if (uVar3 != 0) {
    uVar4 = DAT_002f00f0;
  }
  FUN_0037547c(uVar4,0,4,uVar2,uVar2,uVar1);
  return;
}
