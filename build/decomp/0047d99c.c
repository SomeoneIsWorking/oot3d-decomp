// OoT3D decomp @ 0047d99c  name=FUN_0047d99c  size=96

void FUN_0047d99c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_c = (param_2 + -0x10) - (((uint)*(ushort *)(param_2 + -0xe) << 0x11) >> 0x19);
  local_8 = param_2 + *(int *)(param_2 + -0xc);
  iVar2 = *(int *)(param_2 + -8);
  iVar1 = *(int *)(param_2 + -4);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  FUN_00485444(param_1 + 0x24,&local_c);
  return;
}

