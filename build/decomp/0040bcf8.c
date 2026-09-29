// OoT3D decomp @ 0040bcf8  name=FUN_0040bcf8  size=68

void FUN_0040bcf8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;

  *(undefined1 *)(*(int *)(param_1 + 0x534) + 0x6c) = 1;
  iVar2 = *(int *)(param_1 + 0x534);
  local_10 = param_4;
  uVar1 = FUN_00305980(param_1 + 0x924,5,&local_10);
  FUN_00305950(iVar2,uVar1,local_10);
  uVar1 = DAT_0040bd3c;
  *(undefined1 *)(iVar2 + 0x14) = 1;
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  return;
}
