// OoT3D decomp @ 0015d0fc  name=FUN_0015d0fc  size=80

void FUN_0015d0fc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x7b8) = DAT_0015d14c;
  }
  return;
}
