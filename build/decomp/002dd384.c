// OoT3D decomp @ 002dd384  name=FUN_002dd384  size=112

uint FUN_002dd384(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x9c) != param_3)) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,1,param_4);
    if ((uVar2 & 0xff) != 0) {
      return uVar2;
    }
    if (*param_2 != 0) {
      FUN_002d3d38();
    }
    iVar1 = *param_2;
  }
  FUN_0030f0d4(iVar1,1);
  return 0;
}

