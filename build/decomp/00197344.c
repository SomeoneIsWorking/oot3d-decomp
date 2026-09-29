// OoT3D decomp @ 00197344  name=FUN_00197344  size=332

void FUN_00197344(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;

  FUN_003705a0(DAT_001975f4,DAT_001975f0,param_1 + 0x6c);
  uVar2 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x6c),
                       param_1 + 0x28);
  uVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x6c),
                       param_1 + 0x30);
  uVar5 = DAT_001975fc;
  if ((uVar3 & uVar2) == 0) {
    if (*(int *)(param_1 + 0x6c) <= DAT_00197610) {
      return;
    }
    FUN_003738a8(DAT_00197614);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined4 *)(param_1 + 0x6c) = DAT_001975f8;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x30);
  FUN_00375bcc(param_1,uVar5);
  bVar1 = *(byte *)(DAT_00197600 + *(short *)(param_1 + 0x1c));
  if (bVar1 == 0xd) {
LAB_00197404:
    iVar4 = 1;
  }
  else {
    if (bVar1 < 0xe) {
      if (bVar1 < 2 || bVar1 == 5) goto LAB_00197404;
      if (bVar1 == 8) {
        iVar4 = 2;
        goto LAB_00197410;
      }
    }
    else if ((bVar1 == 0x10 || bVar1 == 0x14) || bVar1 == 0x15) goto LAB_00197404;
    iVar4 = 0;
  }
LAB_00197410:
  if (iVar4 != 0) {
    uVar5 = DAT_00197604;
    if ((iVar4 == 1) || (uVar5 = DAT_00197608, iVar4 == 2)) {
      *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0019760c;
  FUN_0036e980(param_2,param_1,7);
  return;
}
