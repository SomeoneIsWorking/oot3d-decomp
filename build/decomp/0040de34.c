// OoT3D decomp @ 0040de34  name=FUN_0040de34  size=108

undefined4 FUN_0040de34(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_00304350(*(undefined4 *)(param_1 + 4),param_3);
  uVar2 = FUN_0040d668();
  uVar3 = FUN_0040d7c0();
  *param_2 = uVar3;
  uVar1 = FUN_0040d79c(uVar2);
  *(undefined1 *)((int)param_2 + 9) = uVar1;
  uVar1 = FUN_0040d778(uVar2);
  *(undefined1 *)((int)param_2 + 10) = uVar1;
  FUN_0040d674(uVar2,(int)param_2 + 0xb,param_2 + 3,2);
  uVar2 = FUN_0040d73c(uVar2);
  FUN_00304380(param_2 + 1,uVar2);
  return 1;
}
