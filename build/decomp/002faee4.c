// OoT3D decomp @ 002faee4  name=FUN_002faee4  size=64

void FUN_002faee4(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_002faf88;
  puVar1 = DAT_002faf80;
  *DAT_002faf80 = 0x17;
  puVar1[1] = 0x36;
  iVar2 = DAT_002faf84;
  iVar4 = 0;
  do {
    *(uint *)(iVar2 + iVar4 * 4) = param_1 + (param_1 >> 0x10);
    iVar4 = iVar4 + 1;
    param_1 = DAT_002faf8c * param_1 + iVar3;
  } while (iVar4 < 0x37);
  return;
}
