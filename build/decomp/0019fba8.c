// OoT3D decomp @ 0019fba8  name=FUN_0019fba8  size=152

void FUN_0019fba8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_0019fc44;
  if (*(short *)(param_1 + 0x1c2) == 0) {
    iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc),DAT_0019fc40,param_1 + 0x2c);
    if (iVar2 == 0) goto LAB_0019fc18;
    FUN_0036beac(param_2,*(undefined1 *)(param_1 + 0x1c0));
    uVar3 = DAT_0019fc48;
  }
  else {
    iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) + DAT_0019fc4c,DAT_0019fc40,param_1 + 0x2c);
    uVar3 = DAT_0019fc50;
    if (iVar2 == 0) goto LAB_0019fc18;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
LAB_0019fc18:
  FUN_0035ae08(param_1,uVar1);
  *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x72) =
       (short)(int)*(float *)(param_1 + 0x2c);
  return;
}
