// OoT3D decomp @ 0040feb0  name=FUN_0040feb0  size=104

void FUN_0040feb0(int param_1,int param_2)

{
  int iVar1;

  if (param_2 - 0xb5U < 9) {
    if (((*DAT_0040ff18 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0040ff18), iVar1 != 0)) {
      FUN_0036788c(DAT_0040ff1c);
    }
    param_2 = *(int *)(DAT_0040ff28 + 0xf3c) + 0xb5;
  }
  FUN_003066dc(param_1 + 8,param_2);
  return;
}
