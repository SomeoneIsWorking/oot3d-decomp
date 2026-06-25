// OoT3D decomp @ 00417bf0  name=FUN_00417bf0  size=132

void FUN_00417bf0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_00350820(param_1 + 4,DAT_00417c74,0x10,6);
  uVar1 = DAT_00417c78;
  *(undefined4 *)(iVar3 + 0x6c) = DAT_00417c78;
  *(undefined4 *)(iVar3 + 0x70) = uVar1;
  *(undefined4 *)(iVar3 + 0x74) = uVar1;
  *(undefined4 *)(iVar3 + 0x78) = uVar1;
  *(undefined4 *)(iVar3 + 0x7c) = uVar1;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(undefined *)(iVar3 + 0x168) = 1;
  *(undefined4 *)(iVar3 + 0x84) = uVar1;
  *(undefined4 *)(iVar3 + 0x88) = uVar1;
  *(undefined4 *)(iVar3 + 0x8c) = uVar1;
  uVar2 = DAT_00417c7c;
  *(undefined4 *)(iVar3 + 0x90) = uVar1;
  *(undefined4 *)(iVar3 + 0x94) = uVar1;
  *(undefined4 *)(iVar3 + 0x98) = uVar2;
  *(undefined4 *)(iVar3 + 0x9c) = uVar1;
  *(undefined4 *)(iVar3 + 0xa0) = uVar2;
  *(undefined4 *)(iVar3 + 0xa4) = uVar1;
  return;
}

