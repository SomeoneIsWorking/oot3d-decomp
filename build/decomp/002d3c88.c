// OoT3D decomp @ 002d3c88  name=FUN_002d3c88  size=72

undefined4 FUN_002d3c88(int param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x89) == '\0') || (iVar2 = FUN_004883fc(param_1 + 0xf4), iVar2 == 0)) {
    *param_4 = 0xffff;
  }
  else {
    uVar1 = FUN_004883f0(iVar2,param_3);
    *param_4 = uVar1;
  }
  return 1;
}

