// OoT3D decomp @ 0040d420  name=FUN_0040d420  size=100

void FUN_0040d420(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)param_1[0x86];
  if (((puVar1 == (undefined4 *)0x0) || (iVar2 = (**(code **)*puVar1)(puVar1,param_2), iVar2 == 0))
     && (iVar2 = FUN_003046f8(param_1 + 3,param_2), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  return;
}
