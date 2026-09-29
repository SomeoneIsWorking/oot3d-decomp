// OoT3D decomp @ 00302540  name=FUN_00302540  size=124

int FUN_00302540(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_10 [4];

  if (*param_1 == 0) {
    puVar2 = (undefined4 *)param_1[2];
    if ((puVar2 != (undefined4 *)0x0) &&
       (iVar1 = (**(code **)*puVar2)(puVar2,auStack_10,param_3 + param_1[3],0,param_5,param_6),
       iVar1 < 0)) {
      return iVar1;
    }
  }
  else {
    FUN_0034338c(param_5,*param_1 + param_3,param_6);
  }
  return 0;
}
