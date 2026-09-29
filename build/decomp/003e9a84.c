// OoT3D decomp @ 003e9a84  name=FUN_003e9a84  size=296

void FUN_003e9a84(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003e9bac;
  iVar3 = FUN_003736fc(DAT_003e9bac,DAT_003e9bac,param_1 + 0x1a4);
  if ((iVar3 != 0) || (iVar3 = FUN_003736fc(DAT_003e9bb0,uVar1,param_1 + 0x1a4), iVar3 != 0)) {
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_003e9bb4);
    }
    else {
      FUN_00375bcc(param_1,DAT_003e9bb8);
    }
  }
  FUN_00373500(DAT_003e9bc4,DAT_003e9bc0,DAT_003e9bbc,param_1 + 0x6c);
  FUN_00370084(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),3,2000);
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),2,DAT_003e9bc8);
  uVar2 = DAT_003e9bcc;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_003e9bcc;
  }
  iVar3 = DAT_003e9bd4;
  if (*(int *)(param_1 + 0x98) <= DAT_003e9bd0) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003e9bd4 + 0xc));
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,uVar2,uVar4,DAT_003e9bd8,param_1 + 0x1a4,*(undefined4 *)(iVar3 + 0xc),2);
    iVar3 = DAT_003e9be0;
    *(undefined4 *)(param_1 + 0x708) = DAT_003e9bdc;
    *(undefined2 *)(iVar3 + param_1) = 0x2d;
  }
  return;
}
