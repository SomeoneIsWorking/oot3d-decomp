// OoT3D decomp @ 0037ac68  name=FUN_0037ac68  size=184

void FUN_0037ac68(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;

  FUN_003510b0(param_1,DAT_0037ad20);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1e0,6,0);
  uVar2 = FUN_00353fd4(param_1,param_2,4);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  cVar1 = FUN_00363c10(param_2 + 0x3a58,0x73);
  *(char *)(param_1 + 0x1dc) = cVar1;
  if (cVar1 < '\0') {
    FUN_00374428(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0037ad24;
  }
  return;
}
