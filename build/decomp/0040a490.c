// OoT3D decomp @ 0040a490  name=FUN_0040a490  size=212

void FUN_0040a490(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  undefined1 auStack_14 [4];

  uVar2 = DAT_0040a568;
  iVar1 = DAT_0040a564;
  if (*(char *)(DAT_0040a564 + 1) != '\0') {
    *(undefined1 *)(DAT_0040a564 + 1) = 0;
    FUN_00306e40(uVar2,0);
  }
  piVar3 = DAT_0040a56c;
  local_18 = *DAT_0040a56c;
  uVar4 = FUN_0030dbd4(auStack_14,&local_18,1,0,0xffffffff,0xffffffff);
  uVar5 = uVar4 >> 0x1b;
  if ((uVar4 & 0x80000000) != 0) {
    uVar5 = uVar5 - 0x20;
  }
  if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
    FUN_003351b4();
  }
  *(undefined1 *)(piVar3 + 1) = 1;
  if (*piVar3 != 0) {
    software_interrupt(0x23);
    *piVar3 = 0;
  }
  FUN_0030e560(DAT_0040a568);
  FUN_00306cc0(&DAT_0040a570);
  FUN_0030e518(DAT_0040a578);
  FUN_00306c78();
  FUN_0034fc6c(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}
