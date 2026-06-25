// OoT3D decomp @ 002dd7b8  name=FUN_002dd7b8  size=248

void FUN_002dd7b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5_00,undefined4 param_6,undefined4 param_7,undefined4 param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_5_00 = param_5_00 + 0x3410;
  uVar2 = FUN_00324154(param_5_00,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_6);
  }
  FUN_002bd9ec(param_1,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               *(undefined4 *)(param_4 + 0x78),uVar1,0);
  uVar2 = FUN_00324154(param_5_00,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_7);
  }
  FUN_002bd9ec(param_2,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               param_5,uVar1,0);
  uVar2 = FUN_00324154(param_5_00,param_4);
  FUN_002c3814(param_3,uVar2,*(undefined *)(param_4 + 0x74),*(undefined4 *)(param_4 + 0x78),param_5)
  ;
  return;
}

