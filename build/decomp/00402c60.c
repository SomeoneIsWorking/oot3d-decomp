// OoT3D decomp @ 00402c60  name=FUN_00402c60  size=100

void FUN_00402c60(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = (int *)FUN_004026c4();
  iVar2 = DAT_00402cc8;
  iVar1 = DAT_00402cc4;
  *piVar3 = DAT_00402cc4;
  piVar3[0x16] = iVar1 + 0x24;
  piVar3[0x17] = 0;
  piVar3[0x18] = 0;
  piVar3[0x19] = 0;
  piVar3[0x1a] = iVar2;
  piVar3[0x1b] = iVar2;
  piVar3[0x1c] = iVar2;
  piVar3[0x1d] = iVar2;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = iVar2;
  *(undefined1 *)(piVar3 + 0x20) = 1;
  *(undefined1 *)((int)piVar3 + 0x81) = 0;
  *(undefined1 *)((int)piVar3 + 0x82) = 1;
  return;
}
