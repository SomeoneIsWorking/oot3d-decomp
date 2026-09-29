// OoT3D decomp @ 0021bce8  name=FUN_0021bce8  size=84

void FUN_0021bce8(int param_1,int param_2)

{
  int iVar1;

  *(undefined2 *)(param_1 + 0x85e) = 0xb;
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0x852)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x840) = DAT_0021bd3c;
  }
  return;
}
