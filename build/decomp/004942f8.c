// OoT3D decomp @ 004942f8  name=FUN_004942f8  size=92

int * FUN_004942f8(void)

{
  int iVar1;
  int *piVar2;

  piVar2 = (int *)FUN_002c17f4();
  iVar1 = DAT_00494354;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[0x13] = 0;
  *piVar2 = iVar1;
  piVar2[0xf] = iVar1 + 0x30;
  piVar2[0x12] = iVar1 + 0x44;
  piVar2[0x14] = 0;
  FUN_00309e78(piVar2 + 0x1e);
  *(undefined1 *)(piVar2 + 0x23) = 0;
  *(undefined1 *)((int)piVar2 + 0x8d) = 0;
  *(undefined1 *)((int)piVar2 + 0x8e) = 0;
  *(undefined1 *)((int)piVar2 + 0x8f) = 0;
  *(undefined1 *)(piVar2 + 0x24) = 0;
  return piVar2;
}
