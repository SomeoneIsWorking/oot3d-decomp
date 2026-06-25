// OoT3D decomp @ 0036ebdc  name=FUN_0036ebdc  size=52

void FUN_0036ebdc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0036ec10;
  *(undefined4 *)(DAT_0036ec10 + 0x504) = *(undefined4 *)(param_1 + 0x222c);
  *(undefined4 *)(iVar1 + 0x508) = *(undefined4 *)(param_1 + 0x2248);
  *(undefined4 *)(iVar1 + 0x4ec) = 1;
  FUN_003716f0(param_1,(int)*(short *)(iVar1 + 0x500),0x14,2);
  return;
}

