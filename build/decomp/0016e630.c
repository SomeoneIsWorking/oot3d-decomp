// OoT3D decomp @ 0016e630  name=FUN_0016e630  size=60

void FUN_0016e630(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;

  local_10 = DAT_0016e66c;
  *(undefined4 *)(param_2 + 0x221c) = DAT_0016e670;
  iVar2 = FUN_0034dd3c(param_1,param_2,&local_10,0xffffffff);
  uVar1 = DAT_0016e674;
  if (iVar2 < 0xf) {
    *(undefined4 *)(param_2 + 0x6c) = DAT_0016e674;
    *(undefined4 *)(param_2 + 0x221c) = uVar1;
  }
  return;
}
