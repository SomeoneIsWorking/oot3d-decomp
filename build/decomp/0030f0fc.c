// OoT3D decomp @ 0030f0fc  name=FUN_0030f0fc  size=44

void FUN_0030f0fc(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_004940e0(param_2);
  if (iVar1 != 0) {
    FUN_004940d8(*param_1);
  }
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}

