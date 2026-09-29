// OoT3D decomp @ 0039d404  name=FUN_0039d404  size=596

void FUN_0039d404(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;

  FUN_0031a3dc();
  uVar1 = DAT_0039d658;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  uVar5 = DAT_0039d664;
  uVar7 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039d65c;
  FUN_00376340(DAT_0039d668,uVar5,DAT_0039d660,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar7;
  iVar3 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  iVar4 = FUN_0036e5e0(DAT_0039d670,DAT_0039d66c,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_0037547c(DAT_0039d67c,param_1 + 0x28,4,DAT_0039d678,DAT_0039d678,DAT_0039d674);
  }
  iVar6 = DAT_0039d68c;
  fVar2 = DAT_0039d684;
  iVar4 = DAT_0039d680;
  if ((*(int *)(DAT_0039d680 + 8) == 0) && (DAT_0039d688 <= *(int *)(param_1 + 0x1e0))) {
    *(undefined2 *)(DAT_0039d68c + param_1) = 3;
    *(undefined2 *)(iVar6 + 4 + param_1) = 0;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar2) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      FUN_0037547c(DAT_0039d690,param_1 + 0x28,4,DAT_0039d678,DAT_0039d678,DAT_0039d674);
    }
    *(undefined4 *)(iVar4 + 8) = 1;
  }
  iVar6 = param_1 + 0x1a4;
  iVar4 = FUN_0036e5e0(DAT_0039d694,uVar1,iVar6);
  if ((((iVar4 != 0) || (iVar4 = FUN_0036e5e0(DAT_0039d698,uVar1,iVar6), iVar4 != 0)) ||
      (iVar4 = FUN_0036e5e0(DAT_0039d69c,uVar1,iVar6), iVar4 != 0)) ||
     (((iVar4 = FUN_0036e5e0(DAT_0039d6a0,uVar1,iVar6), iVar4 != 0 ||
       (iVar4 = FUN_0036e5e0(uVar5,uVar1,iVar6), iVar4 != 0)) ||
      (iVar4 = FUN_0036e5e0(DAT_0039d6a4,uVar1,iVar6), iVar4 != 0)))) {
    FUN_0037547c(0x1000004,param_1 + 0x28,4,DAT_0039d678,DAT_0039d678,DAT_0039d674);
  }
  if (iVar3 != 0) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,10);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar1,fVar2,uVar5,fVar2,param_1 + 0x1a4,DAT_0039d6a8,0);
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfe;
    *(undefined4 *)(param_1 + 0xbbc) = 0x26;
  }
  return;
}
