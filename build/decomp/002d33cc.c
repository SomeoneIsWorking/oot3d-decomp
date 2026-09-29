// OoT3D decomp @ 002d33cc  name=FUN_002d33cc  size=96

int FUN_002d33cc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_18;

  uStack_18 = param_4;
  FUN_0030af40(&uStack_18,param_1 + 0x2c);
  piVar1 = (int *)(param_1 + param_2 * 0xc);
  if (*piVar1 == 0) {
    FUN_0030aedc(&uStack_18);
    return 0;
  }
  iVar2 = piVar1[1];
  if (param_3 != 0) {
    FUN_0030c964();
  }
  FUN_0030aedc(&uStack_18);
  return iVar2 + -4;
}
