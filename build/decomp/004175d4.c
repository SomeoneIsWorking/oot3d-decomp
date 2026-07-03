// OoT3D decomp @ 004175d4  name=FUN_004175d4  size=108

void FUN_004175d4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_0041ae54();
  *puVar2 = DAT_00417640;
  iVar3 = FUN_0041f348(puVar2 + 0x14);
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x24) = 0;
  *(undefined1 *)(iVar3 + 0x25) = 1;
  *(undefined1 *)(iVar3 + 0x26) = 0xff;
  *(undefined4 *)(iVar3 + 0x34) = 0x10;
  *(undefined4 *)(iVar3 + 0x38) = 2;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  iVar1 = DAT_00417644;
  *(undefined1 *)(iVar3 + -0x4b) = 2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x14) = iVar3 + -0x50;
  return;
}

