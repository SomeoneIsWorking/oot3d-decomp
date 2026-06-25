// OoT3D decomp @ 0030efb0  name=FUN_0030efb0  size=272

code * FUN_0030efb0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_20 [2];
  int local_18;
  
  if (param_3 == 0) {
    piVar2 = *(int **)(param_1 + 4);
    if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
      do {
        piVar3 = (int *)*piVar2;
        local_18 = 0;
        FUN_0030f0fc(&local_18,piVar2 + -0x37);
        (*param_2)(&local_18);
        FUN_00313bdc(&local_18);
        piVar2 = piVar3;
      } while (piVar3 != (int *)(param_1 + 4));
    }
  }
  else {
    local_18 = param_1 + 4;
    if (local_18 != *(int *)(param_1 + 4)) {
      do {
        local_20[0] = 0;
        FUN_0030f0fc(local_20,*(int *)(local_18 + 4) + -0xdc);
        (*param_2)(local_20);
        iVar1 = local_20[0];
        if (local_20[0] != 0) {
          iVar1 = 1;
        }
        if (iVar1 != 0) {
          local_18 = *(int *)(local_18 + 4);
        }
        FUN_00313bdc(local_20);
      } while (local_18 != *(int *)(param_1 + 4));
    }
  }
  return param_2;
}

