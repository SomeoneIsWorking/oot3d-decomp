// OoT3D decomp @ 00455460  name=FUN_00455460  size=132

bool FUN_00455460(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  if (*(char *)(param_1 + 0xd) != '\0') {
    uVar2 = FUN_00313b60();
    FUN_002db984(uVar2,0x1e);
    FUN_00343280(param_1 + 0x1440,0x800);
    iVar3 = DAT_004554c0;
    *(undefined4 *)(param_1 + 0x1c40) = DAT_004554bc;
    *(undefined4 *)(iVar3 + param_1) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  iVar3 = FUN_00313b60();
  cVar1 = FUN_002d44a4(iVar3 + 0x388,iVar3 + 0x430,0x1000000,0,unaff_r4,unaff_lr);
  return cVar1 == '\0';
}
