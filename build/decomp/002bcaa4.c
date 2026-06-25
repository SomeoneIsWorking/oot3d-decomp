// OoT3D decomp @ 002bcaa4  name=FUN_002bcaa4  size=124

void FUN_002bcaa4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00324154(param_3 + 0x3410,param_2);
  iVar3 = *(int *)(param_2 + 4);
  uVar1 = *(undefined *)(param_2 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_4);
  }
  FUN_002bd9ec(param_1,uVar2,*(undefined4 *)(param_2 + 0x28),iVar3,*(undefined *)(param_2 + 0x74),
               *(undefined4 *)(param_2 + 0x7c),uVar1,0);
  return;
}

