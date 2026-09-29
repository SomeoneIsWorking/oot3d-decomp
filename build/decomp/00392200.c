// OoT3D decomp @ 00392200  name=FUN_00392200  size=192

void FUN_00392200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  short *psVar4;
  undefined4 uVar5;

  iVar1 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003922c0;
  FUN_00376340(DAT_003922cc,DAT_003922c8,DAT_003922c4,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar5;
  FUN_003264c8(param_1);
  FUN_0031cddc(param_1,param_2);
  psVar4 = (short *)0x0;
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    psVar4 = *(short **)(param_2 + 0x22e8);
  }
  bVar3 = true;
  if ((psVar4 == (short *)0x0) || (*psVar4 != 8)) {
    bVar3 = false;
  }
  if (bVar3 && iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
