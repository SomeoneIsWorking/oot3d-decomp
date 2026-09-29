// OoT3D decomp @ 003e17f0  name=FUN_003e17f0  size=136

void FUN_003e17f0(int param_1)

{
  short sVar1;
  undefined1 uVar2;

  FUN_003731e0(param_1 + 0x1c8);
  FUN_003705a0(DAT_003e187c,DAT_003e1878,param_1 + 0x6c);
  FUN_00370378(param_1 + 0xbc,DAT_003e1880,0x100);
  if ((*(short *)(param_1 + 0x252) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x252) + -1, *(short *)(param_1 + 0x252) = sVar1, sVar1 != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x251) == '\0') {
    if (*(short *)(param_1 + 0x1c) != 4) goto LAB_003e1868;
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x250) = uVar2;
LAB_003e1868:
  FUN_0036d878(param_1);
  return;
}
