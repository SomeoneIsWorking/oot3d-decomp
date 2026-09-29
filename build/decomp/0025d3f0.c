// OoT3D decomp @ 0025d3f0  name=FUN_0025d3f0  size=60

void FUN_0025d3f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_0025d42c;
  *(undefined4 *)(param_2 + 0x221c) = DAT_0025d42c;
  *(undefined4 *)(DAT_0025d430 + 0x144) = uVar1;
  iVar2 = FUN_0033ea74(DAT_0025d434,param_1,param_2);
  if (iVar2 != 0) {
    *(undefined2 *)(DAT_0025d438 + param_2) = 0xfff1;
  }
  return;
}
