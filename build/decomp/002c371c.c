// OoT3D decomp @ 002c371c  name=FUN_002c371c  size=248

void FUN_002c371c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5_00,undefined4 param_6,undefined4 param_7,undefined4 param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  param_5_00 = param_5_00 + 0x3410;
  uVar2 = FUN_00324154(param_5_00,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_6);
  }
  FUN_002bd9ec(param_1,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               *(undefined4 *)(param_4 + 0x7c),uVar1,0);
  uVar2 = FUN_00324154(param_5_00,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_7);
  }
  FUN_002bd9ec(param_2,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               param_5,uVar1,0);
  iVar4 = FUN_00324154(param_5_00,param_4);
  iVar3 = DAT_002c3840;
  uVar2 = *(undefined4 *)(param_4 + 0x7c);
  uVar1 = *(undefined *)(param_4 + 0x74);
  *(undefined *)(iVar4 + 0x1c) = 2;
  *(char *)(iVar4 + 8) = (char)*(undefined4 *)(iVar3 + 8);
  *(undefined *)(iVar4 + 9) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  *(undefined4 *)(iVar4 + 0x10) = param_5;
  *(undefined4 *)(iVar4 + 0x14) = param_3;
  return;
}

