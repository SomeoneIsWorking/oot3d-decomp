// OoT3D decomp @ 0019faf4  name=FUN_0019faf4  size=156

void FUN_0019faf4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_0019fb90;
  if (*(short *)(param_1 + 0x1c4) == 0) {
    iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc),DAT_0019fb94,param_1 + 0x2c);
    if (iVar2 == 0) goto LAB_0019fb68;
    FUN_0036beac(param_2,*(undefined1 *)(param_1 + 0x1c8));
    uVar3 = DAT_0019fb98;
  }
  else {
    iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) - DAT_0019fb9c,DAT_0019fba0,param_1 + 0x2c);
    uVar3 = DAT_0019fba4;
    if (iVar2 == 0) goto LAB_0019fb68;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
LAB_0019fb68:
  FUN_0035ae08(param_1,uVar1);
  *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x12) =
       (short)(int)*(float *)(param_1 + 0x2c);
  return;
}
