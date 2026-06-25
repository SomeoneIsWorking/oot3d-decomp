// OoT3D decomp @ 0032c408  name=FUN_0032c408  size=304

void FUN_0032c408(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5_00,undefined4 param_6,undefined4 param_7,undefined4 param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00324154(param_5_00 + 0x3410,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_6);
  }
  FUN_002bd9ec(param_1,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               *(undefined4 *)(param_4 + 0x78),uVar1,0);
  uVar2 = FUN_00324154(param_5_00 + 0x3410,param_4);
  iVar3 = *(int *)(param_4 + 4);
  uVar1 = *(undefined *)(param_4 + 0x81);
  if (iVar3 != 0) {
    iVar3 = FUN_0034807c(iVar3,param_7);
  }
  FUN_002bd9ec(param_2,uVar2,*(undefined4 *)(param_4 + 0x28),iVar3,*(undefined *)(param_4 + 0x74),
               param_5,uVar1,0);
  if ((*DAT_0032c538 & 0xff & *DAT_0032c53c) == 0) {
    FUN_0030f900(param_3,*(undefined *)(param_4 + 0x74),*(undefined *)(param_4 + 0x75),
                 *(undefined4 *)(param_4 + 0x78),*(undefined4 *)(param_4 + 0x78),param_5);
  }
  return;
}

