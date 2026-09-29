// OoT3D decomp @ 0041056c  name=FUN_0041056c  size=100

void FUN_0041056c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = *(undefined4 **)(param_1 + 0x20c);
  if (((puVar1 == (undefined4 *)0x0) || (iVar2 = (**(code **)*puVar1)(puVar1,param_2), iVar2 == 0))
     && (iVar2 = FUN_003046f8(param_1,param_2), iVar2 == 0)) {
    (**(code **)(*(int *)(param_1 + -0xc) + 0x10))((int *)(param_1 + -0xc),param_2);
  }
  return;
}
