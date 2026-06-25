// OoT3D decomp @ 0040a0e8  name=FUN_0040a0e8  size=48

void FUN_0040a0e8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0040a120;
  uVar2 = DAT_0040a11c;
  iVar1 = DAT_0040a118;
  *(undefined *)(DAT_0040a118 + 4) = 0;
  *(undefined *)(iVar1 + 3) = 0;
  *(undefined *)(iVar1 + 2) = 0;
  *(undefined *)(iVar1 + 1) = 0;
  *(undefined4 *)(iVar1 + 0x94) = uVar2;
  *(undefined4 *)(iVar1 + 0x98) = uVar3;
  return;
}

