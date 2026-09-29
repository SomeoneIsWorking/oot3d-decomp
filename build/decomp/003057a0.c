// OoT3D decomp @ 003057a0  name=FUN_003057a0  size=140

void FUN_003057a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;

  uVar1 = DAT_0030582c;
  *(undefined1 *)(*(int *)(param_1 + 0x52c) + 0x6c) = 1;
  iVar3 = *(int *)(param_1 + 0x52c);
  if (param_2 == 0) {
    uVar2 = FUN_00305980(param_1 + 0x924,3,&local_18);
    FUN_00305950(iVar3,uVar2,local_18);
  }
  else {
    uVar2 = FUN_00305980(param_1 + 0x924,2,&local_18);
    FUN_00305950(iVar3,uVar2,local_18);
  }
  *(undefined1 *)(iVar3 + 0x14) = 1;
  *(undefined4 *)(iVar3 + 0x18) = uVar1;
  return;
}
