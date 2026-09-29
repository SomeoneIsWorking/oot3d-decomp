// OoT3D decomp @ 0044af80  name=FUN_0044af80  size=168

void FUN_0044af80(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  undefined1 auStack_10 [4];

  iVar1 = DAT_0044b028;
  *(undefined1 *)(DAT_0044b028 + 0x1d) = 1;
  software_interrupt(0x18);
  uVar4 = *(uint *)(iVar1 + 0xac) >> 0x1b;
  if ((*(uint *)(iVar1 + 0xac) & 0x80000000) != 0) {
    uVar4 = uVar4 - 0x20;
  }
  if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
    FUN_003351b4();
  }
  piVar2 = DAT_0044b02c;
  local_14 = *DAT_0044b02c;
  uVar3 = FUN_0030dbd4(auStack_10,&local_14,1,0,0xffffffff,0xffffffff);
  uVar4 = uVar3 >> 0x1b;
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = uVar4 - 0x20;
  }
  if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
    FUN_003351b4();
  }
  *(undefined1 *)(piVar2 + 1) = 1;
  if (*piVar2 != 0) {
    software_interrupt(0x23);
    *piVar2 = 0;
  }
  return;
}
